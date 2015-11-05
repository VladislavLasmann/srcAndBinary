/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainMobileConnectionContext_EVC_Support_Pkg.h"

/* EVC_Support_Pkg::maintainMobileConnectionContext */
void maintainMobileConnectionContext_EVC_Support_Pkg(
  /* EVC_Support_Pkg::maintainMobileConnectionContext::MobileFromAPI */ mobileHWStatus_Type_MoRC_Pck *MobileFromAPI,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::mobileDeviceNo */ kcg_int mobileDeviceNo,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::Radio_ID */ NID_RADIO Radio_ID,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::inRadioHole */ kcg_bool inRadioHole,
  /* EVC_Support_Pkg::maintainMobileConnectionContext::MobileConnectionContext */ mobileConnectionContext_T_RCM_Types_Pkg *MobileConnectionContext)
{
  (*MobileConnectionContext).valid = (*MobileFromAPI).valid & (mobileDeviceNo >=
      0);
  (*MobileConnectionContext).mobileDeviceNo = mobileDeviceNo;
  (*MobileConnectionContext).nid_radio = Radio_ID;
  (*MobileConnectionContext).settingUpConnectionHasFailed =
    (*MobileFromAPI).settingUpConnectionHasFailed;
  (*MobileConnectionContext).connectionLost = (*MobileFromAPI).connectionLost;
  (*MobileConnectionContext).isInRadioHole = inRadioHole;
  (*MobileConnectionContext).status = /* 1 */
    getMobileConStatus_EVC_Support_Pkg((*MobileFromAPI).connectionStatus);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** maintainMobileConnectionContext_EVC_Support_Pkg.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

