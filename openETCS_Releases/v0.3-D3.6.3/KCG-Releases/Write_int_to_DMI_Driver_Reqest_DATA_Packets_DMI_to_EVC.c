/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest */
void Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::dmi_driver_request_int */ DMI_Driver_Request_int_array_T_DATA *dmi_driver_request_int,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::dmi_driver_request_ct */ DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_driver_request_ct)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest::_L11 */
  static kcg_bool _L11;
  
  _L11 = 1 == (*dmi_driver_request_int)[0];
  /* ck__L11 */ if (_L11) {
    /* 1 */
    C_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC(
      dmi_driver_request_int,
      dmi_driver_request_ct);
  }
  else {
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      dmi_driver_request_ct,
      (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMI_Driver_Request_DATA_Packets_DMI_to_EVC);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

