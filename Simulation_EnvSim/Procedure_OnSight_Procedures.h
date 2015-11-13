/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:56
*************************************************************$ */
#ifndef _Procedure_OnSight_Procedures_H_
#define _Procedure_OnSight_Procedures_H_

#include "kcg_types.h"
#include "Mode_Profile_Calculations_Librairies.h"
#include "Procedure_With_Mode_Profile_Procedures.h"

/* =====================  no input structure  ====================== */

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
  outC_Procedure_With_Mode_Profile_Procedures /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_OnSight_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_OnSight */
extern void Procedure_OnSight_Procedures(
  /* Procedures::Procedure_OnSight::Current_Mode */T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_OnSight::Driver_Ack_OS */kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_OnSight::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_OnSight::Train_Position */trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_OnSight::Train_Speed */Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_OnSight_Procedures *outC);

extern void Procedure_OnSight_reset_Procedures(
  outC_Procedure_OnSight_Procedures *outC);

#endif /* _Procedure_OnSight_Procedures_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Procedure_OnSight_Procedures.h
** Generation date: 2015-11-12T10:46:56
*************************************************************$ */
