/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Reversing_Mode_InputManag.h"

/* InputManagement::Input_Reversing_Mode */
void Input_Reversing_Mode_InputManag(
  /* InputManagement::Input_Reversing_Mode::P_138 */ P138_ReversingAreaInformation_T *P_138,
  /* InputManagement::Input_Reversing_Mode::P_139 */ P139_ReversingSupervisionInform *P_139,
  /* InputManagement::Input_Reversing_Mode::referenceLocation */ L_internal_Type_Obu_BasicTypes_ referenceLocation,
  /* InputManagement::Input_Reversing_Mode::Reversing_Data */ T_Reversing_Data_Level_And_Mode *Reversing_Data)
{
  (*Reversing_Data).Available = (*P_138).valid & (*P_139).valid;
  (*Reversing_Data).Dist_Start = (*P_138).d_startreverse + referenceLocation;
  (*Reversing_Data).Length = (*P_138).l_reversearea;
  (*Reversing_Data).Dist_Run = referenceLocation + (*P_139).d_reverse;
  (*Reversing_Data).Speed = (*P_139).v_reverse;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Reversing_Mode_InputManag.c
** Generation date: 2015-11-13T13:31:16
*************************************************************$ */

