/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDMLimitLocations_TargetLimits_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void SDMLimitLocations_init_TargetLimits_Pkg(
  outC_SDMLimitLocations_TargetLimits_Pkg *outC)
{
  outC->FLOIisSBI1 = kcg_true;
  outC->MostRestrictiveDisplayedTarget.targetType = EoA_TargetManagement_types;
  outC->MostRestrictiveDisplayedTarget.distance = 0;
  outC->MostRestrictiveDisplayedTarget.speed = 0;
  outC->MostRestrictiveDisplayedTarget.valid = kcg_true;
  outC->locations.SBD_preindication_location = 0;
  outC->locations.EBD_preindication_location = 0;
  outC->locations.EBD_RSM_start_location = 0;
  outC->locations.SBD_RSM_start_location = 0;
  outC->locations.d_I_of_V_est = 0;
  outC->locations.d_I_of_V_MRSP = 0;
  outC->locations.d_P_of_V_est = 0;
  outC->locations.d_W_of_V_est = 0;
  outC->locations.d_FLOI_of_V_est = 0;
  outC->locations.d_EBI_of_V_est = 0;
  outC->locations.FLOI_of_V_est = 0;
  outC->locations.SBI1_of_V_est = 0;
  outC->locations.SBI2_of_V_est = 0;
  outC->locations.d_target = 0;
  outC->locations.d_eoa = 0;
  outC->locations.d_svl = 0;
  outC->locations.Preindication_EBD_location_valid = kcg_true;
  outC->locations.Preindication_SBD_location_valid = kcg_true;
  outC->locations.RSM_start_location_EBD_valid = kcg_true;
  outC->locations.RSM_start_location_SBD_valid = kcg_true;
  outC->speeds.V_est = 0;
  outC->speeds.V_MRSP = 0;
  outC->speeds.V_release = 0;
  outC->speeds.V_target = 0;
  outC->speeds.v_p_mrdt = 0;
  outC->speeds.v_p_dmi = 0;
  outC->speeds.v_sbi_mrdt = 0;
  outC->speeds.v_FLOI_dmi = 0;
  outC->speeds.dV_warning_V_MRSP = 0;
  outC->speeds.dV_warning_V_target = 0;
  outC->speeds.dV_sbi_V_MRSP = 0;
  outC->speeds.dV_sbi_V_target = 0;
  outC->speeds.dV_ebi_V_MRSP = 0;
  outC->speeds.dV_ebi_V_target = 0;
  outC->speeds.OdoStandStill = kcg_true;
  /* 3 */ LowerOrHold_init_TargetLimits_Pkg(&outC->Context_3);
  /* 2 */ LowerOrHold_init_TargetLimits_Pkg(&outC->Context_2);
  /* 1 */ LowerOrHold_init_TargetLimits_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SDMLimitLocations_reset_TargetLimits_Pkg(
  outC_SDMLimitLocations_TargetLimits_Pkg *outC)
{
  /* 3 */ LowerOrHold_reset_TargetLimits_Pkg(&outC->Context_3);
  /* 2 */ LowerOrHold_reset_TargetLimits_Pkg(&outC->Context_2);
  /* 1 */ LowerOrHold_reset_TargetLimits_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TargetLimits_Pkg::SDMLimitLocations */
void SDMLimitLocations_TargetLimits_Pkg(
  /* TargetLimits_Pkg::SDMLimitLocations::MRSP_Profile */ MRSP_internal_T_TargetManagement_types *MRSP_Profile,
  /* TargetLimits_Pkg::SDMLimitLocations::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::SDMLimitLocations::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::SDMLimitLocations::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::curveCollection */ CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::MA */ MA_section_real_T_TargetManagement_types *MA,
  /* TargetLimits_Pkg::SDMLimitLocations::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::SDMLimitLocations::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TargetLimits_Pkg::SDMLimitLocations::trainData_int */ trainData_internal_t_SDM_Types_Pkg *trainData_int,
  outC_SDMLimitLocations_TargetLimits_Pkg *outC)
{
  /* TargetLimits_Pkg::SDMLimitLocations::V_est */ V_internal_real_Type_SDM_Types_Pkg V_est;
  /* TargetLimits_Pkg::SDMLimitLocations::bec */ bec_t_TargetLimits_Pkg bec;
  /* TargetLimits_Pkg::SDMLimitLocations::V_target */ V_internal_real_Type_SDM_Types_Pkg V_target;
  /* TargetLimits_Pkg::SDMLimitLocations::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types SBDcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types EBDcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::T */ T_trac_t_TargetLimits_Pkg T;
  /* TargetLimits_Pkg::SDMLimitLocations::V_release */ V_internal_real_Type_SDM_Types_Pkg V_release;
  /* TargetLimits_Pkg::SDMLimitLocations::D_EOA */ L_internal_real_Type_SDM_Types_Pkg D_EOA;
  /* TargetLimits_Pkg::SDMLimitLocations::D_SvL */ L_internal_real_Type_SDM_Types_Pkg D_SvL;
  /* TargetLimits_Pkg::SDMLimitLocations::D_est */ L_internal_real_Type_SDM_Types_Pkg D_est;
  /* TargetLimits_Pkg::SDMLimitLocations::D_maxsafefront */ L_internal_real_Type_SDM_Types_Pkg D_maxsafefront;
  /* TargetLimits_Pkg::SDMLimitLocations::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types GUIcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::valid_RSM1_start */ kcg_bool valid_RSM1_start;
  /* TargetLimits_Pkg::SDMLimitLocations::D_SBI2 */ L_internal_real_Type_SDM_Types_Pkg D_SBI2;
  /* TargetLimits_Pkg::SDMLimitLocations::V_MRSP */ V_odometry_Type_Obu_BasicTypes_Pkg V_MRSP;
  /* TargetLimits_Pkg::SDMLimitLocations::V_SBI_MRDT */ V_odometry_Type_Obu_BasicTypes_Pkg V_SBI_MRDT;
  /* TargetLimits_Pkg::SDMLimitLocations::freshMRDT */ kcg_bool freshMRDT;
  /* TargetLimits_Pkg::SDMLimitLocations::isEoAorSvL */ kcg_bool isEoAorSvL;
  /* TargetLimits_Pkg::SDMLimitLocations::_L24 */ L_internal_real_Type_SDM_Types_Pkg _L24;
  /* TargetLimits_Pkg::SDMLimitLocations::_L23 */ L_internal_real_Type_SDM_Types_Pkg _L23;
  /* TargetLimits_Pkg::SDMLimitLocations::_L22 */ L_internal_real_Type_SDM_Types_Pkg _L22;
  /* TargetLimits_Pkg::SDMLimitLocations::_L21 */ L_internal_real_Type_SDM_Types_Pkg _L21;
  /* TargetLimits_Pkg::SDMLimitLocations::_L25 */ V_internal_real_Type_SDM_Types_Pkg _L25;
  /* TargetLimits_Pkg::SDMLimitLocations::_L87 */ L_internal_real_Type_SDM_Types_Pkg _L87;
  /* TargetLimits_Pkg::SDMLimitLocations::_L86 */ L_internal_real_Type_SDM_Types_Pkg _L86;
  /* TargetLimits_Pkg::SDMLimitLocations::_L641 */ kcg_bool _L641;
  /* TargetLimits_Pkg::SDMLimitLocations::_L909 */ V_odometry_Type_Obu_BasicTypes_Pkg _L909;
  /* TargetLimits_Pkg::SDMLimitLocations::_L934 */ V_odometry_Type_Obu_BasicTypes_Pkg _L934;
  /* TargetLimits_Pkg::SDMLimitLocations::_L931 */ kcg_int _L931;
  /* TargetLimits_Pkg::SDMLimitLocations::_L927 */ V_odometry_Type_Obu_BasicTypes_Pkg _L927;
  /* TargetLimits_Pkg::SDMLimitLocations::_L982 */ V_odometry_Type_Obu_BasicTypes_Pkg _L982;
  /* TargetLimits_Pkg::SDMLimitLocations::_L992 */ kcg_bool _L992;
  /* TargetLimits_Pkg::SDMLimitLocations::_L344 */ L_internal_real_Type_SDM_Types_Pkg _L344;
  /* TargetLimits_Pkg::SDMLimitLocations::_L343 */ kcg_bool _L343;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1031 */ V_odometry_Type_Obu_BasicTypes_Pkg _L1031;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1050 */ L_internal_real_Type_SDM_Types_Pkg _L1050;
  
  outC->speeds.OdoStandStill = (*odometry).motionState ==
    noMotion_Obu_BasicTypes_Pkg;
  /* 5 */
  TargetSelector_TargetLimits_Pkg(
    targetCollection,
    curveCollection,
    odometry,
    trainData_int,
    T_b,
    NationalValues,
    trainLocations,
    &outC->MostRestrictiveDisplayedTarget,
    &EBDcurve,
    &SBDcurve,
    &GUIcurve,
    &_L343,
    &V_target,
    &_L982,
    &D_EOA,
    &D_SvL,
    &V_est,
    &T,
    &_L25,
    &bec,
    &D_SBI2,
    &_L641,
    &D_est,
    &D_maxsafefront,
    &freshMRDT);
  _L992 = EoA_TargetManagement_types ==
    outC->MostRestrictiveDisplayedTarget.targetType;
  /* 1 */
  MRSPPreindicationSelector_TargetLimits_Pkg(
    MRSP_Profile,
    &EBDcurve,
    &SBDcurve,
    &GUIcurve,
    _L343,
    _L992,
    &T,
    &_L86,
    &_L1050,
    &isEoAorSvL);
  outC->locations.SBD_preindication_location = /* 1 */
    TransformL_realToL_int_SDM_Types_Pkg(_L86);
  outC->locations.EBD_preindication_location =
    outC->locations.SBD_preindication_location;
  /* 1 */
  v_release_TargetLimits_Pkg(
    &EBDcurve,
    V_target,
    D_EOA,
    MA,
    _L25,
    trainLocations,
    trainData_int,
    &T,
    &V_release,
    &valid_RSM1_start);
  /* 1 */
  d_RSM_start_TargetLimits_Pkg(
    V_release,
    &EBDcurve,
    &SBDcurve,
    D_maxsafefront,
    D_est,
    &T,
    &_L21,
    &_L87,
    &_L86,
    &outC->locations.RSM_start_location_EBD_valid,
    &valid_RSM1_start);
  outC->locations.RSM_start_location_SBD_valid = valid_RSM1_start;
  /* 2 */
  d_limits_TargetLimits_Pkg(
    V_est,
    &SBDcurve,
    _L641,
    D_SBI2,
    D_est,
    D_maxsafefront,
    &T,
    &GUIcurve,
    _L343,
    &_L24,
    &_L23,
    &_L22,
    &_L21,
    &outC->FLOIisSBI1);
  outC->locations.Preindication_EBD_location_valid = isEoAorSvL &
    !outC->FLOIisSBI1;
  outC->locations.Preindication_SBD_location_valid = outC->FLOIisSBI1 &
    isEoAorSvL;
  /* 1 */
  v_SBI1_TargetLimits_Pkg(
    &SBDcurve,
    V_est,
    D_est,
    D_EOA,
    0.0,
    kcg_false,
    &GUIcurve,
    &T,
    &valid_RSM1_start,
    &_L25);
  /* 1 */
  LowerOrHold_TargetLimits_Pkg(
    /* 19 */ TransformV_realToV_odo_SDM_Types_Pkg(_L25),
    (kcg_bool) !freshMRDT,
    &outC->Context_1);
  outC->locations.SBI1_of_V_est = outC->Context_1.vo;
  /* 1 */
  v_SBI2_TargetLimits_Pkg(
    &EBDcurve,
    V_est,
    V_target,
    &bec,
    D_maxsafefront,
    0.0,
    kcg_false,
    &GUIcurve,
    &T,
    &_L641,
    &_L25);
  /* 2 */
  LowerOrHold_TargetLimits_Pkg(
    /* 20 */ TransformV_realToV_odo_SDM_Types_Pkg(_L25),
    (kcg_bool) !freshMRDT,
    &outC->Context_2);
  outC->locations.SBI2_of_V_est = outC->Context_2.vo;
  /* 1 */ if (outC->FLOIisSBI1) {
    V_SBI_MRDT = outC->Context_1.vo;
  }
  else {
    V_SBI_MRDT = outC->Context_2.vo;
  }
  outC->speeds.v_sbi_mrdt = V_SBI_MRDT;
  outC->locations.FLOI_of_V_est = V_SBI_MRDT;
  /* 1 */ d_P_target_TargetLimits_Pkg(&EBDcurve, V_target, &T, &_L343, &_L344);
  isEoAorSvL = _L992 | (outC->MostRestrictiveDisplayedTarget.targetType ==
      SvL_TargetManagement_types);
  outC->locations.EBD_RSM_start_location = /* 3 */
    TransformL_realToL_int_SDM_Types_Pkg(_L87);
  outC->locations.SBD_RSM_start_location = /* 10 */
    TransformL_realToL_int_SDM_Types_Pkg(_L86);
  outC->locations.d_I_of_V_est = /* 4 */
    TransformL_realToL_int_SDM_Types_Pkg(_L24);
  outC->locations.d_I_of_V_MRSP = /* 11 */
    TransformL_realToL_int_SDM_Types_Pkg(_L1050);
  outC->locations.d_P_of_V_est = /* 5 */
    TransformL_realToL_int_SDM_Types_Pkg(_L23);
  outC->locations.d_W_of_V_est = /* 12 */
    TransformL_realToL_int_SDM_Types_Pkg(_L22);
  outC->locations.d_FLOI_of_V_est = /* 6 */
    TransformL_realToL_int_SDM_Types_Pkg(_L21);
  outC->locations.d_EBI_of_V_est = /* 13 */
    TransformL_realToL_int_SDM_Types_Pkg(D_SBI2 + V_est * T.bs2);
  outC->locations.d_target = /* 15 */
    TransformL_realToL_int_SDM_Types_Pkg(
      /* 1 */
      TargetDistance_TargetLimits_Pkg(
        _L344,
        D_maxsafefront,
        D_est,
        D_SvL,
        D_EOA,
        isEoAorSvL));
  outC->locations.d_eoa = /* 9 */ TransformL_realToL_int_SDM_Types_Pkg(D_EOA);
  outC->locations.d_svl = /* 16 */ TransformL_realToL_int_SDM_Types_Pkg(D_SvL);
  V_MRSP = /* 21 */
    TransformV_realToV_odo_SDM_Types_Pkg(
      /* 1 */ getMRSFromMRSP_SDM_Types_Pkg(MRSP_Profile, D_maxsafefront));
  outC->speeds.V_MRSP = V_MRSP;
  _L934 = /* 13 */ TransformV_realToV_odo_SDM_Types_Pkg(V_release);
  outC->speeds.V_release = _L934;
  _L1031 = /* 15 */ TransformV_realToV_odo_SDM_Types_Pkg(V_target);
  outC->speeds.V_target = _L1031;
  /* 3 */
  LowerOrHold_TargetLimits_Pkg(_L982, (kcg_bool) !freshMRDT, &outC->Context_3);
  outC->speeds.v_p_mrdt = outC->Context_3.vo;
  /* 2 */ if (_L1031 >= outC->Context_3.vo) {
    _L982 = _L1031;
  }
  else {
    _L982 = outC->Context_3.vo;
  }
  _L909 = /* 1 */ dV_sbi_for_V_SDM_Types_Pkg(_L1031);
  outC->speeds.dV_sbi_V_target = _L909;
  /* 2 */ if (isEoAorSvL) {
    _L927 = _L934;
  }
  else {
    _L927 = _L1031 + _L909;
  }
  /* 2 */ if (_L927 >= V_SBI_MRDT) {
    _L934 = _L927;
  }
  else {
    _L934 = V_SBI_MRDT;
  }
  _L909 = /* 2 */ dV_sbi_for_V_SDM_Types_Pkg(V_MRSP);
  outC->speeds.dV_sbi_V_MRSP = _L909;
  _L931 = V_MRSP + _L909;
  outC->speeds.V_est = /* 1 */ TransformV_realToV_odo_SDM_Types_Pkg(V_est);
  /* 1 */ if (_L982 <= V_MRSP) {
    outC->speeds.v_p_dmi = _L982;
  }
  else {
    outC->speeds.v_p_dmi = V_MRSP;
  }
  /* 1 */ if (_L934 <= _L931) {
    outC->speeds.v_FLOI_dmi = _L934;
  }
  else {
    outC->speeds.v_FLOI_dmi = _L931;
  }
  outC->speeds.dV_warning_V_MRSP = /* 2 */
    dV_warning_for_V_SDM_Types_Pkg(V_MRSP);
  outC->speeds.dV_warning_V_target = /* 1 */
    dV_warning_for_V_SDM_Types_Pkg(_L1031);
  outC->speeds.dV_ebi_V_MRSP = /* 2 */ dV_ebi_for_V_SDM_Types_Pkg(V_MRSP);
  outC->speeds.dV_ebi_V_target = /* 1 */ dV_ebi_for_V_SDM_Types_Pkg(_L1031);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SDMLimitLocations_TargetLimits_Pkg.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

