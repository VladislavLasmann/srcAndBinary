/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */
#ifndef _Write_P015_TM_trackside_H_
#define _Write_P015_TM_trackside_H_

#include "kcg_types.h"
#include "C_P015_tracksim_compr_TM_conversions.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_trackside::Write_P015::Error */ Error;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside::Write_P015::RadioPacketsOut */ RadioPacketsOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_MessageData_TM_lib_internal /* 1 */ _2_Context_1;
  outC_SEND_WriteBaliseMessageHeader_TM_lib_internal /* 1 */ _1_Context_1;
  outC_C_P015_tracksim_compr_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_trackside_int_T_TM /* TM_trackside::Write_P015::_L1 */ _L1;
  Metadata_T_Common_Types_Pkg /* TM_trackside::Write_P015::_L4 */ _L4;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside::Write_P015::_L10 */ _L10;
  kcg_bool /* TM_trackside::Write_P015::_L18 */ _L18;
  kcg_int /* TM_trackside::Write_P015::_L21 */ _L21;
  kcg_int /* TM_trackside::Write_P015::_L22 */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside::Write_P015::_L39 */ _L39;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside::Write_P015::_L40 */ _L40;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside::Write_P015::_L42 */ _L42;
  Metadata_T_Common_Types_Pkg /* TM_trackside::Write_P015::_L41 */ _L41;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside::Write_P015::_L44 */ _L44;
  MetadataElement_T_Common_Types_Pkg /* TM_trackside::Write_P015::_L43 */ _L43;
} outC_Write_P015_TM_trackside;

/* ===========  node initialization and cycle functions  =========== */
/* TM_trackside::Write_P015 */
extern void Write_P015_TM_trackside(
  /* TM_trackside::Write_P015::Packet15 */P015_trackside_int_T_TM *Packet15,
  /* TM_trackside::Write_P015::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_Write_P015_TM_trackside *outC);

extern void Write_P015_reset_TM_trackside(outC_Write_P015_TM_trackside *outC);

#endif /* _Write_P015_TM_trackside_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_P015_TM_trackside.h
** Generation date: 2015-10-19T14:35:57
*************************************************************$ */

