/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_VALIDNV_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_VALIDNV */
D_VALIDNV CAST_Int_to_D_VALIDNV_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_VALIDNV::d_validnv_int */ kcg_int d_validnv_int)
{
  /* TM_conversions::CAST_Int_to_D_VALIDNV::d_validnv */
  static D_VALIDNV d_validnv;
  
  d_validnv = d_validnv_int;
  return d_validnv;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_VALIDNV_TM_conversions.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

