/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _SEND_WriteMessageHeader_TM_lib_internal_H_
#define _SEND_WriteMessageHeader_TM_lib_internal_H_

#include "kcg_types.h"
#include "SEND_FindSlot_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Metadata_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteMessageHeader::HeadersOut */ HeadersOut;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::NewStartAddr */ NewStartAddr;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::NewEndAddr */ NewEndAddr;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_FindSlot_TM_lib_internal /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteMessageHeader::_L1 */ _L1;
  kcg_bool /* TM_lib_internal::SEND_WriteMessageHeader::_L4 */ _L4;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::_L5 */ _L5;
  Metadata_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteMessageHeader::_L8 */ _L8;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteMessageHeader::_L9 */ _L9;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::_L16 */ _L16;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::_L17 */ _L17;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::_L18 */ _L18;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::_L22 */ _L22;
  Metadata_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteMessageHeader::_L23 */ _L23;
  Metadata_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteMessageHeader::_L24 */ _L24;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::_L31 */ _L31;
  kcg_bool /* TM_lib_internal::SEND_WriteMessageHeader::_L32 */ _L32;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::_L33 */ _L33;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::_L34 */ _L34;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::_L35 */ _L35;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::_L36 */ _L36;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::_L37 */ _L37;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteMessageHeader::_L43 */ _L43;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::SEND_WriteMessageHeader::_L44 */ _L44;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::_L7 */ _L7;
  kcg_int /* TM_lib_internal::SEND_WriteMessageHeader::_L3 */ _L3;
} outC_SEND_WriteMessageHeader_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::SEND_WriteMessageHeader */
extern void SEND_WriteMessageHeader_TM_lib_internal(
  /* TM_lib_internal::SEND_WriteMessageHeader::HeadersIn */Metadata_T_Common_Types_Pkg *HeadersIn,
  /* TM_lib_internal::SEND_WriteMessageHeader::NewHeader */MetadataElement_T_Common_Types_Pkg *NewHeader,
  outC_SEND_WriteMessageHeader_TM_lib_internal *outC);

extern void SEND_WriteMessageHeader_reset_TM_lib_internal(
  outC_SEND_WriteMessageHeader_TM_lib_internal *outC);

#endif /* _SEND_WriteMessageHeader_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_WriteMessageHeader_TM_lib_internal.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

