/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_ORIENTATION_TM_conversions.h"

void CAST_Int_to_Q_ORIENTATION_reset_TM_conversions(
  outC_CAST_Int_to_Q_ORIENTATION_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_ORIENTATION */
void CAST_Int_to_Q_ORIENTATION_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation_int */kcg_int q_orientation_int,
  outC_CAST_Int_to_Q_ORIENTATION_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation */ Q_ORIENTATION _2_q_orientation;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation */ Q_ORIENTATION q_orientation;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation */ Q_ORIENTATION _3_q_orientation;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::q_orientation */ Q_ORIENTATION _5_q_orientation;
  /* TM_conversions::CAST_Int_to_Q_ORIENTATION::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_orientation_int;
  outC->q_orientation_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_orientation_in ==
    INT_Q_ORIENTATION_reverse_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_ORIENTATION_reverse_TM_conversions;
    _2_q_orientation = outC->_L4_IfBlock1;
    outC->q_orientation = _2_q_orientation;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_orientation_in ==
      INT_Q_ORIENTATION_nominal_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L51_IfBlock1 = kcg_false;
      error6 = outC->_L51_IfBlock1;
      outC->_L3_IfBlock1 = ENUM_Q_ORIENTATION_nominal_TM_conversions;
      _5_q_orientation = outC->_L3_IfBlock1;
      error = error6;
      q_orientation = _5_q_orientation;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = ENUM_Q_ORIENTATION_reverse_TM_conversions;
      _3_q_orientation = outC->_L1_IfBlock1;
      error = error4;
      q_orientation = _3_q_orientation;
    }
    outC->q_orientation = q_orientation;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_ORIENTATION_TM_conversions.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

