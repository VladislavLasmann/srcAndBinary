/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack */
void Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::dmi_train_data_ack_int */DMI_Train_Data_Ack_int_array_T_DATA *dmi_train_data_ack_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::dmi_train_data_ack_ct */DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_train_data_ack_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack::_L12 */
  static kcg_bool _L12;
  
  _L12 = 1 == (*dmi_train_data_ack_int)[0];
  if (_L12) {
    /* 1 */
    C_int_to_DMI_Train_Data_Ack1_DATA_Packets_DMI_to_EVC(
      dmi_train_data_ack_int,
      dmi_train_data_ack_ct);
  }
  else {
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      dmi_train_data_ack_ct,
      (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

