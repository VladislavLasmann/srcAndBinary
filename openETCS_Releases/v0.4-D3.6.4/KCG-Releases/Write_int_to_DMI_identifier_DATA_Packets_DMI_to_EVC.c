/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.h"

/* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier */
void Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::dmi_identifier_int_in */ DMI_Identifier_int_array_T_DATA *dmi_identifier_int_in,
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::dmi_identifier_ct_out */ DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *dmi_identifier_ct_out)
{
  /* DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier::_L278 */
  static kcg_bool _L278;
  
  _L278 = 1 == (*dmi_identifier_int_in)[0];
  /* ck__L278 */ if (_L278) {
    /* 1 */
    C_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(
      dmi_identifier_int_in,
      dmi_identifier_ct_out);
  }
  else {
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      dmi_identifier_ct_out,
      (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMI_Identifier_DATA_Packets_DMI_to_EVC);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

