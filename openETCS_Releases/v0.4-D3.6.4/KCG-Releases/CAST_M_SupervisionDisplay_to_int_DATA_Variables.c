/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_SupervisionDisplay_to_int_DATA_Variables.h"

/* DATA::Variables::CAST_M_SupervisionDisplay_to_int */
M_SupervisionDisplay_INT_T_DATA CAST_M_SupervisionDisplay_to_int_DATA_Variables(
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::m_supervisiondisplay_ct */ M_SupervisionDisplay_T_DMI_Types_Pkg m_supervisiondisplay_ct)
{
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::IfBlock1::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::IfBlock1::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* DATA::Variables::CAST_M_SupervisionDisplay_to_int::m_supervisiondisplay_int */
  static M_SupervisionDisplay_INT_T_DATA m_supervisiondisplay_int;
  
  IfBlock1_clock = m_supervisiondisplay_ct ==
    ENUM_M_SupervisionDisplay_T_supDis_normal;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_supervisiondisplay_int = INT_M_SupervisionDisplay_T_supDis_normal;
  }
  else {
    _3_else_clock_IfBlock1 = m_supervisiondisplay_ct ==
      ENUM_M_SupervisionDisplay_T_supDis_indication;
    /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
      m_supervisiondisplay_int = INT_M_SupervisionDisplay_T_supDis_indication;
    }
    else {
      _2_else_clock_IfBlock1 = m_supervisiondisplay_ct ==
        ENUM_M_SupervisionDisplay_T_supDis_overspeed;
      /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
        m_supervisiondisplay_int = INT_M_SupervisionDisplay_T_supDis_overspeed;
      }
      else {
        _1_else_clock_IfBlock1 = m_supervisiondisplay_ct ==
          ENUM_M_SupervisionDisplay_T_supDis_warning;
        /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
          m_supervisiondisplay_int = INT_M_SupervisionDisplay_T_supDis_warning;
        }
        else {
          else_clock_IfBlock1 = m_supervisiondisplay_ct ==
            ENUM_M_SupervisionDisplay_T_supDis_intervention;
          /* ck_anon_activ */ if (else_clock_IfBlock1) {
            m_supervisiondisplay_int =
              INT_M_SupervisionDisplay_T_supDis_intervention;
          }
          else {
            m_supervisiondisplay_int = INT_M_SupervisionDisplay_T_supDis_normal;
          }
        }
      }
    }
  }
  return m_supervisiondisplay_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_SupervisionDisplay_to_int_DATA_Variables.c
** Generation date: 2015-12-03T13:41:23
*************************************************************$ */

