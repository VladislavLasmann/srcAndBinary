/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */
#ifndef _internalCycle_SDM_GradientAcceleration_Pkg_H_
#define _internalCycle_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"
#include "lowestGradient_SDM_GradientAcceleration_Pkg.h"
#include "selectGradientOffset_SDM_GradientAcceleration_Pkg.h"
#include "DetermineNewIndices_SDM_GradientAcceleration_Pkg.h"
#include "CalcNearestDistance_SDM_GradientAcceleration_Pkg.h"
#include "MoveTrainPosition_SDM_GradientAcceleration_Pkg.h"
#include "addNewSection_SDM_GradientAcceleration_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDM_GradientAcceleration_Pkg::internalCycle */
extern void internalCycle_SDM_GradientAcceleration_Pkg(
  /* SDM_GradientAcceleration_Pkg::internalCycle::index */ kcg_int index,
  /* SDM_GradientAcceleration_Pkg::internalCycle::Accu */ ACC_SDM_GradientAcceleration_Pkg *Accu,
  /* SDM_GradientAcceleration_Pkg::internalCycle::SvLPosition */ L_internal_real_Type_SDM_Types_Pkg SvLPosition,
  /* SDM_GradientAcceleration_Pkg::internalCycle::GradientProfile */ GradientProfile_real_t_SDM_GradientAcceleration_types *GradientProfile,
  /* SDM_GradientAcceleration_Pkg::internalCycle::condition */ kcg_bool *condition,
  /* SDM_GradientAcceleration_Pkg::internalCycle::AccuOut */ ACC_SDM_GradientAcceleration_Pkg *AccuOut);

#endif /* _internalCycle_SDM_GradientAcceleration_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** internalCycle_SDM_GradientAcceleration_Pkg.h
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

