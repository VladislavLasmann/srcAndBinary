/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int_to_Bool_Utilities.h"

/* Utilities::Int_to_Bool */
kcg_bool Int_to_Bool_Utilities(
  /* Utilities::Int_to_Bool::int_in */ kcg_int int_in)
{
  /* Utilities::Int_to_Bool::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* Utilities::Int_to_Bool::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Utilities::Int_to_Bool::bool_out */
  static kcg_bool bool_out;
  
  IfBlock1_clock = int_in == 0;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    bool_out = kcg_false;
  }
  else {
    else_clock_IfBlock1 = int_in == 1;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      bool_out = kcg_true;
    }
    else {
      bool_out = kcg_false;
    }
  }
  return bool_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Int_to_Bool_Utilities.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

