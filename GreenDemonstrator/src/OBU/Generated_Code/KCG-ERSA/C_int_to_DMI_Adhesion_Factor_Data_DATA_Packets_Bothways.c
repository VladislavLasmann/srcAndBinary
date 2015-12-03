/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data */
void C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data::dmi_adhesion_factor_data_int */ DMI_Adhesion_Factor_Data_int_array_T_DATA *dmi_adhesion_factor_data_int,
  /* DATA::Packets::Bothways::C_int_to_DMI_Adhesion_Factor_Data::dmi_adhesion_factor_data_ct */ DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesion_factor_data_ct)
{
  (*dmi_adhesion_factor_data_ct).systemTime =
    (*dmi_adhesion_factor_data_int)[1];
  (*dmi_adhesion_factor_data_ct).valid = /* 1 */
    Int_to_Bool_Utilities((*dmi_adhesion_factor_data_int)[0]);
  (*dmi_adhesion_factor_data_ct).adhesionFactor = /* 1 */
    CAST_Int_to_M_ADHESION_TM_conversions((*dmi_adhesion_factor_data_int)[2]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways.c
** Generation date: 2015-12-02T15:32:27
*************************************************************$ */

