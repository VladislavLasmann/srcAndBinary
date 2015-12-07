/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:38
*************************************************************$ */
#ifndef _InputSpeedAndSupervision_Interfaces_H_
#define _InputSpeedAndSupervision_Interfaces_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Interfaces::InputSpeedAndSupervision */
extern void InputSpeedAndSupervision_Interfaces(
  /* Interfaces::InputSpeedAndSupervision::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* Interfaces::InputSpeedAndSupervision::Estimated_Front_End_Overpass_SR_Distance */ kcg_bool *Estimated_Front_End_Overpass_SR_Distance,
  /* Interfaces::InputSpeedAndSupervision::Estimated_Front_End_Rear_Location_SSP_Or_Gradient */ kcg_bool *Estimated_Front_End_Rear_Location_SSP_Or_Gradient,
  /* Interfaces::InputSpeedAndSupervision::Override_Function_Active */ kcg_bool *Override_Function_Active,
  /* Interfaces::InputSpeedAndSupervision::Train_Overpass_EOA_Antenna */ kcg_bool *Train_Overpass_EOA_Antenna,
  /* Interfaces::InputSpeedAndSupervision::Train_Overpass_EOA_Front_End */ kcg_bool *Train_Overpass_EOA_Front_End,
  /* Interfaces::InputSpeedAndSupervision::Train_Speed_Under_Override_Limit */ kcg_bool *Train_Speed_Under_Override_Limit);

#endif /* _InputSpeedAndSupervision_Interfaces_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** InputSpeedAndSupervision_Interfaces.h
** Generation date: 2015-12-07T14:47:38
*************************************************************$ */

