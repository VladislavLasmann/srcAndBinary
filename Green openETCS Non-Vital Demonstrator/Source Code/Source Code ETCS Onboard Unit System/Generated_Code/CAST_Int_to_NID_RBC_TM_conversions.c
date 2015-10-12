/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_RBC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_RBC */
NID_RBC CAST_Int_to_NID_RBC_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_RBC::nid_rbc_int */ kcg_int nid_rbc_int)
{
  /* TM_conversions::CAST_Int_to_NID_RBC::nid_rbc */
  static NID_RBC nid_rbc;
  
  nid_rbc = nid_rbc_int;
  return nid_rbc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_RBC_TM_conversions.c
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

