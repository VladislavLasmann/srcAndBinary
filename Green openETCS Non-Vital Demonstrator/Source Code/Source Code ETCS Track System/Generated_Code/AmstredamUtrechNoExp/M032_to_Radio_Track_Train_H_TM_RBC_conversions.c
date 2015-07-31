/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M032_to_Radio_Track_Train_H_TM_RBC_conversions.h"

/* TM_RBC_conversions::M032_to_Radio_Track_Train_H */
void M032_to_Radio_Track_Train_H_TM_RBC_conversions(
  /* TM_RBC_conversions::M032_to_Radio_Track_Train_H::M032_in */M_032_T_TM_radio_messages *M032_in,
  /* TM_RBC_conversions::M032_to_Radio_Track_Train_H::Radio_Track_Train_Hd_out */Radio_TrackTrain_Header_T_Radio_Types_Pkg *Radio_Track_Train_Hd_out)
{
  (*Radio_Track_Train_Hd_out).radioDevice =
    default_radioDevice_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).receivedSystemTime =
    default_receivedSystemTime_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).nid_message = (*M032_in).nid_message;
  (*Radio_Track_Train_Hd_out).t_train = (*M032_in).t_train;
  (*Radio_Track_Train_Hd_out).m_ack = (*M032_in).m_ack;
  (*Radio_Track_Train_Hd_out).nid_lrbg = (*M032_in).nid_lrbg;
  (*Radio_Track_Train_Hd_out).t_train_reference =
    default_t_train_reference_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).nid_em = default_nid_em_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).q_scale = default_q_scale_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).d_sr = default_d_sr_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).t_sh_rqst = default_t_sh_rqst_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).d_ref = default_d_ref_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).q_dir = default_q_dir_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).d_emergencystop =
    default_d_emergencystop_TM_RBC_conversions;
  (*Radio_Track_Train_Hd_out).m_version = (*M032_in).m_version;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** M032_to_Radio_Track_Train_H_TM_RBC_conversions.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

