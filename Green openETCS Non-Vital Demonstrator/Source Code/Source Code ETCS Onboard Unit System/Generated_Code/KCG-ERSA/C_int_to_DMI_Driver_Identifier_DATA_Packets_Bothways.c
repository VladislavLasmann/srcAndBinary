/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier */
void C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier::dmi_driver_identifier_int */ DMI_Driver_Identifier_int_array_T_DATA *dmi_driver_identifier_int,
  /* DATA::Packets::Bothways::C_int_to_DMI_Driver_Identifier::dmi_driver_identifier_ct */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driver_identifier_ct)
{
  (*dmi_driver_identifier_ct).systemTime = (*dmi_driver_identifier_int)[1];
  (*dmi_driver_identifier_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_driver_identifier_int)[0]);
  /* 1 */
  CAST_int_to_DriverIdentfier_DATA_Variables(
    (DriverIdentifier_INT_T_DATA *) &(*dmi_driver_identifier_int)[2],
    &(*dmi_driver_identifier_ct).driverIdentifier);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways.c
** Generation date: 2015-11-25T12:17:41
*************************************************************$ */

