/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */
#ifndef _ManageModes_H_
#define _ManageModes_H_

#include "kcg_types.h"
#include "InputTIUManagement_Interfaces.h"
#include "InputTrackManagement_Interfaces.h"
#include "InputSpeedAndSupervision_Interfaces.h"
#include "OutputManagement_Interfaces.h"
#include "InputLocalisation_Interfaces.h"
#include "InputDMI_Interfaces.h"
#include "ComputeModesConditions.h"
#include "SwitchModes.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* ManageModes::currentMode */ currentMode;
  kcg_bool /* ManageModes::EB_Requested */ EB_Requested;
  kcg_bool /* ManageModes::Service_Brake_Command */ Service_Brake_Command;
  T_Data_To_DMI_Level_And_Mode_Types_Pkg /* ManageModes::Data_To_DMI */ Data_To_DMI;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* ManageModes::Data_To_BG_Management */ Data_To_BG_Management;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ComputeModesConditions /* 1 */ _1_Context_1;
  outC_SwitchModes /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ManageModes;

/* ===========  node initialization and cycle functions  =========== */
/* ManageModes */
extern void ManageModes(
  /* ManageModes::Current_Level */M_LEVEL Current_Level,
  /* ManageModes::Cab */T_Cab_Level_And_Mode_Types_Pkg Cab,
  /* ManageModes::Continue_Shunting_Function_Active */kcg_bool Continue_Shunting_Function_Active,
  /* ManageModes::Data_From_DMI */T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI,
  /* ManageModes::Data_From_Localisation */T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* ManageModes::Data_From_Speed_and_Supervision */T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* ManageModes::Data_From_TIU */Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* ManageModes::Data_From_Track */T_Data_From_Track_Level_And_Mode_Types_Pkg *Data_From_Track,
  /* ManageModes::Failure_Occured */kcg_bool Failure_Occured,
  /* ManageModes::Interface_To_National_System */kcg_bool Interface_To_National_System,
  /* ManageModes::National_Trip_Order */kcg_bool National_Trip_Order,
  /* ManageModes::OnBoard_Powered */kcg_bool OnBoard_Powered,
  /* ManageModes::Stop_Shunting_Stored */kcg_bool Stop_Shunting_Stored,
  /* ManageModes::Valid_Train_Data_Stored */kcg_bool Valid_Train_Data_Stored,
  outC_ManageModes *outC);

extern void ManageModes_reset(outC_ManageModes *outC);

#endif /* _ManageModes_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ManageModes.h
** Generation date: 2015-08-21T17:26:01
*************************************************************$ */

