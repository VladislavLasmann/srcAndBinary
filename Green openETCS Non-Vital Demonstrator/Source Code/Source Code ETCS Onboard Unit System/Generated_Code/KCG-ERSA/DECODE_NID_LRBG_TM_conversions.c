/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DECODE_NID_LRBG_TM_conversions.h"

/* TM_conversions::DECODE_NID_LRBG */
void DECODE_NID_LRBG_TM_conversions(
  /* TM_conversions::DECODE_NID_LRBG::nid_lrbg */ NID_LRBG nid_lrbg,
  /* TM_conversions::DECODE_NID_LRBG::nid_c */ NID_C *nid_c,
  /* TM_conversions::DECODE_NID_LRBG::nid_bg */ NID_BG *nid_bg)
{
  *nid_c = /* 1 */ CAST_Int_to_NID_C_TM_conversions(nid_lrbg / 100000);
  *nid_bg = /* 1 */ CAST_Int_to_NID_BG_TM_conversions(nid_lrbg % 100000);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DECODE_NID_LRBG_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */
