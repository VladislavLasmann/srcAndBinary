/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:32:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int */
void C_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int::dmi_train_data_ack_ct */DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_train_data_ack_ct,
  /* DATA::Packets::DMI_to_EVC::C_DMI_Train_Data_Ack_to_int::dmi_train_data_ack_int */DMI_Train_Data_Ack_int_array_T_DATA *dmi_train_data_ack_int)
{
  (*dmi_train_data_ack_int)[1] = (*dmi_train_data_ack_ct).systemTime;
  (*dmi_train_data_ack_int)[0] = /* 2 */
    Bool_to_Int_Utilities((*dmi_train_data_ack_ct).valid);
  (*dmi_train_data_ack_int)[2] = /* 1 */
    Bool_to_Int_Utilities((*dmi_train_data_ack_ct).acknowledged);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-12T10:32:00
*************************************************************$ */

