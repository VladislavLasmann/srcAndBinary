/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Real_to_Int_Utilities.h"

/* Utilities::Real_to_Int */
kcg_int Real_to_Int_Utilities(
  /* Utilities::Real_to_Int::real_in */ kcg_real real_in,
  /* Utilities::Real_to_Int::resolution_factor_in */ kcg_real resolution_factor_in,
  /* Utilities::Real_to_Int::unit_factor_in */ kcg_real unit_factor_in,
  /* Utilities::Real_to_Int::max_value */ kcg_int max_value,
  /* Utilities::Real_to_Int::min_value */ kcg_int min_value)
{
  /* Utilities::Real_to_Int::int_out */
  static kcg_int int_out;
  
  int_out = (kcg_int) (real_in * unit_factor_in / resolution_factor_in);
  return int_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Real_to_Int_Utilities.c
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */

