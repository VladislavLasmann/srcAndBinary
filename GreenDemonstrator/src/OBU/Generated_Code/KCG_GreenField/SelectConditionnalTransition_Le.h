/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */
#ifndef _SelectConditionnalTransition_L
#define _SelectConditionnalTransition_L

#include "kcg_types.h"
#include "IsInPriorityTable_LevelTransiti.h"
#include "SelectNormalTransition_LevelTra.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* LevelTransitionSelection::SelectConditionnalTransition */
extern void SelectConditionnalTransition_Le(
  /* LevelTransitionSelection::SelectConditionnalTransition::current_level */ M_LEVEL current_level,
  /* LevelTransitionSelection::SelectConditionnalTransition::conditional_transition */ T_LevelTransition_PriorityTable *conditional_transition,
  /* LevelTransitionSelection::SelectConditionnalTransition::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_ *ERTMS_capabilities,
  /* LevelTransitionSelection::SelectConditionnalTransition::last_level_transition */ T_LevelTransition_Level_And_Mod *last_level_transition,
  /* LevelTransitionSelection::SelectConditionnalTransition::last_available_for_use */ kcg_bool last_available_for_use,
  /* LevelTransitionSelection::SelectConditionnalTransition::Available_for_use */ kcg_bool *Available_for_use,
  /* LevelTransitionSelection::SelectConditionnalTransition::output_level_transition */ T_LevelTransition_Level_And_Mod *output_level_transition);

#endif /* _SelectConditionnalTransition_L */
/* $**************** KCG Version 6.4 (build i21) ****************
** SelectConditionnalTransition_Le.h
** Generation date: 2015-11-13T13:31:13
*************************************************************$ */

