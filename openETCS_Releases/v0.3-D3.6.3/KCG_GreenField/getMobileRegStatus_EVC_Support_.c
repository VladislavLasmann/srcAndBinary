/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getMobileRegStatus_EVC_Support_.h"

/* EVC_Support_Pkg::getMobileRegStatus */
mobileRegistrationStatus_T_RCM_ getMobileRegStatus_EVC_Support_(
  /* EVC_Support_Pkg::getMobileRegStatus::HW_ConnectionStatus */ mobileHWConnectionStatus_Type_M HW_ConnectionStatus)
{
  /* EVC_Support_Pkg::getMobileRegStatus::MobileRegistrationStatus */
  static mobileRegistrationStatus_T_RCM_ MobileRegistrationStatus;
  
  switch (HW_ConnectionStatus) {
    case mhwc_notRegistered_MoRC_Pck :
      MobileRegistrationStatus = mrs_unregistered_RCM_Types_Pkg;
      break;
    case mhwc_registered_MoRC_Pck :
      MobileRegistrationStatus = mrs_registered_RCM_Types_Pkg;
      break;
    case mhwc_connected_MoRC_Pck :
      MobileRegistrationStatus = mrs_registered_RCM_Types_Pkg;
      break;
    case mhwc_connecting_MoRC_Pck :
      MobileRegistrationStatus = mrs_registered_RCM_Types_Pkg;
      break;
    
    default :
      MobileRegistrationStatus = mrs_unregistered_RCM_Types_Pkg;
  }
  return MobileRegistrationStatus;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** getMobileRegStatus_EVC_Support_.c
** Generation date: 2015-11-05T08:54:05
*************************************************************$ */

