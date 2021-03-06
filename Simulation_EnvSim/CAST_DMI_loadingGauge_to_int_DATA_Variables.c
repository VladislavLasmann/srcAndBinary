/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_loadingGauge_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_DMI_loadingGauge_to_int */
DMI_loadingGauge_INT_T_DATA CAST_DMI_loadingGauge_to_int_DATA_Variables(
  /* DATA::Variables::CAST_DMI_loadingGauge_to_int::dmi_loadingGauge_ct */DMI_loadingGauge_T_DMI_Types_Pkg *dmi_loadingGauge_ct)
{
  /* DATA::Variables::CAST_DMI_loadingGauge_to_int::_L23 */
  static kcg_int _L23;
  /* DATA::Variables::CAST_DMI_loadingGauge_to_int::_L26 */
  static kcg_bool _L26;
  /* DATA::Variables::CAST_DMI_loadingGauge_to_int::_L25 */
  static kcg_int _L25;
  /* DATA::Variables::CAST_DMI_loadingGauge_to_int::_L28 */
  static kcg_int _L28;
  /* DATA::Variables::CAST_DMI_loadingGauge_to_int::dmi_loadingGauge_int */
  static DMI_loadingGauge_INT_T_DATA dmi_loadingGauge_int;
  
  /* 3 */ BCD_to_Int_Utilities((*dmi_loadingGauge_ct).dig3, &_L28, &_L26);
  /* 2 */ BCD_to_Int_Utilities((*dmi_loadingGauge_ct).dig2, &_L25, &_L26);
  /* 1 */ BCD_to_Int_Utilities((*dmi_loadingGauge_ct).dig1, &_L23, &_L26);
  dmi_loadingGauge_int = (*dmi_loadingGauge_ct).number + _L23 * 10 + _L25 *
    100 + _L28 * 1000;
  return dmi_loadingGauge_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_DMI_loadingGauge_to_int_DATA_Variables.c
** Generation date: 2015-11-23T09:24:22
*************************************************************$ */

