/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T14:46:09
*************************************************************$ */
#ifndef _Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter_H_
#define _Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending */
extern void Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inCurrentTextMessageId */ kcg_int inCurrentTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inLastAckTextMessageId */ kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::outAcceptMessage */ kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer);

#endif /* _Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-11-25T14:46:09
*************************************************************$ */

