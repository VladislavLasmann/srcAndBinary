/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Staff_Responsible_InputManagement.h"

/* InputManagement::Input_Staff_Responsible */
void Input_Staff_Responsible_InputManagement(
  /* InputManagement::Input_Staff_Responsible::P_63 */ P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *P_63,
  /* InputManagement::Input_Staff_Responsible::P_137 */ P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *P_137,
  /* InputManagement::Input_Staff_Responsible::List_BG_Related_SR_Empty */ kcg_bool *List_BG_Related_SR_Empty,
  /* InputManagement::Input_Staff_Responsible::Stop_if_In_SR */ kcg_bool *Stop_if_In_SR)
{
  /* InputManagement::Input_Staff_Responsible */
  static kcg_bool tmp;
  
  switch ((*P_137).q_srstop) {
    case Q_SRSTOP_Stop_if_in_SR_mode :
      tmp = kcg_true;
      break;
    case Q_SRSTOP_Go_if_in_SR_mode :
      tmp = kcg_false;
      break;
    
  }
  *Stop_if_In_SR = (*P_137).valid & tmp;
  *List_BG_Related_SR_Empty = !(*P_63)[1].valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Staff_Responsible_InputManagement.c
** Generation date: 2015-10-16T18:56:07
*************************************************************$ */

