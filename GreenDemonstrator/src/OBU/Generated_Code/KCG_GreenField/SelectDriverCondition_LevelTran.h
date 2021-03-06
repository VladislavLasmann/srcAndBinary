/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */
#ifndef _SelectDriverCondition_LevelTra
#define _SelectDriverCondition_LevelTra

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* LevelTransitionSelection::SelectDriverCondition */
extern void SelectDriverCondition_LevelTran(
  /* LevelTransitionSelection::SelectDriverCondition::current_level */ M_LEVEL current_level,
  /* LevelTransitionSelection::SelectDriverCondition::train_standstill */ kcg_bool train_standstill,
  /* LevelTransitionSelection::SelectDriverCondition::driver_level_transition */ T_LevelTransition_Level_And_Mod *driver_level_transition,
  /* LevelTransitionSelection::SelectDriverCondition::last_level_transition */ T_LevelTransition_Level_And_Mod *last_level_transition,
  /* LevelTransitionSelection::SelectDriverCondition::driver_output_level_transition */ T_LevelTransition_Level_And_Mod *driver_output_level_transition);

#endif /* _SelectDriverCondition_LevelTra */
/* $**************** KCG Version 6.4 (build i21) ****************
** SelectDriverCondition_LevelTran.h
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */

