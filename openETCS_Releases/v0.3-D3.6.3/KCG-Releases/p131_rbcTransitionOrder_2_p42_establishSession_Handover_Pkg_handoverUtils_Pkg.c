/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession */
void p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::p131_transitionOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p131_transitionOrder,
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::p42_establishSession */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_establishSession)
{
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession */
  static P42_SessionManagement_T_Packet_Types_Pkg mk_struct;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L53 */
  static kcg_bool _L53;
  /* Handover_Pkg::handoverUtils_Pkg::p131_rbcTransitionOrder_2_p42_establishSession::_L54 */
  static P131_OBU_T_TM _L54;
  
  (*p42_establishSession).source = (*p131_transitionOrder).source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &(*p42_establishSession).radioMetadata,
    &(*p131_transitionOrder).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &(*p42_establishSession).BG_Common_Header,
    &(*p131_transitionOrder).BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*p42_establishSession).Radio_Common_Header,
    &(*p131_transitionOrder).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*p42_establishSession).sendingRBC,
    &(*p131_transitionOrder).sendingRBC);
  /* 1 */ Read_P131_TM(&(*p131_transitionOrder).packets, &_L53, &_L54);
  (*p42_establishSession).valid = (*p131_transitionOrder).valid & _L53;
  mk_struct.valid = _L54.valid;
  mk_struct.q_dir = _L54.q_dir;
  mk_struct.q_rbc = Q_RBC_Establish_communication_session;
  mk_struct.nid_c = _L54.nid_c;
  mk_struct.nid_rbc = _L54.nid_rbc;
  mk_struct.nid_radio = _L54.nid_radio;
  mk_struct.q_sleepsession = _L54.q_sleepsession;
  /* 1 */
  Send_P042_no_merge_TM_specific_send(
    &mk_struct,
    &(*p42_establishSession).packets);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** p131_rbcTransitionOrder_2_p42_establishSession_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

