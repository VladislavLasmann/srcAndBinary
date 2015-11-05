/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */
#ifndef _Procedure_OnSight_Procedures_H
#define _Procedure_OnSight_Procedures_H

#include "kcg_types.h"
#include "Mode_Profile_Calculations_Libra.h"
#include "Procedure_With_Mode_Profile_Pro.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_OnSight::Condition15 */ Condition15;
  kcg_bool /* Procedures::Procedure_OnSight::Condition34 */ Condition34;
  kcg_bool /* Procedures::Procedure_OnSight::Condition40 */ Condition40;
  kcg_bool /* Procedures::Procedure_OnSight::Condition73 */ Condition73;
  kcg_bool /* Procedures::Procedure_OnSight::Ack_OS_Req_To_Driver */ Ack_OS_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_OnSight::Service_Brake_Command */ Service_Brake_Command;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Procedure_With_Mode_Profil /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_OnSight_Procedur;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_OnSight */
extern void Procedure_OnSight_Procedures(
  /* Procedures::Procedure_OnSight::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_OnSight::Driver_Ack_OS */ kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_OnSight::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_T *Mode_Profile_On_Board,
  /* Procedures::Procedure_OnSight::Train_Position */ trainPosition_T_TrainPosition_T *Train_Position,
  /* Procedures::Procedure_OnSight::Train_Speed */ Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_OnSight_Procedur *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_OnSight_reset_Procedu(
  outC_Procedure_OnSight_Procedur *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_OnSight_init_Procedur(
  outC_Procedure_OnSight_Procedur *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Procedure_OnSight_Procedures_H */
/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_OnSight_Procedures.h
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

