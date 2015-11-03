/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_LOA_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_LOA */
V_LOA CAST_Int_to_V_LOA_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_LOA::v_loa_int */ kcg_int v_loa_int)
{
  /* TM_conversions::CAST_Int_to_V_LOA::v_loa */
  static V_LOA v_loa;
  
  v_loa = v_loa_int * 5;
  return v_loa;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_LOA_TM_conversions.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

