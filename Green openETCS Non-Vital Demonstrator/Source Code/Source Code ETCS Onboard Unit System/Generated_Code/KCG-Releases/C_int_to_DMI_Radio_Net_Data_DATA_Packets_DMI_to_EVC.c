/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data */
void C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data::dmi_radio_net_data_int */ DMI_Radio_Net_Data_int_array_T_DATA *dmi_radio_net_data_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Radio_Net_Data::dmi_radio_net_data_ct */ DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_radio_net_data_ct)
{
  (*dmi_radio_net_data_ct).systemTime = (*dmi_radio_net_data_int)[1];
  (*dmi_radio_net_data_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_radio_net_data_int)[0]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-12-07T14:52:34
*************************************************************$ */

