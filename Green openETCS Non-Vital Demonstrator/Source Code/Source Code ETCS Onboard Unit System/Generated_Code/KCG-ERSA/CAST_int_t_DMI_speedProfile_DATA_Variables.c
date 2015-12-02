/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_t_DMI_speedProfile_DATA_Variables.h"

/* DATA::Variables::CAST_int_t_DMI_speedProfile */
void CAST_int_t_DMI_speedProfile_DATA_Variables(
  /* DATA::Variables::CAST_int_t_DMI_speedProfile::dmi_speedProfile_int */ DMI_speedProfile_int_array_T_DATA *dmi_speedProfile_int,
  /* DATA::Variables::CAST_int_t_DMI_speedProfile::dmi_speedProfile */ DMI_speedProfile_T_DMI_Types_Pkg *dmi_speedProfile)
{
  /* DATA::Variables::CAST_int_t_DMI_speedProfile */ DMI_SpeedProfileArray_T_DMI_Types_Pkg tmp;
  kcg_int i;
  
  (*dmi_speedProfile).profileChanged = /* 2 */
    Int_to_Bool_Utilities((*dmi_speedProfile_int)[0]);
  /* 3 */ for (i = 0; i < 32; i++) {
    /* 2 */
    CAST_int_to_DMI_speedProfileElement_DATA_Variables(
      (*dmi_speedProfile_int)[i + 1],
      (*dmi_speedProfile_int)[i + 33],
      (*dmi_speedProfile_int)[i + 65],
      (*dmi_speedProfile_int)[i + 97],
      &tmp[i]);
  }
  kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
    &(*dmi_speedProfile).speedProfiles,
    &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_t_DMI_speedProfile_DATA_Variables.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

