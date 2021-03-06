/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_level_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_level */
void CAST_int_to_DMI_level_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_level::level_int */ kcg_int level_int,
  /* DATA::Variables::CAST_int_to_DMI_level::nid_stm_int */ kcg_int nid_stm_int,
  /* DATA::Variables::CAST_int_to_DMI_level::dmi_level_ct */ DMI_level_T_DMI_Types_Pkg *dmi_level_ct)
{
  (*dmi_level_ct).nid_stm = nid_stm_int;
  (*dmi_level_ct).level = /* 1 */ CAST_Int_to_M_LEVEL_TM_conversions(level_int);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_level_DATA_Variables.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

