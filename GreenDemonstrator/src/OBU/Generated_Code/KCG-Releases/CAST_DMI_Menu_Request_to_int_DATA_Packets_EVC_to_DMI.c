/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int */
void CAST_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int::dmi_menu_request_ct */ DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_menu_request_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Menu_Request_to_int::dmi_menu_request_int */ DMI_Menu_Request_int_array_T_DATA *dmi_menu_request_int)
{
  (*dmi_menu_request_int)[1] = (*dmi_menu_request_ct).system_clock;
  (*dmi_menu_request_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_menu_request_ct).valid);
  (*dmi_menu_request_int)[2] = /* 1 */
    CAST_DMI_Available_Menu_to_int_DATA_Variables(
      &(*dmi_menu_request_ct).available_menu);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-03T14:26:13
*************************************************************$ */

