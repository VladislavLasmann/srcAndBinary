/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"

void M045_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
  outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC)
{
}

/* TM_RBC_conversions_legacy::M045_to_Radio_Track_Train_H */
void M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
  /* TM_RBC_conversions_legacy::M045_to_Radio_Track_Train_H::M045_in */M_045_T_TM_radio_messages *M045_in,
  outC_M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy *outC)
{
  kcg_bool noname;
  L_MESSAGE _1_noname;
  Q_ORIENTATION _2_noname;
  
  kcg_copy_M_045_T_TM_radio_messages(&outC->_L1, M045_in);
  outC->_L35 = outC->_L1.q_orientation;
  outC->_L7 = outC->_L1.nid_lrbg;
  outC->_L6 = outC->_L1.m_ack;
  outC->_L5 = outC->_L1.t_train;
  outC->_L4 = outC->_L1.l_message;
  outC->_L3 = outC->_L1.nid_message;
  _2_noname = outC->_L35;
  outC->_L34 = default_q_scale_TM_RBC_conversions_legacy;
  outC->_L33 = default_q_dir_TM_RBC_conversions_legacy;
  outC->_L32 = default_d_ref_TM_RBC_conversions_legacy;
  outC->_L31 = default_m_version_TM_RBC_conversions_legacy;
  outC->_L25 = default_receivedSystemTime_TM_RBC_conversions_legacy;
  outC->_L24 = default_radioDevice_TM_RBC_conversions_legacy;
  outC->_L22 = default_d_emergencystop_TM_RBC_conversions_legacy;
  outC->_L19 = default_t_sh_rqst_TM_RBC_conversions_legacy;
  outC->_L18 = default_d_sr_TM_RBC_conversions_legacy;
  outC->_L16 = default_nid_em_TM_RBC_conversions_legacy;
  outC->_L15 = default_t_train_reference_TM_RBC_conversions_legacy;
  _1_noname = outC->_L4;
  outC->_L2 = outC->_L1.valid;
  noname = outC->_L2;
  outC->_L14.radioDevice = outC->_L24;
  outC->_L14.receivedSystemTime = outC->_L25;
  outC->_L14.nid_message = outC->_L3;
  outC->_L14.t_train = outC->_L5;
  outC->_L14.m_ack = outC->_L6;
  outC->_L14.nid_lrbg = outC->_L7;
  outC->_L14.t_train_reference = outC->_L15;
  outC->_L14.nid_em = outC->_L16;
  outC->_L14.q_scale = outC->_L34;
  outC->_L14.d_sr = outC->_L18;
  outC->_L14.t_sh_rqst = outC->_L19;
  outC->_L14.d_ref = outC->_L32;
  outC->_L14.q_dir = outC->_L33;
  outC->_L14.d_emergencystop = outC->_L22;
  outC->_L14._1_m_version = outC->_L31;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->Radio_Track_Train_Hd_out,
    &outC->_L14);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

