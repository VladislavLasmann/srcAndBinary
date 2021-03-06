/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_OnSight_Procedures.h"

void Procedure_OnSight_reset_Procedures(outC_Procedure_OnSight_Procedures *outC)
{
  /* 1 */ Procedure_With_Mode_Profile_reset_Procedures(&outC->Context_1);
}

/* Procedures::Procedure_OnSight */
void Procedure_OnSight_Procedures(
  /* Procedures::Procedure_OnSight::Current_Mode */T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_OnSight::Driver_Ack_OS */kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_OnSight::Mode_Profile_On_Board */T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_OnSight::Train_Position */trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Procedures::Procedure_OnSight::Train_Speed */Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_OnSight_Procedures *outC)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  /* Procedures::Procedure_OnSight::_L529 */
  static kcg_bool _L529;
  /* Procedures::Procedure_OnSight::_L537 */
  static kcg_bool _L537;
  
  /* 1 */
  Mode_Profile_Calculations_Librairies(
    LS_Level_And_Mode_Types_Pkg,
    Mode_Profile_On_Board,
    Profile_LS_Level_And_Mode_Types_Pkg,
    Train_Speed,
    Train_Position,
    &tmp,
    &tmp1,
    &_L529,
    &_L537);
  switch (Current_Mode) {
    case SN_Level_And_Mode_Types_Pkg :
      tmp = kcg_false;
      tmp1 = kcg_true;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      tmp = kcg_false;
      tmp1 = kcg_false;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      tmp = kcg_false;
      tmp1 = kcg_true;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      tmp = kcg_false;
      tmp1 = kcg_true;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      tmp = kcg_true;
      tmp1 = kcg_true;
      break;
    case FS_Level_And_Mode_Types_Pkg :
      tmp = kcg_true;
      tmp1 = kcg_true;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      tmp = kcg_false;
      tmp1 = kcg_false;
      break;
    
    default :
      tmp = kcg_false;
      tmp1 = kcg_false;
  }
  /* 1 */
  Procedure_With_Mode_Profile_Procedures(
    Current_Mode,
    Driver_Ack_OS,
    Mode_Profile_On_Board,
    tmp1,
    Profile_OS_Level_And_Mode_Types_Pkg,
    OS_Level_And_Mode_Types_Pkg,
    tmp,
    Train_Position,
    Train_Speed,
    &outC->Context_1);
  outC->Condition15 = outC->Context_1.Condition_15_50_70;
  outC->Condition34 = outC->Context_1.Condition_34_61_71;
  outC->Condition40 = outC->Context_1.Condition_40_51_72;
  outC->Service_Brake_Command = outC->Context_1.Service_Brake_Command;
  outC->Ack_OS_Req_To_Driver = outC->Context_1.Ack_Req_To_Driver;
  outC->Condition73 = !_L537 & outC->Context_1.Condition_73_74;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Procedure_OnSight_Procedures.c
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

