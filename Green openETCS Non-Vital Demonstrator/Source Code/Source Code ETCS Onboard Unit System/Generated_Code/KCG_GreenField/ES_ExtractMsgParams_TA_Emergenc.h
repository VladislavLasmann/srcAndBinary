/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */
#ifndef _ES_ExtractMsgParams_TA_Emergen
#define _ES_ExtractMsgParams_TA_Emergen

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TA_EmergencyStop::ES_ExtractMsgParams */
extern void ES_ExtractMsgParams_TA_Emergenc(
  /* TA_EmergencyStop::ES_ExtractMsgParams::messageIn */ ReceivedMessage_T_Common_Types_ *messageIn,
  /* TA_EmergencyStop::ES_ExtractMsgParams::receivedESMsg */ kcg_bool receivedESMsg,
  /* TA_EmergencyStop::ES_ExtractMsgParams::nid_em */ NID_EM *nid_em,
  /* TA_EmergencyStop::ES_ExtractMsgParams::q_scale */ Q_SCALE *q_scale,
  /* TA_EmergencyStop::ES_ExtractMsgParams::d_ref */ D_REF *d_ref,
  /* TA_EmergencyStop::ES_ExtractMsgParams::q_dir */ Q_DIR *q_dir,
  /* TA_EmergencyStop::ES_ExtractMsgParams::d_emergencystop */ D_EMERGENCYSTOP *d_emergencystop);

#endif /* _ES_ExtractMsgParams_TA_Emergen */
/* $**************** KCG Version 6.4 (build i21) ****************
** ES_ExtractMsgParams_TA_Emergenc.h
** Generation date: 2015-11-12T17:51:53
*************************************************************$ */

