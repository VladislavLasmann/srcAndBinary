/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:00
*************************************************************$ */
#ifndef _positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_
#define _positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_

#include "kcg_types.h"
#include "add_2_Distances_BasicLocationFunctions_Pkg.h"
#include "scaledDLINK_2_dlink_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr */
extern void positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::sumOfPrevLinkingDistances */ LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfPrevLinkingDistances,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::passedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::linkedBG */ LinkedBG_T_BG_Types_Pkg *linkedBG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::sumOfLinkingDistances */ LocWithInAcc_T_Obu_BasicTypes_Pkg *sumOfLinkingDistances,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr::linkedPositionedBG */ positionedBG_T_TrainPosition_Types_Pck *linkedPositionedBG);

#endif /* _positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h
** Generation date: 2015-12-10T15:16:00
*************************************************************$ */

