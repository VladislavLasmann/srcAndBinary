/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_DOUBTOVER_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_DOUBTOVER */
L_DOUBTOVER op_DOUBTOVER_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos)
{
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::_L11 */
  static kcg_int _L11;
  /* ProvidePositionReport_Pkg::op_DOUBTOVER::l_doubtover */
  static L_DOUBTOVER l_doubtover;
  
  _L11 = (*trainPos).estimatedFrontEndPosition -
    (*trainPos).minSafeFrontEndPosition;
  /* 2 */ if (0 <= _L11) {
    l_doubtover = _L11;
  }
  else {
    l_doubtover = - _L11;
  }
  return l_doubtover;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** op_DOUBTOVER_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

