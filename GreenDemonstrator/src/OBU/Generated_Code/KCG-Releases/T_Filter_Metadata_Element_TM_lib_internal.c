/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Filter_Metadata_Element_TM_lib_internal.h"

/* TM_lib_internal::T_Filter_Metadata_Element */
kcg_bool T_Filter_Metadata_Element_TM_lib_internal(
  /* TM_lib_internal::T_Filter_Metadata_Element::value2 */ kcg_int value2,
  /* TM_lib_internal::T_Filter_Metadata_Element::value1 */ kcg_int value1,
  /* TM_lib_internal::T_Filter_Metadata_Element::do_filter */ kcg_bool do_filter)
{
  /* TM_lib_internal::T_Filter_Metadata_Element::data_match */
  static kcg_bool data_match;
  
  data_match = (value1 == value2) | !do_filter;
  return data_match;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_Filter_Metadata_Element_TM_lib_internal.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

