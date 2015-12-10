/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "radioStatusRouter_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter */
void radioStatusRouter_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatus_1 */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatus_2 */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::handingOverMobile_is_mobile_1 */ kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatusFromAcceptingRBC */ morcStatus_T_RCM_Session_Types_Pkg *morcStatusFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::morcStatusFromHandingOverRBC */ morcStatus_T_RCM_Session_Types_Pkg *morcStatusFromHandingOverRBC)
{
  /* Handover_Pkg::handoverUtils_Pkg::radioStatusRouter::IfBlock1 */ kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      morcStatusFromAcceptingRBC,
      morcStatus_1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      morcStatusFromHandingOverRBC,
      morcStatus_1);
  }
  else /* 21 */ if (handingOverMobile_is_mobile_1) {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      morcStatusFromAcceptingRBC,
      morcStatus_2);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      morcStatusFromHandingOverRBC,
      morcStatus_1);
  }
  else {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      morcStatusFromAcceptingRBC,
      morcStatus_1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      morcStatusFromHandingOverRBC,
      morcStatus_2);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** radioStatusRouter_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

