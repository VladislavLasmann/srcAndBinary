/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Bool_to_Int_Utilities.h"

/* Utilities::Bool_to_Int */
kcg_int Bool_to_Int_Utilities(
  /* Utilities::Bool_to_Int::bool_in */kcg_bool bool_in)
{
  /* Utilities::Bool_to_Int::IfBlock1::else */ kcg_bool else_clock_IfBlock1;
  /* Utilities::Bool_to_Int::int_out */ kcg_int int_out;
  
  if (bool_in) {
    int_out = 1;
  }
  else {
    else_clock_IfBlock1 = !bool_in;
    if (else_clock_IfBlock1) {
      int_out = 0;
    }
    else {
      int_out = - 1;
    }
  }
  return int_out;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Bool_to_Int_Utilities.c
** Generation date: 2015-12-01T12:07:43
*************************************************************$ */

