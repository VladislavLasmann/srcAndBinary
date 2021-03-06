/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:00
*************************************************************$ */
#ifndef _SDMLimitLocations_TargetLimits_Pkg_H_
#define _SDMLimitLocations_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "dV_ebi_for_V_SDM_Types_Pkg.h"
#include "TransformV_realToV_odo_SDM_Types_Pkg.h"
#include "TransformL_realToL_int_SDM_Types_Pkg.h"
#include "dV_warning_for_V_SDM_Types_Pkg.h"
#include "dV_sbi_for_V_SDM_Types_Pkg.h"
#include "getMRSFromMRSP_SDM_Types_Pkg.h"
#include "d_limits_TargetLimits_Pkg.h"
#include "v_SBI1_TargetLimits_Pkg.h"
#include "v_SBI2_TargetLimits_Pkg.h"
#include "d_RSM_start_TargetLimits_Pkg.h"
#include "MRSPPreindicationSelector_TargetLimits_Pkg.h"
#include "v_release_TargetLimits_Pkg.h"
#include "TargetSelector_TargetLimits_Pkg.h"
#include "TargetDistance_TargetLimits_Pkg.h"
#include "d_P_target_TargetLimits_Pkg.h"
#include "LowerOrHold_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Speeds_T_SDM_Types_Pkg /* TargetLimits_Pkg::SDMLimitLocations::speeds */ speeds;
  SDM_Locations_T_SDM_Types_Pkg /* TargetLimits_Pkg::SDMLimitLocations::locations */ locations;
  Target_T_TargetManagement_types /* TargetLimits_Pkg::SDMLimitLocations::MostRestrictiveDisplayedTarget */ MostRestrictiveDisplayedTarget;
  kcg_bool /* TargetLimits_Pkg::SDMLimitLocations::FLOIisSBI1 */ FLOIisSBI1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LowerOrHold_TargetLimits_Pkg /* 3 */ Context_3;
  outC_LowerOrHold_TargetLimits_Pkg /* 2 */ Context_2;
  outC_LowerOrHold_TargetLimits_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_SDMLimitLocations_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::SDMLimitLocations */
extern void SDMLimitLocations_TargetLimits_Pkg(
  /* TargetLimits_Pkg::SDMLimitLocations::MRSP_Profile */ MRSP_internal_T_TargetManagement_types *MRSP_Profile,
  /* TargetLimits_Pkg::SDMLimitLocations::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::SDMLimitLocations::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::SDMLimitLocations::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::curveCollection */ CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::MA */ MA_section_real_T_TargetManagement_types *MA,
  /* TargetLimits_Pkg::SDMLimitLocations::T_b */ t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::SDMLimitLocations::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TargetLimits_Pkg::SDMLimitLocations::trainData_int */ trainData_internal_t_SDM_Types_Pkg *trainData_int,
  outC_SDMLimitLocations_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SDMLimitLocations_reset_TargetLimits_Pkg(
  outC_SDMLimitLocations_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SDMLimitLocations_init_TargetLimits_Pkg(
  outC_SDMLimitLocations_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _SDMLimitLocations_TargetLimits_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** SDMLimitLocations_TargetLimits_Pkg.h
** Generation date: 2015-12-10T15:16:00
*************************************************************$ */

