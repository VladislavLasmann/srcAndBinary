/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _Output_Mode_Level_To_Use_Outpu
#define _Output_Mode_Level_To_Use_Outpu

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_Level_And_Mode_Typ /* OutputManagement::Output_Mode_Level_To_Use::Compatible_Mode_And_Level */ Compatible_Mode_And_Level;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* OutputManagement::Output_Mode_Level_To_Use::currentMode */ rem_currentMode;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Output_Mode_Level_To_Use_O;

/* ===========  node initialization and cycle functions  =========== */
/* OutputManagement::Output_Mode_Level_To_Use */
extern void Output_Mode_Level_To_Use_Output(
  /* OutputManagement::Output_Mode_Level_To_Use::next_level */ M_LEVEL next_level,
  /* OutputManagement::Output_Mode_Level_To_Use::currentMode */ T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* OutputManagement::Output_Mode_Level_To_Use::Level_Mode_Compatible */ kcg_bool Level_Mode_Compatible,
  /* OutputManagement::Output_Mode_Level_To_Use::isNewLevel */ kcg_bool isNewLevel,
  outC_Output_Mode_Level_To_Use_O *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Output_Mode_Level_To_Use_reset_(
  outC_Output_Mode_Level_To_Use_O *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Output_Mode_Level_To_Use_init_O(
  outC_Output_Mode_Level_To_Use_O *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Output_Mode_Level_To_Use_Outpu */
/* $**************** KCG Version 6.4 (build i21) ****************
** Output_Mode_Level_To_Use_Output.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

