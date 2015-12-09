/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:48
*************************************************************$ */
#ifndef _InputTrackManagement_InputManagement_H_
#define _InputTrackManagement_InputManagement_H_

#include "kcg_types.h"
#include "Input_MA_SSP_Gradient_InputManagement.h"
#include "Input_Level_Transition_InputManagement.h"
#include "Input_Modes_InputManagement.h"
#include "Input_Messages_InputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InputManagement::InputTrackManagement */
extern void InputTrackManagement_InputManagement(
  /* InputManagement::InputTrackManagement::Data_From_Track_Packets */ T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* InputManagement::InputTrackManagement::Data_From_Track_Messages */ T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* InputManagement::InputTrackManagement::Data_From_Track_MASSPGradient */ T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_From_Track_MASSPGradient,
  /* InputManagement::InputTrackManagement::Data_From_Track_To_Mode */ T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track_To_Mode,
  /* InputManagement::InputTrackManagement::Data_From_Track_to_Level */ T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level);

#endif /* _InputTrackManagement_InputManagement_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** InputTrackManagement_InputManagement.h
** Generation date: 2015-12-09T10:03:48
*************************************************************$ */

