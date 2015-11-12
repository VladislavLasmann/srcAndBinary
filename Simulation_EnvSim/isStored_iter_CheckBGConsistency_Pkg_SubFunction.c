/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isStored_iter_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::isStored_iter */
void isStored_iter_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::storedBGs */positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::bgHeader */BG_Header_T_BG_Types_Pkg *bgHeader,
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::index */kcg_int *index,
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::isStored */kcg_bool *isStored)
{
  static BG_Header_T_BG_Types_Pkg tmp2;
  static kcg_bool tmp1;
  static kcg_int i;
  static positionedBG_T_TrainPosition_Types_Pck tmp;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L9 */
  static BG_Header_T_BG_Types_Pkg _L9;
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::_L11 */
  static kcg_int _L11;
  
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L9, bgHeader);
  for (i = 0; i < 41; i++) {
    kcg_copy_BG_Header_T_BG_Types_Pkg(&tmp2, &_L9);
    /* 1 */
    isStored_CheckBGConsistency_Pkg_SubFunction(
      &tmp2,
      &(*storedBGs)[i],
      &tmp1,
      &_L9);
    _L11 = i + 1;
    if (!tmp1) {
      break;
    }
  }
  *index = _L11 - 1;
  if ((0 <= *index) & (*index < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      &(*storedBGs)[*index]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &tmp,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoStoredBG_CheckBGConsistency_Pkg);
  }
  *isStored = tmp.valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** isStored_iter_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

