/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/DMI_Control/KCG-Release\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

/* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget */
kcg_real CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::DistanceToTarget */kcg_real DistanceToTarget)
{
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget::InterpolatedDistanceToTarget */
  static kcg_real InterpolatedDistanceToTarget;
  
  IfBlock1_clock = DistanceToTarget < 0.0;
  if (IfBlock1_clock) {
    InterpolatedDistanceToTarget = - 89.5;
  }
  else {
    _1_else_clock_IfBlock1 = DistanceToTarget < 100.0;
    if (_1_else_clock_IfBlock1) {
      InterpolatedDistanceToTarget = - 89.5 + DistanceToTarget * 0.33;
    }
    else {
      else_clock_IfBlock1 = DistanceToTarget > 1000.0;
      if (else_clock_IfBlock1) {
        InterpolatedDistanceToTarget = 96.5;
      }
      else {
        InterpolatedDistanceToTarget = Px100To1001_DMI_Control_Pkg * (/* 1 */
            LogR_mathext(DistanceToTarget) - 2.0) + Y100I1_DMI_Control_Pkg;
      }
    }
  }
  return InterpolatedDistanceToTarget;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget.c
** Generation date: 2015-07-31T17:27:04
*************************************************************$ */

