/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkRadioMessages_trainData_pk.h"

/* trainData_pkg::checkRadioMessages */
void checkRadioMessages_trainData_pk(
  /* trainData_pkg::checkRadioMessages::trackMessages */ ReceivedMessage_T_Common_Types_ *trackMessages,
  /* trainData_pkg::checkRadioMessages::actualStatus */ trainDataStatus_T_trainData_Typ *actualStatus,
  /* trainData_pkg::checkRadioMessages::ackReceived */ kcg_bool *ackReceived,
  /* trainData_pkg::checkRadioMessages::ackRequested */ kcg_bool *ackRequested)
{
  *ackReceived = (*trackMessages).valid & ((*trackMessages).source ==
      msrc_Euroradio_Common_Types_Pkg) &
    (((*trackMessages).Radio_Common_Header.nid_message ==
        cm08_Acknowledgement_of_Train_D) &
      ((*trackMessages).Radio_Common_Header.t_train_reference ==
        (*actualStatus).timeStampValidateToRBC));
  /* 1 */ if (*ackReceived) {
    *ackRequested = (*trackMessages).Radio_Common_Header.m_ack ==
      M_ACK_Acknowledgement_required;
  }
  else {
    *ackRequested = kcg_false;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkRadioMessages_trainData_pk.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

