/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_TEXT_DATA_Variables.h"

/* DATA::Variables::CAST_int_to_DMI_TEXT */
void CAST_int_to_DMI_TEXT_DATA_Variables(
  /* DATA::Variables::CAST_int_to_DMI_TEXT::dmi_text_int_array_in */ DMI_TEXT_INT_Array_T_DATA *dmi_text_int_array_in,
  /* DATA::Variables::CAST_int_to_DMI_TEXT::dmi_text_string_out */ DMI_TEXT_DMI_Types_Pkg *dmi_text_string_out)
{
  kcg_int i;
  
  /* 1 */ for (i = 0; i < 255; i++) {
    (*dmi_text_string_out)[i] = /* 1 */
      Int_to_Char_Utilities((*dmi_text_int_array_in)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_int_to_DMI_TEXT_DATA_Variables.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

