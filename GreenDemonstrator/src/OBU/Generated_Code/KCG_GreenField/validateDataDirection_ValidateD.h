/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _validateDataDirection_Validate
#define _validateDataDirection_Validate

#include "kcg_types.h"
#include "validateDataDirection_General_V.h"
#include "getLRBGForRadioMessage_Validate.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* ValidateDataDirection_Pkg::validateDataDirection */
extern void validateDataDirection_ValidateD(
  /* ValidateDataDirection_Pkg::validateDataDirection::inMessage */ ReceivedMessage_T_Common_Types_ *inMessage,
  /* ValidateDataDirection_Pkg::validateDataDirection::inLRBG */ positionedBG_T_TrainPosition_Ty *inLRBG,
  /* ValidateDataDirection_Pkg::validateDataDirection::inPositionedBGs */ positionedBGs_T_TrainPosition_T *inPositionedBGs,
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPosition */ trainPosition_T_TrainPosition_T *trainPosition,
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */ ReceivedMessage_T_Common_Types_ *outMessage);

#endif /* _validateDataDirection_Validate */
/* $**************** KCG Version 6.4 (build i21) ****************
** validateDataDirection_ValidateD.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

