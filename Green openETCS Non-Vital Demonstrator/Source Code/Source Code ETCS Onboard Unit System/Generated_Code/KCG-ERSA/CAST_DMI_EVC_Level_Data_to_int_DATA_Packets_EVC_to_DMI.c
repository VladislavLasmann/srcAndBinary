/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI.h"

/* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Level_Data_to_int */
void CAST_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI(
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Level_Data_to_int::dmi_evc_level_data_ct */DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_level_data_ct,
  /* DATA::Packets::EVC_to_DMI::CAST_DMI_EVC_Level_Data_to_int::dmi_evc_level_data_int */DMI_EVC_Level_Data_int_array_T_DATA *dmi_evc_level_data_int)
{
  (&(*dmi_evc_level_data_int)[0])[1] = (*dmi_evc_level_data_ct).system_clock;
  (&(*dmi_evc_level_data_int)[0])[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_evc_level_data_ct).valid);
  /* 1 */
  CAST_DMI_LevelList_to_int_DATA_Variables(
    &(*dmi_evc_level_data_ct).levelList,
    (DMI_LevelList_int_array_T_DATA *) &(*dmi_evc_level_data_int)[2]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI.c
** Generation date: 2015-11-09T13:58:54
*************************************************************$ */

