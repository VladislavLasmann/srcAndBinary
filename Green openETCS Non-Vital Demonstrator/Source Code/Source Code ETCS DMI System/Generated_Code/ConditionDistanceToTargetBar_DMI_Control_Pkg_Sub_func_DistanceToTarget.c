/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

/* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar */
kcg_bool ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::DMI_dynamic */DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic)
{
  /* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar::Condition */ kcg_bool Condition;
  
  Condition = (M_MODE_Reversing == (*DMI_dynamic).mode) |
    ((M_MODE_Full_Supervision == (*DMI_dynamic).mode) &
      ((*DMI_dynamic).sup_status != CSM_DMI_Types_Pkg));
  return Condition;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget.c
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

