/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition */
void Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception02StoreOnboardIfPendingL2L3Transition::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer)
{
  *outAcceptMessage = kcg_false;
  *outStoreInTransitionBuffer = inPendingL2L3Transition;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-23T09:24:22
*************************************************************$ */

