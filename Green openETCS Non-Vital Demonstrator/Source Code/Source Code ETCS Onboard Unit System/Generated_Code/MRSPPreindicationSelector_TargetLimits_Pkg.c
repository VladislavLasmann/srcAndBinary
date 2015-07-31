/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSPPreindicationSelector_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::MRSPPreindicationSelector */
void MRSPPreindicationSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::MRSPPreindicationSelector::MRSP */MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::SBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::MRT */Target_real_T_TargetManagement_types *MRT,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_preindication */L_internal_real_Type_SDM_Types_Pkg *D_preindication,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::valid */kcg_bool *valid)
{
  static struct__78748 tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L1 */
  static MRSP_internal_section_T_TargetManagement_types _L1;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L69 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L69;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L75 */
  static T_trac_t_TargetLimits_Pkg _L75;
  
  _L1.Loc_Abs = 0.0;
  _L1.MRS = 0.0;
  _L1.valid = kcg_false;
  tmp = EoA_TargetManagement_types == (*MRT).targetType;
  if (tmp) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L69, SBDcurve);
    kcg_copy_T_trac_t_TargetLimits_Pkg(&_L75, T);
    _L75.berem = 0.0;
    _L75.Traction = 0.0;
    _L75.bs2 = (*T).bs1;
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L69, EBDcurve);
    kcg_copy_T_trac_t_TargetLimits_Pkg(&_L75, T);
  }
  for (i = 0; i < 200; i++) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&tmp1, &_L1);
    /* 1 */
    MRSPPreindicationIterator_TargetLimits_Pkg(
      i,
      &tmp1,
      &(*MRSP)[i],
      &_L69,
      guiCurveEnabled,
      GUIcurve,
      &_L75,
      &tmp,
      &_L1);
    if (!tmp) {
      break;
    }
  }
  *valid = _L1.valid;
  *D_preindication = _L1.Loc_Abs;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSPPreindicationSelector_TargetLimits_Pkg.c
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */

