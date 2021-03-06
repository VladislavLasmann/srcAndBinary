/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRevokCondForTSM_MRSP_LOA_SD.h"

/* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA */
void CalcRevokCondForTSM_MRSP_LOA_SD(
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::speeds */ Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::trainLocations */ trainPosition_T_TrainPosition_T *trainLocations,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::floiIsSB1 */ kcg_bool floiIsSB1,
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::revokationConds */ TSM_revokeCond_T_SDM_Commands_P *revokationConds)
{
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::FLOI_eq_SBI2 */
  static kcg_bool FLOI_eq_SBI2;
  /* SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA::_L37 */
  static kcg_bool _L37;
  
  (*revokationConds).r0 = (*speeds).OdoStandStill;
  FLOI_eq_SBI2 = (*speeds).V_est <= (*speeds).V_target;
  (*revokationConds).r1 = FLOI_eq_SBI2;
  _L37 = !FLOI_eq_SBI2 & ((*speeds).V_est <= (*speeds).V_MRSP);
  FLOI_eq_SBI2 = !floiIsSB1;
  (*revokationConds).r2 = _L37 & ((FLOI_eq_SBI2 &
        ((*trainLocations).maxSafeFrontEndPostion <=
          (*locations).d_I_of_V_est)) | (((*locations).d_I_of_V_est >=
          (*trainLocations).estimatedFrontEndPosition) & floiIsSB1));
  (*revokationConds).r3 = _L37 & ((floiIsSB1 &
        ((*trainLocations).estimatedFrontEndPosition <=
          (*locations).d_P_of_V_est)) | (((*locations).d_P_of_V_est >=
          (*trainLocations).maxSafeFrontEndPostion) & FLOI_eq_SBI2));
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcRevokCondForTSM_MRSP_LOA_SD.c
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

