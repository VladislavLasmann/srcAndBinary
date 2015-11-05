/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_C */
NID_C CAST_Int_to_NID_C_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_C::nid_c_int */ kcg_int nid_c_int)
{
  /* TM_conversions::CAST_Int_to_NID_C::nid_c */
  static NID_C nid_c;
  
  nid_c = nid_c_int;
  return nid_c;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_C_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */
