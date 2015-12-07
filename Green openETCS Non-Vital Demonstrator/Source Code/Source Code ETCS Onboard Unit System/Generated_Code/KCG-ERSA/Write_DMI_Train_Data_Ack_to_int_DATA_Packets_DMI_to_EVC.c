/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int */
void Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int::dmi_train_data_ack_ct */ DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_train_data_ack_ct,
  /* DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int::dmi_train_data_ack_int */ DMI_Train_Data_Ack_int_array_T_DATA *dmi_train_data_ack_int)
{
  /* ck__L22 */ if ((*dmi_train_data_ack_ct).valid) {
    /* 1 */
    C_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC(
      dmi_train_data_ack_ct,
      dmi_train_data_ack_int);
  }
  else {
    kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(
      dmi_train_data_ack_int,
      (DMI_Train_Data_Ack_int_array_T_DATA *)
        &cDMI_Train_Data_Ack_int_array_DATA_Packets_DMI_to_EVC);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-12-07T14:47:43
*************************************************************$ */

