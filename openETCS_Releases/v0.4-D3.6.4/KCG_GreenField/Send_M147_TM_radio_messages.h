/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */
#ifndef _Send_M147_TM_radio_messages_H_
#define _Send_M147_TM_radio_messages_H_

#include "kcg_types.h"
#include "MergeMessageToBus_TM_TrainTrack.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"
#include "C_P001_train_compr_TM_TrainToTr.h"
#include "C_P000_train_compr_TM_TrainToTr.h"
#include "Merge_PacketsToMessage_TM_Train.h"
#include "C_M147_to_header_TM_RBC_convers.h"
#include "BufferMsg_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_Tra /* TM_radio_messages::Send_M147::MessageBus_out */ MessageBus_out;
  kcg_int /* TM_radio_messages::Send_M147::t_train_assigned */ t_train_assigned;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BufferMsg_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Send_M147_TM_radio_message;

/* ===========  node initialization and cycle functions  =========== */
/* TM_radio_messages::Send_M147 */
extern void Send_M147_TM_radio_messages(
  /* TM_radio_messages::Send_M147::t_train_global */ T_internal_Type_Obu_BasicTypes_ t_train_global,
  /* TM_radio_messages::Send_M147::MessageBus */ M_TrainTrackMessageBus_t_TM_Tra *MessageBus,
  /* TM_radio_messages::Send_M147::Message_147_in */ M_147_T_TM_radio_messages *Message_147_in,
  /* TM_radio_messages::Send_M147::P000 */ P000_TM_TrainToTrack *P000,
  /* TM_radio_messages::Send_M147::P001 */ P001_TM_TrainToTrack *P001,
  /* TM_radio_messages::Send_M147::m_version */ M_VERSION m_version,
  outC_Send_M147_TM_radio_message *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_M147_reset_TM_radio_messag(
  outC_Send_M147_TM_radio_message *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_M147_init_TM_radio_message(
  outC_Send_M147_TM_radio_message *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Send_M147_TM_radio_messages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Send_M147_TM_radio_messages.h
** Generation date: 2015-12-03T13:39:51
*************************************************************$ */

