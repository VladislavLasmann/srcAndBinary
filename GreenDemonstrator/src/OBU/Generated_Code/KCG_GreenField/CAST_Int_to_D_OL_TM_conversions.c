/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_OL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_OL */
D_OL CAST_Int_to_D_OL_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_OL::d_ol_int */ kcg_int d_ol_int)
{
  /* TM_conversions::CAST_Int_to_D_OL::d_ol */
  static D_OL d_ol;
  
  d_ol = d_ol_int;
  return d_ol;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_OL_TM_conversions.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

