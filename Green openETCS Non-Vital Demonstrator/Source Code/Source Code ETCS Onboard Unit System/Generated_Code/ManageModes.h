/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:33
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
#include "InputSTM_Interfaces.h"
#include "InputF2Functions_Interfaces.h"
#include "ComputeModesConditions.h"
#include "SwitchModes.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  outC_SwitchModes /* 1 */ _1_Context_1;
  outC_ComputeModesConditions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ManageModes;

/* ===========  node initialization and cycle functions  =========== */
/* ManageModes */
extern void ManageModes(
  /* ManageModes::Current_Level */ M_LEVEL Current_Level,
  /* ManageModes::Cab */ cab_ID_T_TIU_Types_Pkg Cab,
  /* ManageModes::Data_From_DMI */ T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI,
  /* ManageModes::Data_From_F2_Functions */ T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* ManageModes::Data_From_Localisation */ T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* ManageModes::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* ManageModes::Data_From_STM */ T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* ManageModes::Data_From_TIU */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* ManageModes::Data_From_Track */ T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track,
  /* ManageModes::TripModeFromLevel */ kcg_bool TripModeFromLevel,
  outC_ManageModes *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ManageModes_reset(outC_ManageModes *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ManageModes_init(outC_ManageModes *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ManageModes_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ManageModes.h
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

