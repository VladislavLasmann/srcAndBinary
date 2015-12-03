/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LINKREACTION_TM_conversions.h"

void CAST_Int_to_Q_LINKREACTION_reset_TM_conversions(
  outC_CAST_Int_to_Q_LINKREACTION_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_LINKREACTION */
void CAST_Int_to_Q_LINKREACTION_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction_int */kcg_int q_linkreaction_int,
  outC_CAST_Int_to_Q_LINKREACTION_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */ Q_LINKREACTION _2_q_linkreaction;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */ Q_LINKREACTION q_linkreaction;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */ kcg_bool error10;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */ Q_LINKREACTION _9_q_linkreaction;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */ kcg_bool error8;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */ Q_LINKREACTION _7_q_linkreaction;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */ Q_LINKREACTION _3_q_linkreaction;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */ Q_LINKREACTION _5_q_linkreaction;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L2 = q_linkreaction_int;
  outC->q_linkreaction_in = outC->_L2;
  outC->IfBlock1_clock = outC->q_linkreaction_in ==
    INT_Q_LINKREACTION_Train_trip_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L3_IfBlock1 = kcg_false;
    error1 = outC->_L3_IfBlock1;
    outC->error = error1;
  }
  else {
    outC->_1_else_clock_IfBlock1 = outC->q_linkreaction_in ==
      INT_Q_LINKREACTION_Apply_servicebrake_TM_conversions;
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L32_IfBlock1 = kcg_false;
      error6 = outC->_L32_IfBlock1;
      error = error6;
    }
    else {
      outC->else_clock_IfBlock1 = outC->q_linkreaction_in ==
        INT_Q_LINKREACTION_No_Reaction_TM_conversions;
      if (outC->else_clock_IfBlock1) {
        outC->_L4_IfBlock1 = kcg_false;
        error10 = outC->_L4_IfBlock1;
        error4 = error10;
      }
      else {
        outC->_L25_IfBlock1 = kcg_true;
        error8 = outC->_L25_IfBlock1;
        error4 = error8;
      }
      error = error4;
    }
    outC->error = error;
  }
  outC->_L4 = outC->error;
  noname = outC->_L4;
  if (outC->IfBlock1_clock) {
    outC->_L2_IfBlock1 = ENUM_Q_LINKREACTION_Train_trip_TM_conversions;
    _2_q_linkreaction = outC->_L2_IfBlock1;
    outC->q_linkreaction = _2_q_linkreaction;
  }
  else {
    if (outC->_1_else_clock_IfBlock1) {
      outC->_L1_IfBlock1 =
        ENUM_Q_LINKREACTION_Apply_servicebrake_TM_conversions;
      _5_q_linkreaction = outC->_L1_IfBlock1;
      q_linkreaction = _5_q_linkreaction;
    }
    else {
      if (outC->else_clock_IfBlock1) {
        outC->_L13_IfBlock1 = ENUM_Q_LINKREACTION_No_Reaction_TM_conversions;
        _9_q_linkreaction = outC->_L13_IfBlock1;
        _3_q_linkreaction = _9_q_linkreaction;
      }
      else {
        outC->_L14_IfBlock1 = ENUM_Q_LINKREACTION_Train_trip_TM_conversions;
        _7_q_linkreaction = outC->_L14_IfBlock1;
        _3_q_linkreaction = _7_q_linkreaction;
      }
      q_linkreaction = _3_q_linkreaction;
    }
    outC->q_linkreaction = q_linkreaction;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_LINKREACTION_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

