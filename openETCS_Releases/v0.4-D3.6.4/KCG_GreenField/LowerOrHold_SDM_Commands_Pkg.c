/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LowerOrHold_SDM_Commands_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void LowerOrHold_init_SDM_Commands_P(outC_LowerOrHold_SDM_Commands_P *outC)
{
  outC->init = kcg_true;
  outC->rem_mrdt.targetType = EoA_TargetManagement_types;
  outC->rem_mrdt.distance = 0;
  outC->rem_mrdt.speed = 0;
  outC->rem_mrdt.valid = kcg_true;
  outC->vo = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LowerOrHold_reset_SDM_Commands_(outC_LowerOrHold_SDM_Commands_P *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::LowerOrHold */
void LowerOrHold_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::LowerOrHold::vi */ V_odometry_Type_Obu_BasicTypes_ vi,
  /* SDM_Commands_Pkg::LowerOrHold::mrdt */ Target_T_TargetManagement_types *mrdt,
  outC_LowerOrHold_SDM_Commands_P *outC)
{
  /* SDM_Commands_Pkg::LowerOrHold::_L15 */
  static Target_T_TargetManagement_types _L15;
  /* SDM_Commands_Pkg::LowerOrHold::_L30 */
  static V_odometry_Type_Obu_BasicTypes_ _L30;
  
  /* last_init_ck_mrdt */ if (outC->init) {
    outC->init = kcg_false;
    _L15.targetType = EoA_TargetManagement_types;
    _L15.distance = 0;
    _L15.speed = 0;
    _L15.valid = kcg_false;
    _L30 = - 1;
  }
  else {
    _L30 = outC->vo;
    kcg_copy_Target_T_TargetManagem(&_L15, &outC->rem_mrdt);
  }
  /* 1 */ if (((*mrdt).targetType == _L15.targetType) & ((*mrdt).distance ==
      _L15.distance) & ((*mrdt).speed == _L15.speed) & ((*mrdt).valid ==
      _L15.valid) & (_L30 > 0) & (_L30 < vi)) {
    outC->vo = _L30;
  }
  else {
    outC->vo = vi;
  }
  kcg_copy_Target_T_TargetManagem(&outC->rem_mrdt, mrdt);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LowerOrHold_SDM_Commands_Pkg.c
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

