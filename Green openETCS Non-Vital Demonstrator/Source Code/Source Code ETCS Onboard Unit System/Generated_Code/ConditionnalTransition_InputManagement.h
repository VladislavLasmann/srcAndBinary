/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */
#ifndef _ConditionnalTransition_InputManagement_H_
#define _ConditionnalTransition_InputManagement_H_

#include "kcg_types.h"
#include "LevelTR2Level_InputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InputManagement::ConditionnalTransition */
extern void ConditionnalTransition_InputManagement(
  /* InputManagement::ConditionnalTransition::LRBG */ NID_LRBG LRBG,
  /* InputManagement::ConditionnalTransition::referenceLocation */ L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* InputManagement::ConditionnalTransition::Packet_46_One_Iter */ P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *Packet_46_One_Iter,
  /* InputManagement::ConditionnalTransition::One_Transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *One_Transition);

#endif /* _ConditionnalTransition_InputManagement_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ConditionnalTransition_InputManagement.h
** Generation date: 2015-10-18T22:42:11
*************************************************************$ */

