/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_Entry_Request_to_int */
void CAST_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Entry_Request_to_int::dmi_entry_request_ct */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entry_request_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_Entry_Request_to_int::dmi_entry_request_int */ DMI_Entry_Request_int_array_T_DATA *dmi_entry_request_int)
{
  (*dmi_entry_request_int)[1] = (*dmi_entry_request_ct).system_clock;
  (*dmi_entry_request_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_entry_request_ct).valid);
  (*dmi_entry_request_int)[2] = /* 1 */
    CAST_DMI_List_Entry_Request_to_int_DATA_Variables(
      (*dmi_entry_request_ct).entry_request);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-24T10:24:40
*************************************************************$ */

