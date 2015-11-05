/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_NVSTFF_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_NVSTFF */
D_NVSTFF CAST_Int_to_D_NVSTFF_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_NVSTFF::d_nvstff_int */ kcg_int d_nvstff_int)
{
  /* TM_conversions::CAST_Int_to_D_NVSTFF::d_nvstff */
  static D_NVSTFF d_nvstff;
  
  d_nvstff = d_nvstff_int;
  return d_nvstff;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_NVSTFF_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

