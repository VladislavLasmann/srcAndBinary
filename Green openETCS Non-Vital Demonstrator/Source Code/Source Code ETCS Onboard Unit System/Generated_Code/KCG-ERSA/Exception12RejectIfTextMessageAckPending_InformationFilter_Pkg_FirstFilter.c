/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/EVC_IP_DMI/KCG_ERSA\kcg_s2c_config.txt
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending */
void Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inCurrentTextMessageId */kcg_int inCurrentTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::outAcceptMessage */kcg_bool *outAcceptMessage,
  /* InformationFilter_Pkg::FirstFilter::Exception12RejectIfTextMessageAckPending::outStoreInTransitionBuffer */kcg_bool *outStoreInTransitionBuffer)
{
  *outStoreInTransitionBuffer = kcg_false;
  *outAcceptMessage = inLastAckTextMessageId == inCurrentTextMessageId;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-09T11:52:24
*************************************************************$ */

