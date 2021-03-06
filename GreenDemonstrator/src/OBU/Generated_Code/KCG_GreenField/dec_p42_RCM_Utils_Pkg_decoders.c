/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dec_p42_RCM_Utils_Pkg_decoders.h"

/* RCM_Utils_Pkg::decoders::dec_p42 */
void dec_p42_RCM_Utils_Pkg_decoders(
  /* RCM_Utils_Pkg::decoders::dec_p42::msg_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* RCM_Utils_Pkg::decoders::dec_p42::p42_sessionManagement */ p42_sessionManagement_T_RCM_Msg *p42_sessionManagement)
{
  /* RCM_Utils_Pkg::decoders::dec_p42::_L29 */
  static P42_SessionManagement_T_Packet_ _L29;
  /* RCM_Utils_Pkg::decoders::dec_p42::_L28 */
  static kcg_bool _L28;
  
  (*p42_sessionManagement).msgSrc = (*msg_in).source;
  kcg_copy_RBC_Id_T_Common_Types_(
    &(*p42_sessionManagement).origin,
    &(*msg_in).sendingRBC);
  /* 1 */ Read_P042_TM(&(*msg_in).packets, &_L28, &_L29);
  (*p42_sessionManagement).valid = (*msg_in).valid & _L28 & _L29.valid;
  (*p42_sessionManagement).q_dir = _L29.q_dir;
  (*p42_sessionManagement).q_rbc = _L29.q_rbc;
  (*p42_sessionManagement).nid_c = _L29.nid_c;
  (*p42_sessionManagement).nid_RBC = _L29.nid_rbc;
  (*p42_sessionManagement).nid_radio = _L29.nid_radio;
  (*p42_sessionManagement).q_sleepsession = _L29.q_sleepsession;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** dec_p42_RCM_Utils_Pkg_decoders.c
** Generation date: 2015-11-13T13:31:17
*************************************************************$ */

