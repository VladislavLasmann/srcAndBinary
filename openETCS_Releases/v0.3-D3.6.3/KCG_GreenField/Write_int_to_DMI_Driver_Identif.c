/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_Driver_Identif.h"

/* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier */
void Write_int_to_DMI_Driver_Identif(
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::dmi_driver_identifier_int */ DMI_Driver_Identifier_int_array *dmi_driver_identifier_int,
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::dmi_driver_identifier_ct */ _24_DMI_Driver_Identifier_T_DMI *dmi_driver_identifier_ct)
{
  /* DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier::_L25 */
  static kcg_bool _L25;
  
  _L25 = 1 == (*dmi_driver_identifier_int)[0];
  /* ck__L25 */ if (_L25) {
    /* 1 */
    C_int_to_DMI_Driver_Identifier_(
      dmi_driver_identifier_int,
      dmi_driver_identifier_ct);
  }
  else {
    kcg_copy__24_DMI_Driver_Identif(
      dmi_driver_identifier_ct,
      (_24_DMI_Driver_Identifier_T_DMI *) &cDMI_Driver_Identifier_DATA_Pac);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Write_int_to_DMI_Driver_Identif.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

