/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */
#ifndef _genMsgToBus_RCM_Utils_Pkg_enco
#define _genMsgToBus_RCM_Utils_Pkg_enco

#include "kcg_types.h"
#include "Send_M154_TM_radio_messages.h"
#include "Send_M159_TM_radio_messages.h"
#include "Send_M156_TM_radio_messages.h"
#include "Send_M155_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_Tra /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_out */ msgBus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M155_TM_radio_message /* 1 */ _2_Context_1;
  outC_Send_M156_TM_radio_message /* 1 */ _1_Context_1;
  outC_Send_M159_TM_radio_message /* 2 */ Context_2;
  outC_Send_M154_TM_radio_message /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_genMsgToBus_RCM_Utils_Pkg_;

/* ===========  node initialization and cycle functions  =========== */
/* RCM_Utils_Pkg::encoders::genMsgToBus */
extern void genMsgToBus_RCM_Utils_Pkg_encod(
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgToTrackTriggers */ msgToTrackTriggers_T_RCM_MsgTyp *msgToTrackTriggers,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::t_train */ T_TRAIN t_train,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::t_train_global */ T_internal_Type_Obu_BasicTypes_ t_train_global,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_in */ M_TrainTrackMessageBus_t_TM_Tra *msgBus_in,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::nid_engine */ NID_ENGINE nid_engine,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::onboardPhoneNumbers_b */ P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::m_version */ M_VERSION m_version,
  outC_genMsgToBus_RCM_Utils_Pkg_ *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void genMsgToBus_reset_RCM_Utils_Pkg(
  outC_genMsgToBus_RCM_Utils_Pkg_ *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void genMsgToBus_init_RCM_Utils_Pkg_(
  outC_genMsgToBus_RCM_Utils_Pkg_ *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _genMsgToBus_RCM_Utils_Pkg_enco */
/* $**************** KCG Version 6.4 (build i21) ****************
** genMsgToBus_RCM_Utils_Pkg_encod.h
** Generation date: 2015-11-13T13:31:14
*************************************************************$ */

