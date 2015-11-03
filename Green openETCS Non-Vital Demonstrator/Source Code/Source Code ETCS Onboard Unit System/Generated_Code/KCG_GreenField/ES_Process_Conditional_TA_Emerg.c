/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Process_Conditional_TA_Emerg.h"

#ifndef KCG_USER_DEFINED_INIT
void ES_Process_Conditional_init_TA_(outC_ES_Process_Conditional_TA_ *outC)
{
  static kcg_int i;
  
  outC->cesAccepted = kcg_true;
  outC->updateEOA = kcg_true;
  outC->cesActive = kcg_true;
  outC->cesRevoked = kcg_true;
  outC->init = kcg_true;
  outC->store.nfree = 0;
  for (i = 0; i < 8; i++) {
    outC->store.items[i].nid_em = 0;
    outC->store.items[i].valid = kcg_true;
  }
  outC->newEOA = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ES_Process_Conditional_reset_TA(outC_ES_Process_Conditional_TA_ *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_EmergencyStop::ES_Process_Conditional */
void ES_Process_Conditional_TA_Emerg(
  /* TA_EmergencyStop::ES_Process_Conditional::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::ES_Process_Conditional::q_scale */ Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_Process_Conditional::d_ref */ D_REF d_ref,
  /* TA_EmergencyStop::ES_Process_Conditional::q_dir */ Q_DIR q_dir,
  /* TA_EmergencyStop::ES_Process_Conditional::d_emergencystop */ D_EMERGENCYSTOP d_emergencystop,
  /* TA_EmergencyStop::ES_Process_Conditional::receivedMsg15 */ kcg_bool receivedMsg15,
  /* TA_EmergencyStop::ES_Process_Conditional::receivedMsg18 */ kcg_bool receivedMsg18,
  /* TA_EmergencyStop::ES_Process_Conditional::TrainPositionIn */ trainPosition_T_TrainPosition_T *TrainPositionIn,
  /* TA_EmergencyStop::ES_Process_Conditional::currentEOA */ L_internal_Type_Obu_BasicTypes_ currentEOA,
  outC_ES_Process_Conditional_TA_ *outC)
{
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::store */
  static NID_EM_Store_T_TA_EmergencyStop last_store;
  
  /* last_init_ck_store */ if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_NID_EM_Store_T_TA_Emer(
      &last_store,
      (NID_EM_Store_T_TA_EmergencyStop *) &cNID_EM_STORE_EMPTY_TA_Emergenc);
  }
  else {
    kcg_copy_NID_EM_Store_T_TA_Emer(&last_store, &outC->store);
  }
  /* ck_receivedMsg15 */ if (receivedMsg15) {
    /* 2 */
    ES_AcceptOrReject_CES_TA_Emerge(
      q_scale,
      d_ref,
      q_dir,
      d_emergencystop,
      TrainPositionIn,
      currentEOA,
      &outC->updateEOA,
      &outC->newEOA,
      &_L3_IfBlock1);
    outC->cesRevoked = kcg_false;
    /* 1 */
    Manage_NID_EM_Store_TA_Emergenc(
      _L3_IfBlock1,
      kcg_false,
      nid_em,
      &last_store,
      &outC->cesAccepted,
      &outC->store);
  }
  else /* ck_anon_activ */ if (receivedMsg18) {
    outC->updateEOA = kcg_false;
    outC->cesAccepted = kcg_false;
    outC->newEOA = cEOA_NONE_TA_EmergencyStop;
    /* 2 */
    Manage_NID_EM_Store_TA_Emergenc(
      kcg_false,
      kcg_true,
      nid_em,
      &last_store,
      &outC->cesRevoked,
      &outC->store);
  }
  else {
    outC->cesRevoked = kcg_false;
    outC->updateEOA = kcg_false;
    outC->cesAccepted = kcg_false;
    outC->newEOA = cEOA_NONE_TA_EmergencyStop;
    kcg_copy_NID_EM_Store_T_TA_Emer(&outC->store, &last_store);
  }
  outC->cesActive = outC->store.nfree < cNID_EM_STORE_SIZE_TA_Emergency;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Process_Conditional_TA_Emerg.c
** Generation date: 2015-11-03T14:28:13
*************************************************************$ */

