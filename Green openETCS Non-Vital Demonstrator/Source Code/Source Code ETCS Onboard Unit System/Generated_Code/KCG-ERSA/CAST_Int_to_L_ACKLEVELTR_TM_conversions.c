/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_ACKLEVELTR_TM_conversions.h"

/* TM_conversions::CAST_Int_to_L_ACKLEVELTR */
L_ACKLEVELTR CAST_Int_to_L_ACKLEVELTR_TM_conversions(
  /* TM_conversions::CAST_Int_to_L_ACKLEVELTR::l_ackleveltr_int */ kcg_int l_ackleveltr_int)
{
  /* TM_conversions::CAST_Int_to_L_ACKLEVELTR::l_ackleveltr */
  static L_ACKLEVELTR l_ackleveltr;
  
  l_ackleveltr = l_ackleveltr_int;
  return l_ackleveltr;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_ACKLEVELTR_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */
