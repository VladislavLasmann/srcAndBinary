/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ContinuousTimeoutCheck_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::ContinuousTimeoutCheck */
kcg_bool ContinuousTimeoutCheck_CheckEuroradioMessage(
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContact */T_NVCONTACT tNvContact,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::activateCheck */kcg_bool activateCheck)
{
  /* CheckEuroradioMessage::ContinuousTimeoutCheck::tNvContactError */
  static kcg_bool tNvContactError;
  
  if (activateCheck) {
    tNvContactError = systemTime - lastRelevantEventTimestamp > tNvContact *
      1000;
  }
  else {
    tNvContactError = kcg_false;
  }
  return tNvContactError;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ContinuousTimeoutCheck_CheckEuroradioMessage.c
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

