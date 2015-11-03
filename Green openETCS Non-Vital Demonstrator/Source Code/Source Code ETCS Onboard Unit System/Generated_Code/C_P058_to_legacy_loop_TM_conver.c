/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_to_legacy_loop_TM_conver.h"

/* TM_conversions::C_P058_to_legacy_loop */
void C_P058_to_legacy_loop_TM_conver(
  /* TM_conversions::C_P058_to_legacy_loop::i */ kcg_int i,
  /* TM_conversions::C_P058_to_legacy_loop::P058_in */ P058_OBU_sectionlist_enum_T_TM *P058_in,
  /* TM_conversions::C_P058_to_legacy_loop::P058_legacy_iter_out */ IterPacket58_T_Packet_Types_Pkg *P058_legacy_iter_out)
{
  /* TM_conversions::C_P058_to_legacy_loop::_L21 */
  static P058_section_enum_T_TM _L21;
  
  if ((0 <= i) & (i < 32)) {
    kcg_copy_P058_section_enum_T_TM(&_L21, &(*P058_in)[i]);
  }
  else {
    kcg_copy_P058_section_enum_T_TM(
      &_L21,
      (P058_section_enum_T_TM *) &DEFAULT_P058_OBU_section_TM);
  }
  (*P058_legacy_iter_out).d_loc = _L21.d_loc;
  (*P058_legacy_iter_out).q_lgtloc = _L21.q_lgtloc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P058_to_legacy_loop_TM_conver.c
** Generation date: 2015-11-03T13:50:14
*************************************************************$ */

