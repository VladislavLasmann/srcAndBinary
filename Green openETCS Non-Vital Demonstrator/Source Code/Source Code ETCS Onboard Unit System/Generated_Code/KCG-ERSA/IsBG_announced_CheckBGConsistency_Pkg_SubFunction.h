/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG/config.txt
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */
#ifndef _IsBG_announced_CheckBGConsistency_Pkg_SubFunction_H_
#define _IsBG_announced_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "isStored_iter_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* CheckBGConsistency_Pkg::SubFunction::IsBG_announced */
extern void IsBG_announced_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::recivedBG_header */ BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::storedBGs */ positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isAnnounced */ kcg_bool *isAnnounced,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::q_linkorintation */ Q_LINKORIENTATION *q_linkorintation);

#endif /* _IsBG_announced_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-11-05T15:01:43
*************************************************************$ */

