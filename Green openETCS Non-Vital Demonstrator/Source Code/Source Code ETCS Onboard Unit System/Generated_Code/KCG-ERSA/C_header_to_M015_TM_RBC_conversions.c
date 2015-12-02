/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M015_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_header_to_M015 */
void C_header_to_M015_TM_RBC_conversions(
  /* TM_RBC_conversions::C_header_to_M015::header_in */ M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  /* TM_RBC_conversions::C_header_to_M015::message_out */ M_015_T_TM_radio_messages *message_out)
{
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ kcg_bool _2_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _1_else_clock_1_IfBlock1;
  
  (*message_out).valid = (*header_in).valid;
  else_clock_1_IfBlock1 = (*header_in).field4 ==
    INT_Q_SCALE_10cm_TM_conversions;
  IfBlock1_clock_1 = (*header_in).field6 == INT_Q_DIR_nomiinal_TM_conversions;
  (*message_out).nid_message = /* 1 */
    CAST_Int_to_NID_MESSAGE_TM_conversions((*header_in).nid_message);
  (*message_out).l_message = /* 1 */
    CAST_Int_to_L_MESSAGE_TM_conversions((*header_in).l_message);
  (*message_out).t_train = /* 1 */
    CAST_Int_to_T_TRAIN_TM_conversions((*header_in).t_train);
  (*message_out).m_ack = /* 1 */
    CAST_Int_to_M_ACK_TM_conversions((*header_in).field1);
  (*message_out).nid_lrbg = /* 1 */
    CAST_Int_to_NID_LRBG_TM_conversions((*header_in).field2);
  (*message_out).nid_em = /* 1 */
    CAST_Int_to_NID_EM_TM_conversions((*header_in).field3);
  /* 1_ck_IfBlock1 */ if (else_clock_1_IfBlock1) {
    (*message_out).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _2_else_clock_1_IfBlock1 = (*header_in).field4 ==
      INT_Q_SCALE_1m_TM_conversions;
    /* 1_ck_anon_activ */ if (_2_else_clock_1_IfBlock1) {
      (*message_out).q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      _1_else_clock_1_IfBlock1 = (*header_in).field4 ==
        INT_Q_SCALE_10m_TM_conversions;
      /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
        (*message_out).q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        (*message_out).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  (*message_out).d_ref = /* 1 */
    CAST_Int_to_D_REF_TM_conversions((*header_in).field5);
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*message_out).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*header_in).field6 ==
      INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*message_out).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = (*header_in).field6 ==
        INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        (*message_out).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*message_out).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  (*message_out).d_emergencystop = /* 1 */
    CAST_Int_to_D_EMERGENCYSTOP_TM_conversions((*header_in).field7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_header_to_M015_TM_RBC_conversions.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

