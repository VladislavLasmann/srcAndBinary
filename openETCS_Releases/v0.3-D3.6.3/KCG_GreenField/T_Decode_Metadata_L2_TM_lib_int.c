/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Decode_Metadata_L2_TM_lib_int.h"

/* TM_lib_internal::T_Decode_Metadata_L2 */
kcg_int T_Decode_Metadata_L2_TM_lib_int(
  /* TM_lib_internal::T_Decode_Metadata_L2::Metadata */ kcg_int Metadata,
  /* TM_lib_internal::T_Decode_Metadata_L2::i */ kcg_int i)
{
  /* TM_lib_internal::T_Decode_Metadata_L2::nid_packet */
  static kcg_int nid_packet;
  
  nid_packet = i + Metadata;
  return nid_packet;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_Decode_Metadata_L2_TM_lib_int.c
** Generation date: 2015-11-05T08:54:04
*************************************************************$ */

