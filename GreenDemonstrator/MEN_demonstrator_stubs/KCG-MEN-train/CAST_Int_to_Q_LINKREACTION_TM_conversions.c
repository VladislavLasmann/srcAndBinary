/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LINKREACTION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_LINKREACTION */
Q_LINKREACTION CAST_Int_to_Q_LINKREACTION_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction_int */kcg_int q_linkreaction_int)
{
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else */ kcg_bool _1_else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* TM_conversions::CAST_Int_to_Q_LINKREACTION::q_linkreaction */ Q_LINKREACTION q_linkreaction;
  
  IfBlock1_clock = q_linkreaction_int ==
    INT_Q_LINKREACTION_Train_trip_TM_conversions;
  if (IfBlock1_clock) {
    q_linkreaction = ENUM_Q_LINKREACTION_Train_trip_TM_conversions;
  }
  else {
    _1_else_clock_IfBlock1 = q_linkreaction_int ==
      INT_Q_LINKREACTION_Apply_servicebrake_TM_conversions;
    if (_1_else_clock_IfBlock1) {
      q_linkreaction = ENUM_Q_LINKREACTION_Apply_servicebrake_TM_conversions;
    }
    else {
      else_clock_IfBlock1 = q_linkreaction_int ==
        INT_Q_LINKREACTION_No_Reaction_TM_conversions;
      if (else_clock_IfBlock1) {
        q_linkreaction = ENUM_Q_LINKREACTION_No_Reaction_TM_conversions;
      }
      else {
        q_linkreaction = ENUM_Q_LINKREACTION_Train_trip_TM_conversions;
      }
    }
  }
  return q_linkreaction;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_LINKREACTION_TM_conversions.c
** Generation date: 2015-10-19T14:37:59
*************************************************************$ */

