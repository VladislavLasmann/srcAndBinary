/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_to_legacy_t_TM_conversio.h"

/* TM_conversions::C_P041_to_legacy_t */
void C_P041_to_legacy_t_TM_conversio(
  /* TM_conversions::C_P041_to_legacy_t::P041_in */ P041_OBU_T_TM *P041_in,
  /* TM_conversions::C_P041_to_legacy_t::P041_legacy_out */ P41_LevelTransistionOrders_T_Pa *P041_legacy_out)
{
  static kcg_int i;
  
  /* 1 */ for (i = 0; i < 7; i++) {
    /* 1 */
    C_P041_to_legacy_loop_TM_conver(
      i,
      (*P041_in).q_dir,
      (*P041_in).q_scale,
      (*P041_in).d_leveltr,
      &(*P041_in).sections,
      &(*P041_legacy_out)[i]);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P041_to_legacy_t_TM_conversio.c
** Generation date: 2015-11-10T23:01:10
*************************************************************$ */

