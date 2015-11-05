/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_RADIO_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_RADIO */
NID_RADIO CAST_Int_to_NID_RADIO_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_RADIO::nid_radio_int */ kcg_int nid_radio_int)
{
  /* TM_conversions::CAST_Int_to_NID_RADIO::nid_radio */
  static NID_RADIO nid_radio;
  
  nid_radio = nid_radio_int;
  return nid_radio;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_RADIO_TM_conversions.c
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

