/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_speedProfileElement_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_speedProfileElement_to_int */
void CAST_DMI_speedProfileElement_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::dmi_speedProfileElemen */ DMI_speedProfileElement_T_DMI_Types_Pkg *dmi_speedProfileElemen,
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::valid */ kcg_int *valid,
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::loc_abs */ kcg_int *loc_abs,
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::loc_lrbg */ kcg_int *loc_lrbg,
  /* DATA::Variables::CAST_DMI_speedProfileElement_to_int::mrs */ kcg_int *mrs)
{
  *mrs = (*dmi_speedProfileElemen).MRS;
  *loc_lrbg = (*dmi_speedProfileElemen).Loc_LRBG;
  *loc_abs = (*dmi_speedProfileElemen).Loc_Abs;
  *valid = /* 1 */ Bool_to_Int_Utilities((*dmi_speedProfileElemen).valid);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_DMI_speedProfileElement_to_int_DATA_Variables.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

