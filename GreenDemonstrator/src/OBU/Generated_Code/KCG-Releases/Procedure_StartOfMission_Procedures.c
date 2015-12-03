/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_StartOfMission_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void Procedure_StartOfMission_init_Procedures(
  outC_Procedure_StartOfMission_Procedures *outC)
{
  outC->Ack_LS_Req_To_Driver = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Ack_SN_Req_To_Driver = kcg_true;
  outC->Ack_SR_Req_To_Driver = kcg_true;
  outC->Ack_UN_Req_To_Driver = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Condition_5 = kcg_true;
  outC->Condition_6 = kcg_true;
  outC->Condition_8 = kcg_true;
  outC->Condition_10 = kcg_true;
  outC->Condition_15 = kcg_true;
  outC->Condition_46 = kcg_true;
  outC->Condition_50 = kcg_true;
  outC->Condition_58 = kcg_true;
  outC->Condition_60 = kcg_true;
  outC->Condition_70 = kcg_true;
  outC->EB_Requested = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->MA_Req_To_RBC = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  outC->SM_StartOfMissionProcedure_state_nxt =
    SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
  outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
    SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
  /* 1 */ SH_Initiated_By_Driver_On_init_Procedures(&outC->_1_Context_1);
  /* 1 */ Procedure_Start_L1_L2_L3_init_Procedures(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_StartOfMission_reset_Procedures(
  outC_Procedure_StartOfMission_Procedures *outC)
{
  outC->init2 = kcg_true;
  outC->init = kcg_true;
  /* 1 */ SH_Initiated_By_Driver_On_reset_Procedures(&outC->_1_Context_1);
  /* 1 */ Procedure_Start_L1_L2_L3_reset_Procedures(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Procedures::Procedure_StartOfMission */
void Procedure_StartOfMission_Procedures(
  /* Procedures::Procedure_StartOfMission::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::Procedure_StartOfMission::Current_Mode */ T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Procedures::Procedure_StartOfMission::Desk_Open */ kcg_bool Desk_Open,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_LS */ kcg_bool Driver_Ack_LS,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_OS */ kcg_bool Driver_Ack_OS,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_SH */ kcg_bool Driver_Ack_SH,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_SN */ kcg_bool Driver_Ack_SN,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_SR */ kcg_bool Driver_Ack_SR,
  /* Procedures::Procedure_StartOfMission::Driver_Ack_UN */ kcg_bool Driver_Ack_UN,
  /* Procedures::Procedure_StartOfMission::Driver_Req_NL */ kcg_bool Driver_Req_NL,
  /* Procedures::Procedure_StartOfMission::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::Procedure_StartOfMission::Driver_Req_Start */ kcg_bool Driver_Req_Start,
  /* Procedures::Procedure_StartOfMission::MA_SSP_Gradiant_Available */ kcg_bool MA_SSP_Gradiant_Available,
  /* Procedures::Procedure_StartOfMission::Mode_Profile_On_Board */ T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedures::Procedure_StartOfMission::RBC_Authorizes_SR */ kcg_bool RBC_Authorizes_SR,
  /* Procedures::Procedure_StartOfMission::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  /* Procedures::Procedure_StartOfMission::Train_Permitted_NL */ kcg_bool Train_Permitted_NL,
  /* Procedures::Procedure_StartOfMission::Train_Standstill */ kcg_bool Train_Standstill,
  /* Procedures::Procedure_StartOfMission::Valid_Train_Data_Stored */ kcg_bool Valid_Train_Data_Stored,
  outC_Procedure_StartOfMission_Procedures *outC)
{
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static kcg_bool SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
  static SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On SM_SoM_On_state_sel_SM_StartOfMissionProcedure_Procedure_On;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Strating_Command */
  static kcg_bool br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Strating_Command */
  static kcg_bool br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Strating_Command */
  static kcg_bool _1_br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Command */
  static kcg_bool br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L10 */
  static kcg_bool _L10_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L9 */
  static kcg_bool _L9_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L8 */
  static kcg_bool _L8_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L7 */
  static kcg_bool _L7_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L6 */
  static kcg_bool _L6_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On::Waiting_Driver_Selection::_L5 */
  static kcg_bool _L5_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_ST_SM_StartOfMissionProcedure SM_StartOfMissionProcedure_state_sel;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static SSM_ST_SM_StartOfMissionProcedure SM_StartOfMissionProcedure_state_act;
  /* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
  static kcg_bool SM_StartOfMissionProcedure_reset_act;
  
  /* init_SM_StartOfMissionProcedure */ if (outC->init2) {
    outC->init2 = kcg_false;
    SM_StartOfMissionProcedure_state_sel =
      SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
  }
  else {
    SM_StartOfMissionProcedure_state_sel =
      outC->SM_StartOfMissionProcedure_state_nxt;
  }
  /* sel_SM_StartOfMissionProcedure */ switch (SM_StartOfMissionProcedure_state_sel) {
    case SSM_st_Procedure_Off_SM_StartOfMissionProcedure :
      SM_StartOfMissionProcedure_reset_act = (Current_Mode ==
          SB_Level_And_Mode_Types_Pkg) & Train_Standstill & Desk_Open;
      if (SM_StartOfMissionProcedure_reset_act) {
        SM_StartOfMissionProcedure_state_act =
          SSM_st_Procedure_On_SM_StartOfMissionProcedure;
      }
      else {
        SM_StartOfMissionProcedure_state_act =
          SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
      }
      break;
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command =
        (Current_Mode == SB_Level_And_Mode_Types_Pkg) & !Train_Standstill;
      br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command =
        !(Current_Mode == SB_Level_And_Mode_Types_Pkg) | !Desk_Open;
      if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command) {
        SM_StartOfMissionProcedure_reset_act = kcg_true;
        SM_StartOfMissionProcedure_state_act =
          SSM_st_EB_Requested_SM_StartOfMissionProcedure;
      }
      else {
        if (br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command) {
          SM_StartOfMissionProcedure_state_act =
            SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
        }
        else {
          SM_StartOfMissionProcedure_state_act =
            SSM_st_Procedure_On_SM_StartOfMissionProcedure;
        }
        SM_StartOfMissionProcedure_reset_act =
          br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command;
      }
      break;
    case SSM_st_EB_Requested_SM_StartOfMissionProcedure :
      if (Train_Standstill) {
        SM_StartOfMissionProcedure_state_act =
          SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
      }
      else {
        SM_StartOfMissionProcedure_state_act =
          SSM_st_EB_Requested_SM_StartOfMissionProcedure;
      }
      SM_StartOfMissionProcedure_reset_act = Train_Standstill;
      break;
    
  }
  /* act_SM_StartOfMissionProcedure */ switch (SM_StartOfMissionProcedure_state_act) {
    case SSM_st_Procedure_Off_SM_StartOfMissionProcedure :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->EB_Requested = kcg_false;
      outC->Condition_70 = kcg_false;
      outC->Condition_60 = kcg_false;
      outC->Condition_58 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_46 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_10 = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_6 = kcg_false;
      outC->Condition_5 = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Ack_UN_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SN_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->SM_StartOfMissionProcedure_state_nxt =
        SSM_st_Procedure_Off_SM_StartOfMissionProcedure;
      break;
    case SSM_st_Procedure_On_SM_StartOfMissionProcedure :
      outC->EB_Requested = kcg_false;
      if (SM_StartOfMissionProcedure_reset_act) {
        outC->init = kcg_true;
      }
      /* init_SM_SoM_On */ if (outC->init) {
        outC->init = kcg_false;
        SM_SoM_On_state_sel_SM_StartOfMissionProcedure_Procedure_On =
          SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
      }
      else {
        SM_SoM_On_state_sel_SM_StartOfMissionProcedure_Procedure_On =
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On;
      }
      /* sel_SM_SoM_On */ switch (SM_SoM_On_state_sel_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command =
            Driver_Req_NL & Train_Permitted_NL;
          if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Command) {
            SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
              kcg_true;
            SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          else if (Driver_Req_SH) {
            SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
              kcg_true;
            SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          else {
            if (Valid_Train_Data_Stored) {
              SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
                SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
            }
            else {
              SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
                SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
            }
            SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
              Valid_Train_Data_Stored;
          }
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command =
            (Current_Level == M_LEVEL_Level_1) | (Current_Level ==
              M_LEVEL_Level_2) | (Current_Level == M_LEVEL_Level_3);
          _1_br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command =
            Current_Level == M_LEVEL_Level_0;
          br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command =
            Driver_Req_Start &
            (_1_br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command |
              (Current_Level == M_LEVEL_Level_NTC_specified_by_NID_NTC));
          if (br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command) {
            SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
              kcg_true;
            SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          else {
            if (br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command) {
              if (_1_br_1_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command) {
                SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
                  SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
              }
              else {
                SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
                  SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
              }
            }
            else {
              SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
                SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
            }
            SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
              br_2_guard_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Strating_Command;
          }
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          if (Driver_Ack_UN) {
            SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          else {
            SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            Driver_Ack_UN;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          if (Driver_Ack_SN) {
            SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          else {
            SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
              SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          }
          SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            Driver_Ack_SN;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On =
            kcg_false;
          SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        
      }
      /* act_SM_SoM_On */ switch (SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          if (SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On) {
            /* 1 */ Procedure_Start_L1_L2_L3_reset_Procedures(&outC->Context_1);
          }
          break;
        
      }
      if (SM_StartOfMissionProcedure_reset_act) {
        /* 1 */ Procedure_Start_L1_L2_L3_reset_Procedures(&outC->Context_1);
      }
      /* act_SM_SoM_On */ switch (SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          if (SM_SoM_On_reset_act_SM_StartOfMissionProcedure_Procedure_On) {
            /* 1 */
            SH_Initiated_By_Driver_On_reset_Procedures(&outC->_1_Context_1);
          }
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Ack_UN_Req_To_Driver = kcg_true;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_true;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SR_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          outC->Ack_SH_Req_To_Driver = kcg_false;
          outC->Ack_OS_Req_To_Driver = kcg_false;
          outC->Ack_LS_Req_To_Driver = kcg_false;
          break;
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Ack_UN_Req_To_Driver = kcg_false;
          outC->Ack_SN_Req_To_Driver = kcg_false;
          /* 1 */
          Procedure_Start_L1_L2_L3_Procedures(
            Current_Level,
            Driver_Ack_LS,
            Driver_Ack_OS,
            Driver_Ack_SH,
            Driver_Ack_SR,
            Driver_Req_Start,
            MA_SSP_Gradiant_Available,
            Mode_Profile_On_Board,
            RBC_Authorizes_SR,
            &outC->Context_1);
          _L5_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Condition_8;
          _L6_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Condition_10_31;
          _L7_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Condition_15;
          _L8_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Condition_50;
          _L9_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.Condition_70;
          _L10_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection =
            outC->Context_1.MA_Req_To_RBC;
          outC->Ack_LS_Req_To_Driver = outC->Context_1.Ack_LS_Req_To_Driver;
          outC->Ack_OS_Req_To_Driver = outC->Context_1.Ack_OS_Req_To_Driver;
          outC->Ack_SH_Req_To_Driver = outC->Context_1.Ack_SH_Req_To_Driver;
          outC->Ack_SR_Req_To_Driver = outC->Context_1.Ack_SR_Req_To_Driver;
          break;
        
      }
      if (SM_StartOfMissionProcedure_reset_act) {
        /* 1 */ SH_Initiated_By_Driver_On_reset_Procedures(&outC->_1_Context_1);
      }
      outC->SM_StartOfMissionProcedure_state_nxt =
        SSM_st_Procedure_On_SM_StartOfMissionProcedure;
      /* act_SM_SoM_On */ switch (SM_SoM_On_state_act_SM_StartOfMissionProcedure_Procedure_On) {
        case SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->Condition_8 =
            _L5_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          outC->Condition_10 =
            _L6_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          outC->Condition_15 =
            _L7_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          outC->Condition_50 =
            _L8_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          outC->Condition_70 =
            _L9_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->MA_Req_To_RBC =
            _L10_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On_Waiting_Driver_Selection;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        case SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_true;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        case SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_true;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        case SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        case SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        case SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        case SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          /* 1 */
          SH_Initiated_By_Driver_On_Procedures(
            Current_Level,
            Driver_Req_SH,
            kcg_false,
            Shunting_Granted_By_RBC,
            &outC->_1_Context_1);
          outC->Clean_BG_List_SH_Area =
            outC->_1_Context_1.Clean_BG_List_SH_Area;
          outC->Condition_5 = outC->_1_Context_1.Condition5;
          outC->Condition_6 = outC->_1_Context_1.Condition6;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req =
            outC->_1_Context_1.End_Of_Mission_Procedure_Req;
          outC->Request_For_SH_To_RBC =
            outC->_1_Context_1.Request_For_SH_To_RBC;
          outC->SH_Refused_By_RBC_To_DMI =
            outC->_1_Context_1.SH_Refused_By_RBC_To_DMI;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        case SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_true;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        case SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On :
          outC->Condition_70 = kcg_false;
          outC->Condition_60 = kcg_false;
          outC->Condition_58 = kcg_false;
          outC->Condition_50 = kcg_false;
          outC->Condition_46 = kcg_false;
          outC->Condition_15 = kcg_false;
          outC->Condition_10 = kcg_false;
          outC->Condition_8 = kcg_false;
          outC->Condition_6 = kcg_false;
          outC->Condition_5 = kcg_false;
          outC->Clean_BG_List_SH_Area = kcg_false;
          outC->SH_Refused_By_RBC_To_DMI = kcg_false;
          outC->Request_For_SH_To_RBC = kcg_false;
          outC->MA_Req_To_RBC = kcg_false;
          outC->End_Of_Mission_Procedure_Req = kcg_false;
          outC->SM_SoM_On_state_nxt_SM_StartOfMissionProcedure_Procedure_On =
            SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On;
          break;
        
      }
      break;
    case SSM_st_EB_Requested_SM_StartOfMissionProcedure :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->MA_Req_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->EB_Requested = kcg_true;
      outC->Condition_70 = kcg_false;
      outC->Condition_60 = kcg_false;
      outC->Condition_58 = kcg_false;
      outC->Condition_50 = kcg_false;
      outC->Condition_46 = kcg_false;
      outC->Condition_15 = kcg_false;
      outC->Condition_10 = kcg_false;
      outC->Condition_8 = kcg_false;
      outC->Condition_6 = kcg_false;
      outC->Condition_5 = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->Ack_UN_Req_To_Driver = kcg_false;
      outC->Ack_SR_Req_To_Driver = kcg_false;
      outC->Ack_SN_Req_To_Driver = kcg_false;
      outC->Ack_SH_Req_To_Driver = kcg_false;
      outC->Ack_OS_Req_To_Driver = kcg_false;
      outC->Ack_LS_Req_To_Driver = kcg_false;
      outC->SM_StartOfMissionProcedure_state_nxt =
        SSM_st_EB_Requested_SM_StartOfMissionProcedure;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Procedure_StartOfMission_Procedures.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

