/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P065_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P065_compr_onboard */
void C_P065_compr_onboard_TM_conversions(
  /* TM_conversions::C_P065_compr_onboard::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P065_compr_onboard::Metadata_Element */ MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P065_compr_onboard::P065_onboard */ P065_OBU_T_TM *P065_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _2_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::C_P065_compr_onboard::_L46 */
  static array_int_9 _L46;
  
  kcg_copy_array_int_9(&_L46, (array_int_9 *) &(*PacketData)[0]);
  (*P065_onboard).valid = _L46[0] == 65;
  else_clock_1_IfBlock1 = _L46[1] == INT_Q_DIR_nomiinal_TM_conversions;
  IfBlock1_clock_1 = _L46[3] == INT_Q_SCALE_10cm_TM_conversions;
  /* 1_ck_IfBlock1 */ if (else_clock_1_IfBlock1) {
    (*P065_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _2_else_clock_1_IfBlock1 = _L46[1] == INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_2_else_clock_1_IfBlock1) {
      (*P065_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      _1_else_clock_1_IfBlock1 = _L46[1] == INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
        (*P065_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P065_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*P065_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = _L46[3] == INT_Q_SCALE_1m_TM_conversions;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*P065_onboard).q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = _L46[3] == INT_Q_SCALE_10m_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        (*P065_onboard).q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        (*P065_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  (*P065_onboard).nid_tsr = /* 1 */ CAST_Int_to_NID_MN_TM_conversions(_L46[4]);
  (*P065_onboard).d_tsr = /* 1 */ CAST_Int_to_NID_TSR_TM_conversions(_L46[5]);
  (*P065_onboard).l_tsr = /* 1 */ CAST_Int_to_L_TSR_TM_conversions(_L46[6]);
  (*P065_onboard).q_front = /* 1 */ CAST_Int_to_Q_FRONT_TM_conversions(_L46[7]);
  (*P065_onboard).v_tsr = /* 1 */ CAST_Int_to_V_TSR_TM_conversions(_L46[8]);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P065_compr_onboard_TM_conversions.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

