/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Driver_Identifier_to_int1_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1 */
void C_DMI_Driver_Identifier_to_int1_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::dmi_driver_identifier_ct */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driver_identifier_ct,
  /* DATA::Packets::Bothways::C_DMI_Driver_Identifier_to_int1::dmi_driver_identifier_int */ DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int)
{
  (&(*dmi_driver_identifier_int)[0])[1] =
    (*dmi_driver_identifier_ct).systemTime;
  (&(*dmi_driver_identifier_int)[0])[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_driver_identifier_ct).valid);
  /* 1 */
  CAST_DriverIdentfier_to_int_DATA_Variables(
    &(*dmi_driver_identifier_ct).driverIdentifier,
    (DriverIdentifier_INT_T_DATA *) &(*dmi_driver_identifier_int)[2]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Driver_Identifier_to_int1_DATA_Packets_Bothways.c
** Generation date: 2015-10-23T15:36:33
*************************************************************$ */

