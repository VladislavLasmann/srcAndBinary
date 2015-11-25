/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputSpeedAndSupervision_InputManagement.h"

/* InputManagement::InputSpeedAndSupervision */
void InputSpeedAndSupervision_InputManagement(
  /* InputManagement::InputSpeedAndSupervision::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* InputManagement::InputSpeedAndSupervision::Data_From_Speed_and_Supervision_To_Mode */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision_To_Mode)
{
  (*Data_From_Speed_and_Supervision_To_Mode).Estim_front_End_overpass_SR_Dist =
    (*Data_From_Speed_and_Supervision).Estim_front_End_overpass_SR_Dist;
  (*Data_From_Speed_and_Supervision_To_Mode).Estim_Front_End_Rear_SSP =
    (*Data_From_Speed_and_Supervision).Estim_Front_End_Rear_SSP;
  (*Data_From_Speed_and_Supervision_To_Mode).Override_Function_Active =
    (*Data_From_Speed_and_Supervision).Override_Function_Active;
  (*Data_From_Speed_and_Supervision_To_Mode).EOA_Antenna_Overpass =
    (*Data_From_Speed_and_Supervision).EOA_Antenna_Overpass;
  (*Data_From_Speed_and_Supervision_To_Mode).EOA_Front_End =
    (*Data_From_Speed_and_Supervision).EOA_Front_End;
  (*Data_From_Speed_and_Supervision_To_Mode).Train_Speed_Under_Overide_Limit =
    (*Data_From_Speed_and_Supervision).Train_Speed_Under_Overide_Limit;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** InputSpeedAndSupervision_InputManagement.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

