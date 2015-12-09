/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int */
void Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int::dmi_text_message_ack_ct */ DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_text_message_ack_ct,
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int::dmi_text_message_ack_int */ DMI_Text_Message_Ack_int_array_T_DATA *dmi_text_message_ack_int)
{
  /* ck__L20 */ if ((*dmi_text_message_ack_ct).valid) {
    /* 1 */
    C_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC(
      dmi_text_message_ack_ct,
      dmi_text_message_ack_int);
  }
  else {
    kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(
      dmi_text_message_ack_int,
      (DMI_Text_Message_Ack_int_array_T_DATA *)
        &cDMI_Text_Message_Ack_int_array_DATA_Packets_DMI_to_EVC);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-12-09T10:03:51
*************************************************************$ */

