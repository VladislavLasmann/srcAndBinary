/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_MODE_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_MODE_to_int */
kcg_int CAST_M_MODE_to_int_TM_conversions(
  /* TM_conversions::CAST_M_MODE_to_int::m_mode */ M_MODE m_mode)
{
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else */
  static kcg_bool _14_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else */
  static kcg_bool _12_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else */
  static kcg_bool _10_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else */
  static kcg_bool _8_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else */
  static kcg_bool _6_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _4_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _2_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else::else::else */
  static kcg_bool _5_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else::else::else */
  static kcg_bool _7_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else::else::else */
  static kcg_bool _9_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else::else::else */
  static kcg_bool _11_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1::else::else */
  static kcg_bool _13_else_clock_IfBlock1;
  /* TM_conversions::CAST_M_MODE_to_int::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_M_MODE_to_int::m_mode_int */
  static kcg_int m_mode_int;
  
  IfBlock1_clock = m_mode == ENUM_M_MODE_Full_Supervision_TM_conversions;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    m_mode_int = INT_M_MODE_Full_Supervision_TM_conversions;
  }
  else {
    _14_else_clock_IfBlock1 = m_mode == ENUM_M_MODE_Isolation_TM_conversions;
    /* ck_anon_activ */ if (_14_else_clock_IfBlock1) {
      m_mode_int = INT_M_MODE_Isolation_TM_conversions;
    }
    else {
      _13_else_clock_IfBlock1 = m_mode ==
        ENUM_M_MODE_Limited_Supervision_TM_conversions;
      /* ck_anon_activ */ if (_13_else_clock_IfBlock1) {
        m_mode_int = INT_M_MODE_Limited_Supervision_TM_conversions;
      }
      else {
        _12_else_clock_IfBlock1 = m_mode ==
          ENUM_M_MODE_National_System_TM_conversions;
        /* ck_anon_activ */ if (_12_else_clock_IfBlock1) {
          m_mode_int = INT_M_MODE_National_System_TM_conversions;
        }
        else {
          _11_else_clock_IfBlock1 = m_mode ==
            ENUM_M_MODE_Non_Leading_TM_conversions;
          /* ck_anon_activ */ if (_11_else_clock_IfBlock1) {
            m_mode_int = INT_M_MODE_Non_Leading_TM_conversions;
          }
          else {
            _10_else_clock_IfBlock1 = m_mode ==
              ENUM_M_MODE_On_Sight_TM_conversions;
            /* ck_anon_activ */ if (_10_else_clock_IfBlock1) {
              m_mode_int = INT_M_MODE_On_Sight_TM_conversions;
            }
            else {
              _9_else_clock_IfBlock1 = m_mode ==
                ENUM_M_MODE_Passive_Shunting_TM_conversions;
              /* ck_anon_activ */ if (_9_else_clock_IfBlock1) {
                m_mode_int = INT_M_MODE_Passive_Shunting_TM_conversions;
              }
              else {
                _8_else_clock_IfBlock1 = m_mode ==
                  ENUM_M_MODE_Post_Trip_TM_conversions;
                /* ck_anon_activ */ if (_8_else_clock_IfBlock1) {
                  m_mode_int = INT_M_MODE_Post_Trip_TM_conversions;
                }
                else {
                  _7_else_clock_IfBlock1 = m_mode ==
                    ENUM_M_MODE_Reversing_TM_conversions;
                  /* ck_anon_activ */ if (_7_else_clock_IfBlock1) {
                    m_mode_int = INT_M_MODE_Reversing_TM_conversions;
                  }
                  else {
                    _6_else_clock_IfBlock1 = m_mode ==
                      ENUM_M_MODE_Shunting_TM_conversions;
                    /* ck_anon_activ */ if (_6_else_clock_IfBlock1) {
                      m_mode_int = INT_M_MODE_Shunting_TM_conversions;
                    }
                    else {
                      _5_else_clock_IfBlock1 = m_mode ==
                        ENUM_M_MODE_Sleeping_TM_conversions;
                      /* ck_anon_activ */ if (_5_else_clock_IfBlock1) {
                        m_mode_int = INT_M_MODE_Sleeping_TM_conversions;
                      }
                      else {
                        _4_else_clock_IfBlock1 = m_mode ==
                          ENUM_M_MODE_Staff_Responsible_TM_conversions;
                        /* ck_anon_activ */ if (_4_else_clock_IfBlock1) {
                          m_mode_int =
                            INT_M_MODE_Staff_Responsible_TM_conversions;
                        }
                        else {
                          _3_else_clock_IfBlock1 = m_mode ==
                            ENUM_M_MODE_Stand_By_TM_conversions;
                          /* ck_anon_activ */ if (_3_else_clock_IfBlock1) {
                            m_mode_int = INT_M_MODE_Stand_By_TM_conversions;
                          }
                          else {
                            _2_else_clock_IfBlock1 = m_mode ==
                              ENUM_M_MODE_System_Failure_TM_conversions;
                            /* ck_anon_activ */ if (_2_else_clock_IfBlock1) {
                              m_mode_int =
                                INT_M_MODE_System_Failure_TM_conversions;
                            }
                            else {
                              _1_else_clock_IfBlock1 = m_mode ==
                                ENUM_M_MODE_Trip_TM_conversions;
                              /* ck_anon_activ */ if (_1_else_clock_IfBlock1) {
                                m_mode_int = INT_M_MODE_Trip_TM_conversions;
                              }
                              else {
                                else_clock_IfBlock1 = m_mode ==
                                  ENUM_M_MODE_Unfitted_TM_conversions;
                                /* ck_anon_activ */ if (else_clock_IfBlock1) {
                                  m_mode_int =
                                    INT_M_MODE_Unfitted_TM_conversions;
                                }
                                else {
                                  m_mode_int =
                                    INT_M_MODE_System_Failure_TM_conversions;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return m_mode_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_M_MODE_to_int_TM_conversions.c
** Generation date: 2015-12-07T14:52:33
*************************************************************$ */

