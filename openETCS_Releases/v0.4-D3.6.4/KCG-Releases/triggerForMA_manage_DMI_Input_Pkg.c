/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "triggerForMA_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::triggerForMA */
void triggerForMA_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::triggerForMA::fromDMI_driverRequest */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_driverRequest,
  /* manage_DMI_Input_Pkg::triggerForMA::outForMA */ Driver2MAR_T_MA_Request *outForMA)
{
  /* ck_isValid */ if ((*fromDMI_driverRequest).valid) {
    (*outForMA).trackAheadFree = (*fromDMI_driverRequest).m_request ==
      Track_Ahead_Free_is_validated_DMI_Types_Pkg;
    (*outForMA).driverSelectsStart = (*fromDMI_driverRequest).m_request ==
      Start_of_mission_DMI_Types_Pkg;
  }
  else {
    kcg_copy_Driver2MAR_T_MA_Request(
      outForMA,
      (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_Pkg);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** triggerForMA_manage_DMI_Input_Pkg.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

