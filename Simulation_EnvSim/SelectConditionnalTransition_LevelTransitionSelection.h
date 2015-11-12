/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:56
*************************************************************$ */
#ifndef _SelectConditionnalTransition_LevelTransitionSelection_H_
#define _SelectConditionnalTransition_LevelTransitionSelection_H_

#include "kcg_types.h"
#include "IsInPriorityTable_LevelTransitionSelection.h"
#include "SelectNormalTransition_LevelTransitionSelection.h"

/* =====================  no input structure  ====================== */


/* LevelTransitionSelection::SelectConditionnalTransition */
extern void SelectConditionnalTransition_LevelTransitionSelection(
  /* LevelTransitionSelection::SelectConditionnalTransition::current_level */M_LEVEL current_level,
  /* LevelTransitionSelection::SelectConditionnalTransition::conditional_transition */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* LevelTransitionSelection::SelectConditionnalTransition::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectConditionnalTransition::last_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *last_level_transition,
  /* LevelTransitionSelection::SelectConditionnalTransition::last_available_for_use */kcg_bool last_available_for_use,
  /* LevelTransitionSelection::SelectConditionnalTransition::Available_for_use */kcg_bool *Available_for_use,
  /* LevelTransitionSelection::SelectConditionnalTransition::output_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *output_level_transition);

#endif /* _SelectConditionnalTransition_LevelTransitionSelection_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SelectConditionnalTransition_LevelTransitionSelection.h
** Generation date: 2015-11-12T10:46:56
*************************************************************$ */

