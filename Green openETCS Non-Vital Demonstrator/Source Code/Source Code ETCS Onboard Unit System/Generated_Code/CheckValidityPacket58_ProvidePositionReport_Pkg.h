/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
#ifndef _CheckValidityPacket58_ProvidePositionReport_Pkg_H_
#define _CheckValidityPacket58_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "BG_hasBeenReported_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */


/* ProvidePositionReport_Pkg::CheckValidityPacket58 */
extern void CheckValidityPacket58_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::bgCommonHeader */BG_Header_T_BG_Types_Pkg *bgCommonHeader,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::reportedBGs */ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::found */kcg_bool *found,
  /* ProvidePositionReport_Pkg::CheckValidityPacket58::updatedBGs */ReportedBGList_T_ProvidePositionReport_Pkg *updatedBGs);

#endif /* _CheckValidityPacket58_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckValidityPacket58_ProvidePositionReport_Pkg.h
** Generation date: 2015-07-31T17:20:32
*************************************************************$ */
