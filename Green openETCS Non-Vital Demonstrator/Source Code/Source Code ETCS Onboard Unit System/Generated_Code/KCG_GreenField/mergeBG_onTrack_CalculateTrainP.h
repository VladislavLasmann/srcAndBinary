/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _mergeBG_onTrack_CalculateTrain
#define _mergeBG_onTrack_CalculateTrain

#include "kcg_types.h"
#include "indexOfBG_by_id_CalculateTrainP.h"
#include "indexOfBG_onTrack_CalculateTrai.h"
#include "deleteBG_atIndex_CalculateTrain.h"
#include "insertBG_atIndex_CalculateTrain.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack */
extern void mergeBG_onTrack_CalculateTrainP(
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BG */ positionedBG_T_TrainPosition_Ty *BG,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_in */ positionedBGs_T_TrainPosition_T *BGs_in,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::BGs_out */ positionedBGs_T_TrainPosition_T *BGs_out,
  /* CalculateTrainPosition_Pkg::BG_utilities_Pkg::mergeBG_onTrack::overrun */ kcg_bool *overrun);

#endif /* _mergeBG_onTrack_CalculateTrain */
/* $**************** KCG Version 6.4 (build i21) ****************
** mergeBG_onTrack_CalculateTrainP.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

