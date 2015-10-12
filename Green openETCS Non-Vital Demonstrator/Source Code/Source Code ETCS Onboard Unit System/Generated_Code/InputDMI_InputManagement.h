/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */
#ifndef _InputDMI_InputManagement_H_
#define _InputDMI_InputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InputManagement::InputDMI */
extern void InputDMI_InputManagement(
  /* InputManagement::InputDMI::Data_From_DMI */ DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* InputManagement::InputDMI::driver_level_transition1 */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition1,
  /* InputManagement::InputDMI::driver_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* InputManagement::InputDMI::Level_Ack */ kcg_bool *Level_Ack,
  /* InputManagement::InputDMI::Data_From_DMI_To_Mode */ T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI_To_Mode);

#endif /* _InputDMI_InputManagement_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** InputDMI_InputManagement.h
** Generation date: 2015-10-12T08:09:21
*************************************************************$ */

