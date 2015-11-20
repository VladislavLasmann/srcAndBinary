/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T13:23:26
*************************************************************$ */
#ifndef _Procedure_LimitedSupervision_Procedures_H_
#define _Procedure_LimitedSupervision_Procedures_H_

#include "kcg_types.h"
#include "Mode_Profile_Calculations_Librairies.h"
#include "Procedure_With_Mode_Profile_Procedures.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Procedures::Procedure_LimitedSupervision::Condition70 */ Condition70;
  kcg_bool /* Procedures::Procedure_LimitedSupervision::Condition71 */ Condition71;
  kcg_bool /* Procedures::Procedure_LimitedSupervision::Condition72 */ Condition72;
  kcg_bool /* Procedures::Procedure_LimitedSupervision::Condition74 */ Condition74;
  kcg_bool /* Procedures::Procedure_LimitedSupervision::Ack_LS_Req_To_Driver */ Ack_LS_Req_To_Driver;
  kcg_bool /* Procedures::Procedure_LimitedSupervision::Service_Brake_Command */ Service_Brake_Command;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Procedure_With_Mode_Profile_Procedures /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Procedure_LimitedSupervision_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_LimitedSupervision */
extern void Procedure_LimitedSupervision_Procedures(
  /* Procedures::Procedure_LimitedSupervision::Current_Mode */T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_LimitedSupervision::Driver_Ack_LS */kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_LimitedSupervision::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_LimitedSupervision::Train_Position */trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_LimitedSupervision::Train_Speed */Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_LimitedSupervision_Procedures *outC);

extern void Procedure_LimitedSupervision_reset_Procedures(
  outC_Procedure_LimitedSupervision_Procedures *outC);

#endif /* _Procedure_LimitedSupervision_Procedures_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Procedure_LimitedSupervision_Procedures.h
** Generation date: 2015-11-20T13:23:26
*************************************************************$ */

