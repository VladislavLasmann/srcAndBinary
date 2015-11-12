/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "determineSupervisingRBC_Handove.h"

/* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC */
void determineSupervisingRBC_Handove(
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::morcStatus_1 */ morcStatus_T_RCM_Session_Types_ *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::morcStatus_2 */ morcStatus_T_RCM_Session_Types_ *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::handingOverMobile_is_mobile_1 */ kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::useInformationFromAcceptingRBC */ kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::sessionManagementAbility */ abilityToHandleCommunicationSes sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervisingRBC */ connection_ids_T_Handover_Pkg *supervisingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervising_isMobile_1 */ kcg_bool *supervising_isMobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervising_isMobile_2 */ kcg_bool *supervising_isMobile_2)
{
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1::else::_L18 */
  static kcg_bool _L18_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Handover_Pkg::handoverUtils_Pkg::determineSupervisingRBC::supervisingStatusFromMobile */
  static morcStatus_T_RCM_Session_Types_ supervisingStatusFromMobile;
  
  IfBlock1_clock = sessionManagementAbility == isAbleToManageOneSession_Handov;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_morcStatus_T_RCM_Sessi(&supervisingStatusFromMobile, morcStatus_1);
    *supervising_isMobile_2 = kcg_false;
    *supervising_isMobile_1 = kcg_true;
  }
  else {
    /* 3 */ if (useInformationFromAcceptingRBC) {
      /* 2 */ if (handingOverMobile_is_mobile_1) {
        kcg_copy_morcStatus_T_RCM_Sessi(
          &supervisingStatusFromMobile,
          morcStatus_2);
      }
      else {
        kcg_copy_morcStatus_T_RCM_Sessi(
          &supervisingStatusFromMobile,
          morcStatus_1);
      }
    }
    else /* 1 */ if (handingOverMobile_is_mobile_1) {
      kcg_copy_morcStatus_T_RCM_Sessi(
        &supervisingStatusFromMobile,
        morcStatus_1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Sessi(
        &supervisingStatusFromMobile,
        morcStatus_2);
    }
    _L18_IfBlock1 = (handingOverMobile_is_mobile_1 &
        !useInformationFromAcceptingRBC) | (!handingOverMobile_is_mobile_1 &
        useInformationFromAcceptingRBC);
    *supervising_isMobile_1 = _L18_IfBlock1;
    *supervising_isMobile_2 = !_L18_IfBlock1;
  }
  (*supervisingRBC).valid = supervisingStatusFromMobile.registration.valid &
    supervisingStatusFromMobile.connection.valid &
    supervisingStatusFromMobile.session.valid &
    (supervisingStatusFromMobile.session.phase ==
      sp_maintaining_RCM_Session_Type);
  (*supervisingRBC).mobileDeviceNo =
    supervisingStatusFromMobile.registration.mobileDeviceNo;
  (*supervisingRBC).nid_c = supervisingStatusFromMobile.session.nid_c;
  (*supervisingRBC).nid_RBC = supervisingStatusFromMobile.session.nid_rbc;
  (*supervisingRBC).nid_radio = supervisingStatusFromMobile.session.nid_radio;
  (*supervisingRBC).nid_mn = supervisingStatusFromMobile.registration.nid_mn;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** determineSupervisingRBC_Handove.c
** Generation date: 2015-11-12T17:51:55
*************************************************************$ */

