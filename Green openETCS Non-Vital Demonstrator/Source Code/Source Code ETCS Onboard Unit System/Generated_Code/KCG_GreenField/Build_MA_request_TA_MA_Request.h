/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */
#ifndef _Build_MA_request_TA_MA_Request
#define _Build_MA_request_TA_MA_Request

#include "kcg_types.h"
#include "C_legacy_P001_TM_conversions_Tr.h"
#include "C_legacy_P000_TM_conversions_Tr.h"
#include "Send_M132_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_Tra /* TA_MA_Request::Build_MA_request::bus_out */ bus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M132_TM_radio_message /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Build_MA_request_TA_MA_Req;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::Build_MA_request */
extern void Build_MA_request_TA_MA_Request(
  /* TA_MA_Request::Build_MA_request::trackDescrDeleted */ kcg_bool trackDescrDeleted,
  /* TA_MA_Request::Build_MA_request::trainProps */ trainProperties_T_TrainPosition *trainProps,
  /* TA_MA_Request::Build_MA_request::packet0 */ PT0_PositionReport_T_Packet_Tra *packet0,
  /* TA_MA_Request::Build_MA_request::packet1 */ PT1_PositionReport_2BG_T_Packet *packet1,
  /* TA_MA_Request::Build_MA_request::t_train */ T_TRAIN t_train,
  /* TA_MA_Request::Build_MA_request::bus_in */ M_TrainTrackMessageBus_t_TM_Tra *bus_in,
  outC_Build_MA_request_TA_MA_Req *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_MA_request_reset_TA_MA_Re(
  outC_Build_MA_request_TA_MA_Req *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_MA_request_init_TA_MA_Req(
  outC_Build_MA_request_TA_MA_Req *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Build_MA_request_TA_MA_Request */
/* $**************** KCG Version 6.4 (build i21) ****************
** Build_MA_request_TA_MA_Request.h
** Generation date: 2015-11-03T14:28:11
*************************************************************$ */

