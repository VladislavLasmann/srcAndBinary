/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addGradient_SDMModelPkg.h"

/* SDMModelPkg::addGradient */
void addGradient_SDMModelPkg(
  /* SDMModelPkg::addGradient::aBrakeSafe */ ASafe_T_CalcBrakingCurves_types *aBrakeSafe,
  /* SDMModelPkg::addGradient::aGradient */ A_gradient_t_SDM_GradientAcceleration_types *aGradient,
  /* SDMModelPkg::addGradient::aSafe */ ASafe_T_CalcBrakingCurves_types *aSafe)
{
  /* SDMModelPkg::addGradient */
  static kcg_real acc;
  /* SDMModelPkg::addGradient */
  static ASafe_Data_T_CalcBrakingCurves_types tmp;
  static kcg_int i;
  /* SDMModelPkg::addGradient::_L17 */
  static L_internal_real_Type_SDM_Types_Pkg _L17;
  /* SDMModelPkg::addGradient::_L28 */
  static array_real_100 _L28;
  
  kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
    &(*aSafe).speed_definition,
    &(*aBrakeSafe).speed_definition);
  _L17 = 0.0;
  /* 1 */ for (i = 0; i < 100; i++) {
    acc = _L17;
    /* 1 */
    collectGradientLocations_SDMModelPkg(
      acc,
      &(*aGradient)[i],
      &_L17,
      &_L28[i]);
  }
  kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
    &(*aSafe).distance_definition,
    &_L28);
  /* 2 */ for (i = 0; i < 14; i++) {
    /* 1 */
    iterateASafeData_SDMModelPkg(&(*aBrakeSafe).data[i], aGradient, &tmp[i]);
  }
  kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(&(*aSafe).data, &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** addGradient_SDMModelPkg.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

