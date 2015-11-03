/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P058_to_legacy_t */
void C_P058_to_legacy_t_TM_conversions(
  /* TM_conversions::C_P058_to_legacy_t::P058_in */ P058_OBU_T_TM *P058_in,
  /* TM_conversions::C_P058_to_legacy_t::P058_legacy_out */ P58_PositionReportParameters_T_Packet_Types_Pkg *P058_legacy_out)
{
  /* TM_conversions::C_P058_to_legacy_t */
  static IterPacket58List_T_Packet_Types_Pkg tmp;
  static kcg_int i;
  
  (*P058_legacy_out).valid = (*P058_in).valid;
  (*P058_legacy_out).nid_packet = 58;
  (*P058_legacy_out).q_dir = (*P058_in).q_dir;
  (*P058_legacy_out).l_packet = 0;
  (*P058_legacy_out).q_scale = (*P058_in).q_scale;
  (*P058_legacy_out).t_cycloc = (*P058_in).t_cycloc;
  (*P058_legacy_out).d_cycloc = (*P058_in).d_cycloc;
  (*P058_legacy_out).m_loc = (*P058_in).m_loc;
  (*P058_legacy_out).n_iter = (*P058_in).n_iter;
  /* 1 */ for (i = 0; i < 2; i++) {
    /* 1 */
    C_P058_to_legacy_loop_TM_conversions(i, &(*P058_in).sections, &tmp[i]);
  }
  kcg_copy_IterPacket58List_T_Packet_Types_Pkg(
    &(*P058_legacy_out).iterPacket58List,
    &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P058_to_legacy_t_TM_conversions.c
** Generation date: 2015-11-03T14:26:14
*************************************************************$ */

