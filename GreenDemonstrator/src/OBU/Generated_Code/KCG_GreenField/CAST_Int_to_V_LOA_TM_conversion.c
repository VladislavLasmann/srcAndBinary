/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_LOA_TM_conversion.h"

/* TM_conversions::CAST_Int_to_V_LOA */
V_LOA CAST_Int_to_V_LOA_TM_conversion(
  /* TM_conversions::CAST_Int_to_V_LOA::v_loa_int */ kcg_int v_loa_int)
{
  /* TM_conversions::CAST_Int_to_V_LOA::v_loa */
  static V_LOA v_loa;
  
  v_loa = v_loa_int * 5;
  return v_loa;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_LOA_TM_conversion.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

