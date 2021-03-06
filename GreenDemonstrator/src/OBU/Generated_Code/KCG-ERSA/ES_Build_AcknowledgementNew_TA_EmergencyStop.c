/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Build_AcknowledgementNew_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Build_AcknowledgementNew */
void ES_Build_AcknowledgementNew_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::t_train */ T_TRAIN t_train,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::receivedMsg16 */ kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::cesAccepted */ kcg_bool cesAccepted,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::updateEOA */ kcg_bool updateEOA,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::m147 */ M_147_T_TM_radio_messages *m147)
{
  (*m147).valid = kcg_true;
  (*m147).nid_message = 147;
  (*m147).l_message = 0;
  (*m147).t_train = t_train;
  (*m147).nid_engine = (*trainProps).nid_engine;
  (*m147).nid_em = nid_em;
  /* 1 */ if (receivedMsg16) {
    (*m147).q_emergencystop =
      Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted;
  }
  else /* 2 */ if (cesAccepted) {
    /* 3 */ if (updateEOA) {
      (*m147).q_emergencystop =
        Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
    }
    else {
      (*m147).q_emergencystop =
        Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA;
    }
  }
  else {
    (*m147).q_emergencystop = Q_EMERGENCYSTOP_Emergency_stop;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Build_AcknowledgementNew_TA_EmergencyStop.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

