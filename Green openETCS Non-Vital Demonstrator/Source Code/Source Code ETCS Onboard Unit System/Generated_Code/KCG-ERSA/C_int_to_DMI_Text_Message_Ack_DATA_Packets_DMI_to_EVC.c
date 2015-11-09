/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Text_Message_Ack */
void C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Text_Message_Ack::dmi_text_message_ack_int */DMI_Text_Message_Ack_int_array_T_DATA *dmi_text_message_ack_int,
  /* DATA::Packets::DMI_to_EVC::C_int_to_DMI_Text_Message_Ack::dmi_text_message_ack_ct */DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_text_message_ack_ct)
{
  (*dmi_text_message_ack_ct).systemTime = (*dmi_text_message_ack_int)[1];
  (*dmi_text_message_ack_ct).textMessage_ID = (*dmi_text_message_ack_int)[2];
  (*dmi_text_message_ack_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_text_message_ack_int)[0]);
  (*dmi_text_message_ack_ct).acknowledged = /* 2 */
    Int_to_Bool_Utilities((*dmi_text_message_ack_int)[3]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

