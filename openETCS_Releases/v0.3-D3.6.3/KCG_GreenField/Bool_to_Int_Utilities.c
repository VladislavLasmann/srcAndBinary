/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Bool_to_Int_Utilities.h"

/* Utilities::Bool_to_Int */
kcg_int Bool_to_Int_Utilities(
  /* Utilities::Bool_to_Int::bool_in */ kcg_bool bool_in)
{
  /* Utilities::Bool_to_Int::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* Utilities::Bool_to_Int::int_out */
  static kcg_int int_out;
  
  /* ck_bool_in */ if (bool_in) {
    int_out = 1;
  }
  else {
    else_clock_IfBlock1 = !bool_in;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      int_out = 0;
    }
    else {
      int_out = - 1;
    }
  }
  return int_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Bool_to_Int_Utilities.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

