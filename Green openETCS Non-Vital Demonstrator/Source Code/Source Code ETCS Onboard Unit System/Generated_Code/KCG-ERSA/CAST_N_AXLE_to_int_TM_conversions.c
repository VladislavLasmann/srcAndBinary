/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_N_AXLE_to_int_TM_conversions.h"

/* TM_conversions::CAST_N_AXLE_to_int */
kcg_int CAST_N_AXLE_to_int_TM_conversions(
  /* TM_conversions::CAST_N_AXLE_to_int::n_axlle */ N_AXLE n_axlle)
{
  /* TM_conversions::CAST_N_AXLE_to_int::n_axle_int */
  static kcg_int n_axle_int;
  
  n_axle_int = n_axlle;
  return n_axle_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_N_AXLE_to_int_TM_conversions.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

