/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int */
void C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int::dmi_icon_ack_ct */ DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_icon_ack_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_Icon_Ack_to_int::dmi_icon_ack_int */ DMI_Icon_Ack_int_array_T_DATA *dmi_icon_ack_int)
{
  (*dmi_icon_ack_int)[0] = 1;
  (*dmi_icon_ack_int)[1] = (*dmi_icon_ack_ct).systemTime;
  (*dmi_icon_ack_int)[2] = (*dmi_icon_ack_ct).DMI_nid_icon_identifier;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

