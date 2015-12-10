/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Level_Data_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Level_Data */
void C_int_to_DMI_Level_Data_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_int_to_DMI_Level_Data::dmi_level_data_int */ DMI_Level_Data_int_array_T_DATA *dmi_level_data_int,
  /* DATA::Packets::Bothways::C_int_to_DMI_Level_Data::dmi_level_data_ct */ DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *dmi_level_data_ct)
{
  (*dmi_level_data_ct).systemTime = (*dmi_level_data_int)[1];
  (*dmi_level_data_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_level_data_int)[0]);
  /* 1 */
  CAST_int_to_DMI_level_DATA_Variables(
    (*dmi_level_data_int)[2],
    (*dmi_level_data_int)[3],
    &(*dmi_level_data_ct).level);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Level_Data_DATA_Packets_Bothways.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

