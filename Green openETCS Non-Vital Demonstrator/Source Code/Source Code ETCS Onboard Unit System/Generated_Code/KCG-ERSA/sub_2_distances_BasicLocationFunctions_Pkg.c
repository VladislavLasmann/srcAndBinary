/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"

/* BasicLocationFunctions_Pkg::sub_2_distances */
void sub_2_distances_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::sub_2_distances::loc_2 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* BasicLocationFunctions_Pkg::sub_2_distances::loc_1 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  /* BasicLocationFunctions_Pkg::sub_2_distances::distance */ LocWithInAcc_T_Obu_BasicTypes_Pkg *distance)
{
  (*distance).nominal = (*loc_2).nominal - (*loc_1).nominal;
  (*distance).d_min = (*loc_2).d_min - (*loc_1).d_max;
  (*distance).d_max = (*loc_2).d_max - (*loc_1).d_min;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sub_2_distances_BasicLocationFunctions_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

