/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "splitT_bs_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::splitT_bs */
void splitT_bs_TargetLimits_Pkg(
  /* TargetLimits_Pkg::splitT_bs::bs */ T_internal_real_Type_SDM_Types_Pkg bs,
  /* TargetLimits_Pkg::splitT_bs::isSB_FBAvailable */ kcg_bool isSB_FBAvailable,
  /* TargetLimits_Pkg::splitT_bs::isSB_CmdAvailable */ kcg_bool isSB_CmdAvailable,
  /* TargetLimits_Pkg::splitT_bs::bs1 */ T_internal_real_Type_SDM_Types_Pkg *bs1,
  /* TargetLimits_Pkg::splitT_bs::bs2 */ T_internal_real_Type_SDM_Types_Pkg *bs2)
{
  /* 1 */ if (isSB_CmdAvailable) {
    *bs1 = bs;
  }
  else {
    *bs1 = 0.0;
  }
  *bs2 = *bs1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** splitT_bs_TargetLimits_Pkg.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

