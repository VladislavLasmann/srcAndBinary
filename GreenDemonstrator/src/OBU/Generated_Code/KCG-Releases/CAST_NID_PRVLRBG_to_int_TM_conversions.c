/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_PRVLRBG_to_int_TM_conversions.h"

/* TM_conversions::CAST_NID_PRVLRBG_to_int */
kcg_int CAST_NID_PRVLRBG_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_PRVLRBG_to_int::nid_prvlrbg */ NID_PRVLRBG nid_prvlrbg)
{
  /* TM_conversions::CAST_NID_PRVLRBG_to_int::nid_prvlrbg_in */
  static kcg_int nid_prvlrbg_in;
  
  nid_prvlrbg_in = nid_prvlrbg;
  return nid_prvlrbg_in;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_PRVLRBG_to_int_TM_conversions.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

