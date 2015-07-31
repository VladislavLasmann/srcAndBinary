/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelTransitionEffective_InformationFilter_Pkg.h"

void LevelTransitionEffective_reset_InformationFilter_Pkg(
  outC_LevelTransitionEffective_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
}

/* InformationFilter_Pkg::LevelTransitionEffective */
void LevelTransitionEffective_InformationFilter_Pkg(
  /* InformationFilter_Pkg::LevelTransitionEffective::inLevel */M_LEVEL inLevel,
  outC_LevelTransitionEffective_InformationFilter_Pkg *outC)
{
  static M_LEVEL tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    tmp = M_LEVEL_Level_0;
  }
  else {
    tmp = outC->rem_inLevel;
  }
  outC->outLevelTransition = !(inLevel == tmp);
  outC->rem_inLevel = inLevel;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** LevelTransitionEffective_InformationFilter_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

