/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P021_compr_onboard */
void C_P021_compr_onboard_TM_conversions(
  /* TM_conversions::C_P021_compr_onboard::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P021_compr_onboard::Metadata_Element */ MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P021_compr_onboard::P021_onboard */ P021_OBU_T_TM *P021_onboard)
{
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */ kcg_bool _1_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */ kcg_bool _2_else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::C_P021_compr_onboard::_L1 */ array_int_5 _L1;
  /* TM_conversions::C_P021_compr_onboard::_L22 */ kcg_bool _L22;
  
  kcg_copy_array_int_5(&_L1, (array_int_5 *) &(*PacketData)[0]);
  (*P021_onboard).n_iter = _L1[4];
  _L22 = _L1[0] == 21;
  (*P021_onboard).valid = _L22;
  _1_else_clock_1_IfBlock1 = _L1[1] == INT_Q_DIR_nomiinal_TM_conversions;
  IfBlock1_clock_1 = _L1[3] == INT_Q_SCALE_10cm_TM_conversions;
  /* 1_ck_IfBlock1 */ if (_1_else_clock_1_IfBlock1) {
    (*P021_onboard).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    else_clock_1_IfBlock1 = _L1[1] == INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
      (*P021_onboard).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      _2_else_clock_1_IfBlock1 = _L1[1] == INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (_2_else_clock_1_IfBlock1) {
        (*P021_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*P021_onboard).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*P021_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _2_else_clock_1_IfBlock1 = _L1[3] == INT_Q_SCALE_1m_TM_conversions;
    /* 1_ck_anon_activ */ if (_2_else_clock_1_IfBlock1) {
      (*P021_onboard).q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      _1_else_clock_1_IfBlock1 = _L1[3] == INT_Q_SCALE_10m_TM_conversions;
      /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
        (*P021_onboard).q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        (*P021_onboard).q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  /* 1 */
  C_P021_unflatten_sections_TM_lib_internal(
    _L22,
    _L1[4],
    (P021_sections_array_flat_T_TM *) &(*PacketData)[5],
    &(*P021_onboard).sections);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P021_compr_onboard_TM_conversions.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

