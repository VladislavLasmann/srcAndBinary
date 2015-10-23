/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_MN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_MN */
NID_MN CAST_Int_to_NID_MN_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_MN::nid_mn_int */ kcg_int nid_mn_int)
{
  /* TM_conversions::CAST_Int_to_NID_MN::nid_mn */
  static NID_MN nid_mn;
  
  nid_mn = nid_mn_int;
  return nid_mn;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_MN_TM_conversions.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

