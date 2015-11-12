/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "limitPositive_SDM_Types_Pkg.h"

/* SDM_Types_Pkg::limitPositive */
kcg_real limitPositive_SDM_Types_Pkg(
  /* SDM_Types_Pkg::limitPositive::in */ kcg_real in)
{
  /* SDM_Types_Pkg::limitPositive::limited */
  static kcg_real limited;
  
  /* 2 */ if (in >= 0.0) {
    limited = in;
  }
  else {
    limited = 0.0;
  }
  return limited;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** limitPositive_SDM_Types_Pkg.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

