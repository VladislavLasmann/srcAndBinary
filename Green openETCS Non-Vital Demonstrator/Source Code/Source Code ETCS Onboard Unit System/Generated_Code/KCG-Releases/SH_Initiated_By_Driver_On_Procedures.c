/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SH_Initiated_By_Driver_On_Procedures.h"

#ifndef KCG_USER_DEFINED_INIT
void SH_Initiated_By_Driver_On_init_Procedures(
  outC_SH_Initiated_By_Driver_On_Procedures *outC)
{
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Condition5 = kcg_true;
  outC->Condition6 = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->init = kcg_true;
  outC->SM_SH_Initiated_By_Driver_state_nxt =
    SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
}
#endif /* KCG_USER_DEFINED_INIT */


void SH_Initiated_By_Driver_On_reset_Procedures(
  outC_SH_Initiated_By_Driver_On_Procedures *outC)
{
  outC->init = kcg_true;
}

/* Procedures::SH_Initiated_By_Driver_On */
void SH_Initiated_By_Driver_On_Procedures(
  /* Procedures::SH_Initiated_By_Driver_On::Current_Level */ M_LEVEL Current_Level,
  /* Procedures::SH_Initiated_By_Driver_On::Driver_Req_SH */ kcg_bool Driver_Req_SH,
  /* Procedures::SH_Initiated_By_Driver_On::On_Going_Mission */ kcg_bool On_Going_Mission,
  /* Procedures::SH_Initiated_By_Driver_On::Shunting_Granted_By_RBC */ kcg_bool Shunting_Granted_By_RBC,
  outC_SH_Initiated_By_Driver_On_Procedures *outC)
{
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::SH_procedure_possible */
  static kcg_bool br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver::Issue_SH_Request_L2_L3 */
  static kcg_bool br_2_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Driver SM_SH_Initiated_By_Driver_state_sel;
  /* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
  static SSM_ST_SM_SH_Initiated_By_Driver SM_SH_Initiated_By_Driver_state_act;
  /* Procedures::SH_Initiated_By_Driver_On::Loc_Level_2_3 */
  static kcg_bool Loc_Level_2_3;
  
  switch (Current_Level) {
    case M_LEVEL_Level_2 :
      Loc_Level_2_3 = kcg_true;
      break;
    case M_LEVEL_Level_3 :
      Loc_Level_2_3 = kcg_true;
      break;
    
    default :
      Loc_Level_2_3 = kcg_false;
  }
  /* init_SM_SH_Initiated_By_Driver */ if (outC->init) {
    outC->init = kcg_false;
    SM_SH_Initiated_By_Driver_state_sel =
      SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
  }
  else {
    SM_SH_Initiated_By_Driver_state_sel =
      outC->SM_SH_Initiated_By_Driver_state_nxt;
  }
  /* sel_SM_SH_Initiated_By_Driver */ switch (SM_SH_Initiated_By_Driver_state_sel) {
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible =
        !Loc_Level_2_3;
      if (Driver_Req_SH &
        (br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible |
          Loc_Level_2_3)) {
        if (br_1_guard_SM_SH_Initiated_By_Driver_SH_procedure_possible) {
          SM_SH_Initiated_By_Driver_state_act =
            SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
        }
        else {
          SM_SH_Initiated_By_Driver_state_act =
            SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
        }
      }
      else {
        SM_SH_Initiated_By_Driver_state_act =
          SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
      }
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      br_2_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3 =
        !Shunting_Granted_By_RBC;
      if (Shunting_Granted_By_RBC) {
        outC->SH_Refused_By_RBC_To_DMI = kcg_false;
        SM_SH_Initiated_By_Driver_state_act =
          SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      }
      else if (br_2_guard_SM_SH_Initiated_By_Driver_Issue_SH_Request_L2_L3) {
        outC->SH_Refused_By_RBC_To_DMI = kcg_true;
        SM_SH_Initiated_By_Driver_state_act =
          SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
      }
      else {
        outC->SH_Refused_By_RBC_To_DMI = kcg_false;
        SM_SH_Initiated_By_Driver_state_act =
          SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      }
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      SM_SH_Initiated_By_Driver_state_act =
        SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
      break;
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      outC->SH_Refused_By_RBC_To_DMI = kcg_false;
      SM_SH_Initiated_By_Driver_state_act =
        SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      break;
    
  }
  /* act_SM_SH_Initiated_By_Driver */ switch (SM_SH_Initiated_By_Driver_state_act) {
    case SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver :
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Condition6 = kcg_false;
      outC->Condition5 = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->SM_SH_Initiated_By_Driver_state_nxt =
        SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver;
      break;
    case SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver :
      outC->Request_For_SH_To_RBC = kcg_true;
      outC->End_Of_Mission_Procedure_Req = kcg_false;
      outC->Condition6 = kcg_false;
      outC->Condition5 = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_false;
      outC->SM_SH_Initiated_By_Driver_state_nxt =
        SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver;
      break;
    case SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver :
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->Condition6 = kcg_false;
      outC->Condition5 = kcg_true;
      outC->Clean_BG_List_SH_Area = kcg_true;
      outC->End_Of_Mission_Procedure_Req = On_Going_Mission;
      outC->SM_SH_Initiated_By_Driver_state_nxt =
        SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver;
      break;
    case SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver :
      outC->Request_For_SH_To_RBC = kcg_false;
      outC->Condition6 = kcg_true;
      outC->Condition5 = kcg_false;
      outC->Clean_BG_List_SH_Area = kcg_true;
      outC->End_Of_Mission_Procedure_Req = On_Going_Mission;
      outC->SM_SH_Initiated_By_Driver_state_nxt =
        SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver;
      break;
    
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SH_Initiated_By_Driver_On_Procedures.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

