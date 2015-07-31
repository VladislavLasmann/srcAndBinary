/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isLEValid_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::isLEValid */
kcg_bool isLEValid_TargetLimits_Pkg(
  /* TargetLimits_Pkg::isLEValid::valid1 */kcg_bool valid1,
  /* TargetLimits_Pkg::isLEValid::i1 */kcg_real i1,
  /* TargetLimits_Pkg::isLEValid::valid2 */kcg_bool valid2,
  /* TargetLimits_Pkg::isLEValid::i2 */kcg_real i2)
{
  /* TargetLimits_Pkg::isLEValid::result */
  static kcg_bool result;
  
  result = valid1 & ((i1 <= i2) | !valid2);
  return result;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** isLEValid_TargetLimits_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
