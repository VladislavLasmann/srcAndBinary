/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_m38_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_m38 */
void dec_m38_RCM_Utils_Pkg_decoders(
  /* RCM_Utils_Pkg::decoders::dec_m38::msg_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* RCM_Utils_Pkg::decoders::dec_m38::m38_initiationOfComSession */ m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m38_initiationOfComSession)
{
  (*m38_initiationOfComSession).valid = (*msg_in).valid & (((*msg_in).source ==
        msrc_Euroradio_Common_Types_Pkg) | ((*msg_in).source ==
        msrc_RadioInfillUnit_Common_Types_Pkg)) &
    ((*msg_in).Radio_Common_Header.nid_message ==
      cm38_Initiation_of_a_Communication_Session_Id_Pkg);
  (*m38_initiationOfComSession).msgSrc = (*msg_in).source;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*m38_initiationOfComSession).origin,
    &(*msg_in).sendingRBC);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dec_m38_RCM_Utils_Pkg_decoders.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

