/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_vMax_id_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_vMax_id */
void CAST_int_to_DMI_vMax_id_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::dmi_vmax_id_int */ DMI_vMax_id_INT_T_DATA dmi_vmax_id_int,
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::dmi_vmax_id_ct */ DMI_vMax_id_T_DMI_Types_Pkg *dmi_vmax_id_ct)
{
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L54 */ kcg_int _L54;
  /* DATA::Variables::CAST_int_to_DMI_vMax_id::_L46 */ kcg_int _L46;
  
  (*dmi_vmax_id_ct).number = dmi_vmax_id_int % 10;
  _L54 = dmi_vmax_id_int / 10;
  (*dmi_vmax_id_ct).dig1 = _L54 % 10;
  _L46 = _L54 / 10;
  (*dmi_vmax_id_ct).dig2 = _L46 % 10;
  (*dmi_vmax_id_ct).dig3 = _L46 / 10 % 10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_vMax_id_DATA_Variables.c
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

