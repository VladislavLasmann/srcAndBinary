/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_RBCTR_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_RBCTR */
D_RBCTR CAST_Int_to_D_RBCTR_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_RBCTR::d_rbctr_int */ kcg_int d_rbctr_int)
{
  /* TM_conversions::CAST_Int_to_D_RBCTR::d_rbctr */
  static D_RBCTR d_rbctr;
  
  d_rbctr = d_rbctr_int;
  return d_rbctr;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_RBCTR_TM_conversions.c
** Generation date: 2015-11-05T15:01:45
*************************************************************$ */
