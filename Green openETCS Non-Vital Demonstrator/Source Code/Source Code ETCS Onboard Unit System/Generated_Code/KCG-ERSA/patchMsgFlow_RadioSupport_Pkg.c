/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "patchMsgFlow_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::patchMsgFlow */
void patchMsgFlow_RadioSupport_Pkg(
  /* RadioSupport_Pkg::patchMsgFlow::fromEVC */ M_TrainTrack_Message_T_TM_radio_messages *fromEVC,
  /* RadioSupport_Pkg::patchMsgFlow::insafeSessionEstablished */ kcg_bool insafeSessionEstablished,
  /* RadioSupport_Pkg::patchMsgFlow::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* RadioSupport_Pkg::patchMsgFlow::toRBC */ M_TrainTrack_Message_T_TM_radio_messages *toRBC)
{
  /* 1 */ if (((*fromEVC).Message.valid & ((*fromEVC).Message.nid_message ==
        co132_MA_Request_Id_Pkg) & !((M_LEVEL_Level_3 ==
          (*inModeAndLevel).level) | ((*inModeAndLevel).level ==
          M_LEVEL_Level_2))) | ((*fromEVC).Message.valid &
      ((*fromEVC).Message.nid_message == co136_Train_Position_Report_Id_Pkg) &
      !insafeSessionEstablished)) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      toRBC,
      (M_TrainTrack_Message_T_TM_radio_messages *) &cEmptyMsg_RadioSupport_Pkg);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(toRBC, fromEVC);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** patchMsgFlow_RadioSupport_Pkg.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

