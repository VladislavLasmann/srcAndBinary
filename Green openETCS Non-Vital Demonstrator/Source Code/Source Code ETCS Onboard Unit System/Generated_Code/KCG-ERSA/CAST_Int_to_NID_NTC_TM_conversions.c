/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_NTC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_NTC */
NID_NTC CAST_Int_to_NID_NTC_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_NTC::nid_ntc_int */ kcg_int nid_ntc_int)
{
  /* TM_conversions::CAST_Int_to_NID_NTC::nid_ntc */
  static NID_NTC nid_ntc;
  
  nid_ntc = nid_ntc_int;
  return nid_ntc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_NTC_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */
