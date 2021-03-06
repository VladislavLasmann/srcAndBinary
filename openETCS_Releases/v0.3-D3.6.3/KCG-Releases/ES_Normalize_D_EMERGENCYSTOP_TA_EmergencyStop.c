/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP */
L_internal_Type_Obu_BasicTypes_Pkg ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::q_scale */ Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::d_emergencystop */ D_EMERGENCYSTOP d_emergencystop)
{
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::d_emergencystop_normalized */
  static L_internal_Type_Obu_BasicTypes_Pkg d_emergencystop_normalized;
  
  /* ck_q_scale */ switch (q_scale) {
    case Q_SCALE_10_cm_scale :
      d_emergencystop_normalized = d_emergencystop * 10;
      break;
    case Q_SCALE_1_m_scale :
      d_emergencystop_normalized = d_emergencystop * 100;
      break;
    case Q_SCALE_10_m_scale :
      d_emergencystop_normalized = d_emergencystop * 1000;
      break;
    
  }
  return d_emergencystop_normalized;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

