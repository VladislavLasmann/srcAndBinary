/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_GDIR_TM_conversions.h"

void CAST_Int_to_Q_GDIR_reset_TM_conversions(
  outC_CAST_Int_to_Q_GDIR_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_Q_GDIR */
void CAST_Int_to_Q_GDIR_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_GDIR::q_gdir_int */kcg_int q_gdir_int,
  outC_CAST_Int_to_Q_GDIR_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_GDIR::q_gdir */ Q_GDIR _2_q_gdir;
  /* TM_conversions::CAST_Int_to_Q_GDIR::error */ kcg_bool error1;
  /* TM_conversions::CAST_Int_to_Q_GDIR::q_gdir */ Q_GDIR q_gdir;
  /* TM_conversions::CAST_Int_to_Q_GDIR::error */ kcg_bool error;
  /* TM_conversions::CAST_Int_to_Q_GDIR::q_gdir */ Q_GDIR _3_q_gdir;
  /* TM_conversions::CAST_Int_to_Q_GDIR::error */ kcg_bool error4;
  /* TM_conversions::CAST_Int_to_Q_GDIR::q_gdir */ Q_GDIR _5_q_gdir;
  /* TM_conversions::CAST_Int_to_Q_GDIR::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L12 = q_gdir_int;
  outC->q_gdir_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_gdir_in == INT_Q_GDIR_downhill_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L5_IfBlock1 = kcg_false;
    error1 = outC->_L5_IfBlock1;
    outC->_L4_IfBlock1 = ENUM_Q_GDIR_downhill_TM_conversions;
    _2_q_gdir = outC->_L4_IfBlock1;
    outC->q_gdir = _2_q_gdir;
    outC->error = error1;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_gdir_in ==
      INT_Q_GDIR_uphill_TM_conversions;
    if (outC->else_clock_IfBlock1) {
      outC->_L51_IfBlock1 = kcg_false;
      error6 = outC->_L51_IfBlock1;
      outC->_L3_IfBlock1 = ENUM_Q_GDIR_uphill_TM_conversions;
      _5_q_gdir = outC->_L3_IfBlock1;
      error = error6;
      q_gdir = _5_q_gdir;
    }
    else {
      outC->_L2_IfBlock1 = kcg_true;
      error4 = outC->_L2_IfBlock1;
      outC->_L1_IfBlock1 = ENUM_Q_GDIR_downhill_TM_conversions;
      _3_q_gdir = outC->_L1_IfBlock1;
      error = error4;
      q_gdir = _3_q_gdir;
    }
    outC->q_gdir = q_gdir;
    outC->error = error;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_GDIR_TM_conversions.c
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

