/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P015_to_legacy_t */
void C_P015_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P015_to_legacy_t::P015_in */ P015_OBU_T_TM *P015_in,
  /* TM_conversions::C_P015_to_legacy_t::P015_legacy_out */ P15_Level23MovementAuthorities_T_Packet_Types_Pkg *P015_legacy_out)
{
  kcg_int i;
  
  /* 1 */ for (i = 0; i < 5; i++) {
    /* 1 */
    C_P015_to_legacy_loop_TM_conversions(
      i,
      P015_in,
      &(*P015_in).sections,
      &(*P015_legacy_out)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P015_to_legacy_t_TM_conversions.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

