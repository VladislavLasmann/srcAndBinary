/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */
#ifndef _RECV_LookupPacket_TM_lib_inter
#define _RECV_LookupPacket_TM_lib_inter

#include "kcg_types.h"
#include "RECV_LookupPacketLoop_TM_lib_in.h"
#include "T_Filter_Metadata_TM_lib_intern.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_lib_internal::RECV_LookupPacket */
extern void RECV_LookupPacket_TM_lib_intern(
  /* TM_lib_internal::RECV_LookupPacket::Message_ID */ kcg_int Message_ID,
  /* TM_lib_internal::RECV_LookupPacket::HeadersIN */ Metadata_T_Common_Types_Pkg *HeadersIN,
  /* TM_lib_internal::RECV_LookupPacket::F_version */ kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacket::F_id */ kcg_bool F_id,
  /* TM_lib_internal::RECV_LookupPacket::Found */ kcg_bool *Found,
  /* TM_lib_internal::RECV_LookupPacket::Index */ kcg_int *Index,
  /* TM_lib_internal::RECV_LookupPacket::HeaderFound */ MetadataElement_T_Common_Types_ *HeaderFound);

#endif /* _RECV_LookupPacket_TM_lib_inter */
/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_LookupPacket_TM_lib_intern.h
** Generation date: 2015-11-13T13:31:12
*************************************************************$ */

