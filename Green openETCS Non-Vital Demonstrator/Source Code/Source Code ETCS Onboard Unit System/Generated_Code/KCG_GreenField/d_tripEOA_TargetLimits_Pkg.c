/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "d_tripEOA_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::d_tripEOA */
L_internal_real_Type_SDM_Types_ d_tripEOA_TargetLimits_Pkg(
  /* TargetLimits_Pkg::d_tripEOA::D_EOA */ L_internal_real_Type_SDM_Types_ D_EOA,
  /* TargetLimits_Pkg::d_tripEOA::trainLocations */ TrainLocations_real_T_SDM_Types *trainLocations,
  /* TargetLimits_Pkg::d_tripEOA::trainData_int */ trainData_internal_t_SDM_Types_ *trainData_int)
{
  /* TargetLimits_Pkg::d_tripEOA */
  static kcg_real tmp;
  /* TargetLimits_Pkg::d_tripEOA::_L10 */
  static kcg_real _L10;
  /* TargetLimits_Pkg::d_tripEOA::_L12 */
  static kcg_real _L12;
  /* TargetLimits_Pkg::d_tripEOA::_L29 */
  static kcg_real _L29;
  /* TargetLimits_Pkg::d_tripEOA::D_tripEOA */
  static L_internal_real_Type_SDM_Types_ D_tripEOA;
  
  _L10 = (*trainLocations).d_maxSafeFrontEndPos -
    (*trainLocations).d_minSafeFrontEndPos;
  _L12 = D_EOA - (*trainLocations).d_LRBG;
  /* 2 */ if (0. <= _L12) {
    _L29 = _L12;
  }
  else {
    _L29 = - _L12;
  }
  _L12 = (*trainLocations).d_accLRBG + (*trainLocations).d_accLRBG + 10.0 +
    0.1 * _L29;
  /* 2 */ if (_L10 >= _L12) {
    tmp = _L10;
  }
  else {
    tmp = _L12;
  }
  D_tripEOA = /* 1 */
    TransformL_intToL_real_SDM_Type((*trainData_int).offsetAntennaL1) + tmp +
    _L29;
  return D_tripEOA;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** d_tripEOA_TargetLimits_Pkg.c
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

