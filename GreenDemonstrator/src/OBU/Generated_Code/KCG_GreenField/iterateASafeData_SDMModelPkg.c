/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "iterateASafeData_SDMModelPkg.h"

/* SDMModelPkg::iterateASafeData */
void iterateASafeData_SDMModelPkg(
  /* SDMModelPkg::iterateASafeData::ASafeRows */ ASafeRow_T_CalcBrakingCurves_ty *ASafeRows,
  /* SDMModelPkg::iterateASafeData::AGradient */ A_gradient_t_SDM_GradientAccele *AGradient,
  /* SDMModelPkg::iterateASafeData::ASafeRows_graded */ ASafeRow_T_CalcBrakingCurves_ty *ASafeRows_graded)
{
  /* SDMModelPkg::iterateASafeData */
  static kcg_real acc;
  static kcg_int i;
  /* SDMModelPkg::iterateASafeData::_L5 */
  static A_internal_real_Type_SDM_Types_ _L5;
  
  _L5 = 0.0;
  /* 1 */ for (i = 0; i < 100; i++) {
    acc = _L5;
    /* 1 */
    iterateASafeRow_SDMModelPkg(
      acc,
      (*ASafeRows)[i],
      &(*AGradient)[i],
      &_L5,
      &(*ASafeRows_graded)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** iterateASafeData_SDMModelPkg.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

