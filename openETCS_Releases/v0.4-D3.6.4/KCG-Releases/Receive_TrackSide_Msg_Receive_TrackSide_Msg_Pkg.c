/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Receive_TrackSide_Msg_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  outC->outTrackMessage_for_check.valid = kcg_true;
  outC->outTrackMessage_for_check.systemTime = 0;
  outC->outTrackMessage_for_check.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.present = kcg_true;
  for (i1 = 0; i1 < 8; i1++) {
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].valid =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].checkResult =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].telegramheader.m_mcount =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].telegramheader.nid_c =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].telegramheader.nid_bg =
      0;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (i = 0; i < 30; i++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].packets.PacketHeaders[i].nid_packet =
        0;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].packets.PacketHeaders[i].q_dir =
        Q_DIR_Reverse;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].packets.PacketHeaders[i].valid =
        kcg_true;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].packets.PacketHeaders[i].startAddress =
        0;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].packets.PacketHeaders[i].endAddress =
        0;
    }
    for (i = 0; i < 500; i++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[i1].packets.PacketData[i] =
        0;
    }
  }
  outC->outTrackMessage_for_check.telegramHeaders.numberBalises = 0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outTrackMessage_for_check.radio_Msg.present = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.consistencyError = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.header.radioDevice = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.receivedSystemTime = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.nid_message = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.t_train = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outTrackMessage_for_check.radio_Msg.header.nid_lrbg = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.t_train_reference = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.nid_em = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->outTrackMessage_for_check.radio_Msg.header.d_sr = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.t_sh_rqst = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.d_ref = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->outTrackMessage_for_check.radio_Msg.header.d_emergencystop = 0;
  outC->outTrackMessage_for_check.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.t_train_reference =
    kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.d_emergencystop =
    kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.m_version = kcg_true;
  for (i1 = 0; i1 < 30; i1++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i1].nid_packet =
      0;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i1].q_dir =
      Q_DIR_Reverse;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i1].valid =
      kcg_true;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i1].startAddress =
      0;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[i1].endAddress =
      0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketData[i1] = 0;
  }
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.valid = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.nid_c = 0;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.rbc_id = 0;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.device_id = 0;
  /* 1 */
  Receive_BaliseTelegram_init_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */
  Receive_BaliseTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg */
void Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::API_TrackSide_Msg */ API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC)
{
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::isRadioMsg */
  static kcg_bool isRadioMsg;
  
  isRadioMsg = (*API_TrackSide_Msg).valid & ((*API_TrackSide_Msg).msg_type ==
      msrc_Euroradio_Common_Types_Pkg) & (*API_TrackSide_Msg).rtm_msg.present &
    !reset;
  /* ck_isRadioMsg */ if (isRadioMsg) {
    /* 1 */
    Receive_RadioMsg_Receive_TrackSide_Msg_Pkg(
      API_TrackSide_Msg,
      &outC->outTrackMessage_for_check);
  }
  else {
    /* 1 */
    Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
      reset,
      inActualOdometry,
      API_TrackSide_Msg,
      &outC->Context_1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->outTrackMessage_for_check,
      &outC->Context_1.outTrackMessage_for_check);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

