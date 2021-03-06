/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVC_InputBuffer_Toolbox_Functio.h"

#ifndef KCG_USER_DEFINED_INIT
void EVC_InputBuffer_init_Toolbox_Fu(outC_EVC_InputBuffer_Toolbox_Fu *outC)
{
  static kcg_int i;
  
  outC->sendRTM = kcg_true;
  outC->init = kcg_true;
  outC->TrackMessageToEVC.valid = kcg_true;
  outC->TrackMessageToEVC.systemTimeMsgReceived = 0;
  outC->TrackMessageToEVC.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->TrackMessageToEVC.btm_msg.present = kcg_true;
  outC->TrackMessageToEVC.btm_msg.checkResult = kcg_true;
  outC->TrackMessageToEVC.btm_msg.api_bad_balise_received = kcg_true;
  outC->TrackMessageToEVC.btm_msg.api_header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->TrackMessageToEVC.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->TrackMessageToEVC.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->TrackMessageToEVC.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->TrackMessageToEVC.btm_msg.api_header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->TrackMessageToEVC.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->TrackMessageToEVC.btm_msg.api_header.m_mcount = 0;
  outC->TrackMessageToEVC.btm_msg.api_header.nid_c = 0;
  outC->TrackMessageToEVC.btm_msg.api_header.nid_bg = 0;
  outC->TrackMessageToEVC.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccura.nominal =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccura.d_min =
    0;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccura.d_max =
    0;
  outC->TrackMessageToEVC.rtm_msg.present = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.apiConsistencyError = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.radioDevice = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.receivedSystemTime = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.nid_message = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.t_train = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_requir;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.nid_lrbg = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.t_train_reference = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.nid_em = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.d_sr = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.t_sh_rqst = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.d_ref = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.d_emergencystop = 0;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_acc;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.sendingRBC_Id.nid_c = 0;
  outC->TrackMessageToEVC.rtm_msg.sendingRBC_Id.rbc_id = 0;
  outC->TrackMessageToEVC.rtm_msg.sendingRBC_Id.device_id = 0;
  for (i = 0; i < 30; i++) {
    outC->TrackMessageToEVC.packets.PacketHeaders[i].nid_packet = 0;
    outC->TrackMessageToEVC.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->TrackMessageToEVC.packets.PacketHeaders[i].valid = kcg_true;
    outC->TrackMessageToEVC.packets.PacketHeaders[i].startAddress = 0;
    outC->TrackMessageToEVC.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i = 0; i < 500; i++) {
    outC->TrackMessageToEVC.packets.PacketData[i] = 0;
  }
  /* 2 */ TRAIN_TrackSideInputFifo_init_T(&outC->Context_2);
  /* 1 */ TRAIN_TrackSideInputFifo_init_T(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EVC_InputBuffer_reset_Toolbox_F(outC_EVC_InputBuffer_Toolbox_Fu *outC)
{
  outC->init = kcg_true;
  /* 2 */ TRAIN_TrackSideInputFifo_reset_(&outC->Context_2);
  /* 1 */ TRAIN_TrackSideInputFifo_reset_(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Functions::EVC_InputBuffer */
void EVC_InputBuffer_Toolbox_Functio(
  /* Toolbox::Functions::EVC_InputBuffer::BTMMessage */ API_TrackSideInput_T_API_Msg_Pk *BTMMessage,
  /* Toolbox::Functions::EVC_InputBuffer::RTMMessage */ API_TrackSideInput_T_API_Msg_Pk *RTMMessage,
  outC_EVC_InputBuffer_Toolbox_Fu *outC)
{
  /* Toolbox::Functions::EVC_InputBuffer */
  static kcg_bool tmp;
  /* Toolbox::Functions::EVC_InputBuffer::_L16 */
  static kcg_bool _L16;
  
  /* last_init_ck_sendRTM */ if (outC->init) {
    outC->init = kcg_false;
    _L16 = kcg_true;
  }
  else {
    _L16 = outC->sendRTM;
  }
  /* 1 */
  TRAIN_TrackSideInputFifo_Toolbo(
    RTMMessage,
    (*RTMMessage).valid,
    _L16,
    &outC->Context_1);
  /* 2 */
  TRAIN_TrackSideInputFifo_Toolbo(
    BTMMessage,
    (*BTMMessage).valid,
    (kcg_bool) !_L16,
    &outC->Context_2);
  /* 4 */ if (_L16) {
    tmp = outC->Context_1.outValid;
  }
  else {
    tmp = outC->Context_2.outValid;
  }
  /* 3 */ if (tmp) {
    /* 2 */ if (_L16) {
      kcg_copy_API_TrackSideInput_T_A(
        &outC->TrackMessageToEVC,
        &outC->Context_1.outData);
    }
    else {
      kcg_copy_API_TrackSideInput_T_A(
        &outC->TrackMessageToEVC,
        &outC->Context_2.outData);
    }
  }
  else {
    kcg_copy_API_TrackSideInput_T_A(
      &outC->TrackMessageToEVC,
      (API_TrackSideInput_T_API_Msg_Pk *) &cEmtpyTrackSideInputMessage_Too);
  }
  /* 6 */ if (outC->Context_2.size == 0) {
    outC->sendRTM = kcg_true;
  }
  else {
    outC->sendRTM = kcg_false;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** EVC_InputBuffer_Toolbox_Functio.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

