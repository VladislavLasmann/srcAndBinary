/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status */
void C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status::dmi_status_int */ DMI_Status_int_array_T_DATA *dmi_status_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Status::dim_status_ct */ DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *dim_status_ct)
{
  (*dim_status_ct).systemTime = (*dmi_status_int)[1];
  (*dim_status_ct).nAlive = (*dmi_status_int)[3];
  (*dim_status_ct).valid = /* 1 */ Int_to_Bool_Utilities((*dmi_status_int)[0]);
  (*dim_status_ct).statusSet = /* 1 */
    CAST_int_to_DMI_StatusSet_DATA_Variables((*dmi_status_int)[2]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Status_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

