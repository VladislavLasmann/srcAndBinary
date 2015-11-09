/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack */
void Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack::dmi_text_message_ack_int */DMI_Text_Message_Ack_int_array_T_DATA *dmi_text_message_ack_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack::dmi_text_message_ack_ct */DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_text_message_ack_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack::_L15 */
  static kcg_bool _L15;
  
  _L15 = 1 == (*dmi_text_message_ack_int)[0];
  if (_L15) {
    /* 1 */
    C_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC(
      dmi_text_message_ack_int,
      dmi_text_message_ack_ct);
  }
  else {
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      dmi_text_message_ack_ct,
      (DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-09T13:58:55
*************************************************************$ */

