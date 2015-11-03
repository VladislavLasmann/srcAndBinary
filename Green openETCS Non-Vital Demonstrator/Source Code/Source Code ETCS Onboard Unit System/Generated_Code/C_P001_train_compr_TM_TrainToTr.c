/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P001_train_compr_TM_TrainToTr.h"

/* TM_TrainToTrack::C_P001_train_compr */
void C_P001_train_compr_TM_TrainToTr(
  /* TM_TrainToTrack::C_P001_train_compr::P001_in */ P001_TM_TrainToTrack *P001_in,
  /* TM_TrainToTrack::C_P001_train_compr::P001_int */ P001_TrainTrack_int_TM_TrainToT *P001_int)
{
  (*P001_int)[0] = /* 1 */
    Encode_NID_PACKET_TM_TrainToTra(
      (*P001_in).valid,
      /* 1 */ CAST_NID_PACKET_to_int_TM_conve((*P001_in).nid_packet));
  (*P001_int)[1] = /* 1 */ CAST_L_PACKET_to_int_TM_convers((*P001_in).l_packet);
  (*P001_int)[2] = /* 1 */ CAST_Q_SCALE_to_int_TM_conversi((*P001_in).q_scale);
  (*P001_int)[3] = /* 1 */ CAST_NID_LRBG_to_int_TM_convers((*P001_in).nid_lrbg);
  (*P001_int)[4] = /* 1 */
    CAST_NID_PRVLRBG_to_int_TM_conv((*P001_in).nid_prvlrbg);
  (*P001_int)[5] = /* 1 */ CAST_D_LRBG_to_int_TM_conversio((*P001_in).d_lrbg);
  (*P001_int)[6] = /* 1 */
    CAST_Q_DIRLRBG_to_int_TM_conver((*P001_in).q_dirlrbg);
  (*P001_int)[7] = /* 1 */ CAST_Q_DRLRBG_to_int_TM_convers((*P001_in).q_dlrbg);
  (*P001_int)[8] = /* 1 */
    CAST_L_DOUBTOVER_to_int_TM_conv((*P001_in).l_doubtover);
  (*P001_int)[9] = /* 1 */
    CAST_L_DOUBTUNDER_to_int_TM_con((*P001_in).l_doubtunder);
  (*P001_int)[10] = /* 1 */
    CAST_Q_LENGTH_to_int_TM_convers((*P001_in).q_length);
  (*P001_int)[11] = /* 1 */
    CAST_L_TRAININT_to_int_TM_conve((*P001_in).l_trainint);
  (*P001_int)[12] = /* 1 */ CAST_V_TRAIN_to_int_TM_conversi((*P001_in).v_train);
  (*P001_int)[13] = /* 1 */
    CAST_Q_DIRTRAIN_to_int_TM_conve((*P001_in).q_dirtrain);
  (*P001_int)[14] = /* 1 */ CAST_M_MODE_to_int_TM_conversio((*P001_in).m_mode);
  (*P001_int)[15] = /* 1 */ CAST_M_LEVEL_to_int_TM_conversi((*P001_in).m_level);
  (*P001_int)[16] = /* 1 */ CAST_NID_NTC_to_int_TM_conversi((*P001_in).nid_ntc);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P001_train_compr_TM_TrainToTr.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

