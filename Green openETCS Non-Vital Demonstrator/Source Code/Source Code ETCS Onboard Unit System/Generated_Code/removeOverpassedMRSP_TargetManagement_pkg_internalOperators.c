/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "removeOverpassedMRSP_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::removeOverpassedMRSP */
void removeOverpassedMRSP_TargetManagement_pkg_internalOperators(
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::Targets */ Target_list_MRSP_real_T_TargetManagement_types *Targets,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::d_max_safe_front */ L_internal_real_Type_SDM_Types_Pkg d_max_safe_front,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::TargetsOut */ Target_list_MRSP_real_T_TargetManagement_types *TargetsOut,
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::updated */ kcg_bool *updated)
{
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP */
  static Target_list_MRSP_real_T_TargetManagement_types acc;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* TargetManagement_pkg::internalOperators::removeOverpassedMRSP::_L6 */
  static kcg_int _L6;
  
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(TargetsOut, Targets);
  if (((*Targets)[0].targetType == MRSP_TargetManagement_types) &
    ((*Targets)[0].distance <= d_max_safe_front)) {
    for (i = 0; i < 200; i++) {
      kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(&acc, TargetsOut);
      /* 1 */
      removeOverpassedMRSPint_TargetManagement_pkg_internalOperators(
        &acc,
        d_max_safe_front,
        &cond_iterw,
        TargetsOut);
      _L6 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L6 = 0;
  }
  *updated = _L6 > 1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** removeOverpassedMRSP_TargetManagement_pkg_internalOperators.c
** Generation date: 2015-10-18T22:42:12
*************************************************************$ */

