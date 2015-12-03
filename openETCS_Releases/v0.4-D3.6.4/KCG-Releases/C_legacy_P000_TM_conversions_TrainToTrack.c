/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_legacy_P000_TM_conversions_TrainToTrack.h"

/* TM_conversions_TrainToTrack::C_legacy_P000 */
void C_legacy_P000_TM_conversions_TrainToTrack(
  /* TM_conversions_TrainToTrack::C_legacy_P000::legacy_in */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *legacy_in,
  /* TM_conversions_TrainToTrack::C_legacy_P000::p */ P000_TM_TrainToTrack *p)
{
  (*p).valid = (*legacy_in).valid;
  (*p).nid_packet = (*legacy_in).packet0.NID_PACKET;
  (*p).l_packet = (*legacy_in).packet0.L_PACKET;
  (*p).q_scale = (*legacy_in).packet0.qscale;
  (*p).nid_lrbg = (*legacy_in).packet0.NID_LRBG;
  (*p).d_lrbg = (*legacy_in).packet0.D_LRBG;
  (*p).q_dirlrbg = (*legacy_in).packet0.dirlrbg;
  (*p).q_dlrbg = (*legacy_in).packet0.dlrbg;
  (*p).l_doubtover = (*legacy_in).packet0.L_DOUBTOVER;
  (*p).l_doubtunder = (*legacy_in).packet0.L_DOUBTUNDER;
  (*p).q_length = (*legacy_in).packet0.length;
  (*p).l_trainint = (*legacy_in).packet0.L_TRAININT;
  (*p).v_train = (*legacy_in).packet0.V_TRAIN;
  (*p).q_dirtrain = (*legacy_in).packet0.dirtrain;
  (*p).m_mode = (*legacy_in).packet0.mode;
  (*p).m_level = (*legacy_in).packet0.level;
  (*p).nid_ntc = (*legacy_in).packet0.NID_NTC;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_legacy_P000_TM_conversions_TrainToTrack.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

