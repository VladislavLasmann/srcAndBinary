/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P137_Legacy_TM_specific.h"

/* TM_specific::Read_P137_Legacy */
void Read_P137_Legacy_TM_specific(
  /* TM_specific::Read_P137_Legacy::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_specific::Read_P137_Legacy::P137_legacy_out */ P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *P137_legacy_out)
{
  /* TM_specific::Read_P137_Legacy::_L1 */
  static kcg_bool _L1;
  
  /* 1 */ Read_P137_TM(Message_IN, &_L1, P137_legacy_out);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P137_Legacy_TM_specific.c
** Generation date: 2015-11-05T15:01:44
*************************************************************$ */
