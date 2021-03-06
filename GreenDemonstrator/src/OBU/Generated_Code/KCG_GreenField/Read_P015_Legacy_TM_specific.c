/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P015_Legacy_TM_specific.h"

/* TM_specific::Read_P015_Legacy */
void Read_P015_Legacy_TM_specific(
  /* TM_specific::Read_P015_Legacy::Message_IN */ CompressedPackets_T_Common_Type *Message_IN,
  /* TM_specific::Read_P015_Legacy::P015_legacy_out */ _6_P15_Level23MovementAuthoriti *P015_legacy_out)
{
  /* TM_specific::Read_P015_Legacy::_L2 */
  static P015_OBU_T_TM _L2;
  /* TM_specific::Read_P015_Legacy::_L1 */
  static kcg_bool _L1;
  
  /* 1 */ Read_P015_TM(Message_IN, &_L1, &_L2);
  /* ck__L1 */ if (_L1) {
    /* 1 */ C_P015_to_legacy_t_TM_conversio(&_L2, P015_legacy_out);
  }
  else {
    kcg_copy__6_P15_Level23Movement(
      P015_legacy_out,
      (_6_P15_Level23MovementAuthoriti *) &DEFAULT_P015_legacy_TM_specific);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P015_Legacy_TM_specific.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

