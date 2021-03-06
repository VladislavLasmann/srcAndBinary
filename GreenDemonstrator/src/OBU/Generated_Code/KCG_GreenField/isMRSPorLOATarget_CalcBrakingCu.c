/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isMRSPorLOATarget_CalcBrakingCu.h"

/* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget */
kcg_bool isMRSPorLOATarget_CalcBrakingCu(
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::Target */ Target_real_T_TargetManagement_ *Target)
{
  /* CalcBrakingCurves_Pkg::internalOperators::isMRSPorLOATarget::isVnonZero */
  static kcg_bool isVnonZero;
  
  isVnonZero = (*Target).speed > 0.0;
  return isVnonZero;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** isMRSPorLOATarget_CalcBrakingCu.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

