/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:08
*************************************************************$ */
#ifndef _Write_P045_TM_trackside_H_
#define _Write_P045_TM_trackside_H_

#include "kcg_types.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"
#include "C_P045_tracksim_compr_TM_conversions.h"

/* =====================  no input structure  ====================== */


/* TM_trackside::Write_P045 */
extern void Write_P045_TM_trackside(
  /* TM_trackside::Write_P045::Packet45 */P045_trackside_int_T_TM *Packet45,
  /* TM_trackside::Write_P045::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside::Write_P045::Error */kcg_bool *Error,
  /* TM_trackside::Write_P045::RadioPacketsOut */CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut);

#endif /* _Write_P045_TM_trackside_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_P045_TM_trackside.h
** Generation date: 2015-11-10T18:22:08
*************************************************************$ */

