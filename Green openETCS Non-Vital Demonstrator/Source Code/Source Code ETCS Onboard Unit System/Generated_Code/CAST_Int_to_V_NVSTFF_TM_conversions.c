/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVSTFF_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_NVSTFF */
V_NVSTFF CAST_Int_to_V_NVSTFF_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_NVSTFF::v_nvstff_int */ kcg_int v_nvstff_int)
{
  /* TM_conversions::CAST_Int_to_V_NVSTFF::v_nvstff */
  static V_NVSTFF v_nvstff;
  
  v_nvstff = v_nvstff_int * 5;
  return v_nvstff;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_NVSTFF_TM_conversions.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

