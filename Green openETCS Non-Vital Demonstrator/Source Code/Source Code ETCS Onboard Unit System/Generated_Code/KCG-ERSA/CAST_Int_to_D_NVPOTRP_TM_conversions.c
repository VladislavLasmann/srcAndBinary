/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_NVPOTRP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_NVPOTRP */
D_NVPOTRP CAST_Int_to_D_NVPOTRP_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_NVPOTRP::d_nvpotrp_int */kcg_int d_nvpotrp_int)
{
  /* TM_conversions::CAST_Int_to_D_NVPOTRP::d_nvpotrp */
  static D_NVPOTRP d_nvpotrp;
  
  d_nvpotrp = d_nvpotrp_int;
  return d_nvpotrp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_NVPOTRP_TM_conversions.c
** Generation date: 2015-11-09T11:52:25
*************************************************************$ */

