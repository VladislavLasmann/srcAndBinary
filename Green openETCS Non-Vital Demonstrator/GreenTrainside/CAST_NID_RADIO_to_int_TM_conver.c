/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_RADIO_to_int_TM_conver.h"

/* TM_conversions::CAST_NID_RADIO_to_int */
kcg_int CAST_NID_RADIO_to_int_TM_conver(
  /* TM_conversions::CAST_NID_RADIO_to_int::nid_radio */ NID_RADIO nid_radio)
{
  /* TM_conversions::CAST_NID_RADIO_to_int::nid_radio_int */
  static kcg_int nid_radio_int;
  
  nid_radio_int = nid_radio;
  return nid_radio_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_RADIO_to_int_TM_conver.c
** Generation date: 2015-11-10T23:01:12
*************************************************************$ */

