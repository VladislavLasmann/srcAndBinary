/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcModeTransOutput_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcModeTransOutput */
void CalcModeTransOutput_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcModeTransOutput::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcModeTransOutput::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcModeTransOutput::TrainData_int */ trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  /* SDM_Commands_Pkg::CalcModeTransOutput::eoaOverpassed */ kcg_bool *eoaOverpassed,
  /* SDM_Commands_Pkg::CalcModeTransOutput::targetSpeedReached */ kcg_bool *targetSpeedReached)
{
  *eoaOverpassed = (*locations).d_eoa <=
    (*trainLocations).estimatedFrontEndPosition -
    (*TrainData_int).offsetAntennaL1;
  *targetSpeedReached = (*speeds).V_est <= (*speeds).V_target;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcModeTransOutput_SDM_Commands_Pkg.c
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

