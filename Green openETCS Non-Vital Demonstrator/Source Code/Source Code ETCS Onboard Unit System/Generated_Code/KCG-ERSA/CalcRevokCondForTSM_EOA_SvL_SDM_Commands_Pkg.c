/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL */
void CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::trainLocations */trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::floiIsSB1 */kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::revokationConds */TSM_revokeCond_T_SDM_Commands_Pkg *revokationConds)
{
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::FLOI_eq_SBI2 */
  static kcg_bool FLOI_eq_SBI2;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L31 */
  static kcg_bool _L31;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL::_L9 */
  static kcg_bool _L9;
  
  (*revokationConds).r0 = (*speeds).OdoStandStill;
  FLOI_eq_SBI2 = !floiIsSB1;
  _L31 = (*speeds).V_est <= (*speeds).V_release;
  (*revokationConds).r1 = _L31;
  _L9 = !_L31 & ((*speeds).V_est <= (*speeds).V_MRSP);
  (*revokationConds).r2 = _L9 & ((FLOI_eq_SBI2 &
        ((*trainLocations).maxSafeFrontEndPostion <=
          (*locations).d_I_of_V_est)) | (((*locations).d_I_of_V_est >=
          (*trainLocations).estimatedFrontEndPosition) & floiIsSB1));
  (*revokationConds).r3 = _L9 & ((floiIsSB1 &
        ((*trainLocations).estimatedFrontEndPosition <=
          (*locations).d_P_of_V_est)) | (((*locations).d_P_of_V_est >=
          (*trainLocations).maxSafeFrontEndPostion) & FLOI_eq_SBI2));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

