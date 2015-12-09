/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways.h"

/* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int */
void C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways(
  /* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int::dmi_adhesion_factor_data_ct */ DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesion_factor_data_ct,
  /* DATA::Packets::Bothways::C_DMI_Adhesion_Factor_Data_to_int::dmi_adhesion_factor_data_int */ DMI_Adhesion_Factor_Data_int_array_T_DATA *dmi_adhesion_factor_data_int)
{
  (*dmi_adhesion_factor_data_int)[1] =
    (*dmi_adhesion_factor_data_ct).systemTime;
  (*dmi_adhesion_factor_data_int)[0] = /* 1 */
    Bool_to_Int_Utilities((*dmi_adhesion_factor_data_ct).valid);
  (*dmi_adhesion_factor_data_int)[2] = /* 1 */
    CAST_M_ADHESION_to_int_TM_conversions(
      (*dmi_adhesion_factor_data_ct).adhesionFactor);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways.c
** Generation date: 2015-12-09T10:03:49
*************************************************************$ */

