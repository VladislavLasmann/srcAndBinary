/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_Dangerpoint_TA_MA.h"

/* TA_MA::Normalize_Dangerpoint */
void Normalize_Dangerpoint_TA_MA(
  /* TA_MA::Normalize_Dangerpoint::d_endsection */ L_internal_Type_Obu_BasicTypes_ d_endsection,
  /* TA_MA::Normalize_Dangerpoint::Packet15_in */ P015_OBU_T_TM *Packet15_in,
  /* TA_MA::Normalize_Dangerpoint::NV_in */ P003V1_OBU_T_TM_baseline2 *NV_in,
  /* TA_MA::Normalize_Dangerpoint::q_dangerpoint */ kcg_bool *q_dangerpoint,
  /* TA_MA::Normalize_Dangerpoint::dangerpoint */ DP_or_OL_t_TrackAtlasTypes *dangerpoint)
{
  /* TA_MA::Normalize_Dangerpoint::_L3 */
  static V_internal_Type_Obu_BasicTypes_ _L3;
  /* TA_MA::Normalize_Dangerpoint::_L4 */
  static kcg_bool _L4;
  
  *q_dangerpoint = /* 1 */
    EVAL_Q_DANGERPOINT_TA_Lib_inter((*Packet15_in).q_dangerpoint);
  /* 1 */
  EVAL_V_Release_TA_Lib_internal(
    (*Packet15_in).v_releasedp,
    (*NV_in).v_nvrel,
    &_L3,
    &_L4);
  /* 1 */ if (*q_dangerpoint) {
    (*dangerpoint).v_release = _L3;
    (*dangerpoint).calc_v_release_onboard = _L4;
    (*dangerpoint).d_DP_or_OL = /* 1 */
      Eval_Q_SCALE_TA_MRSP((*Packet15_in).q_scale, (*Packet15_in).d_dp) +
      d_endsection;
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasT(
      dangerpoint,
      (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_DP_TrackAtlasTypes);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Normalize_Dangerpoint_TA_MA.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

