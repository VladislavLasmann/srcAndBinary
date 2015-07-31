/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/GitHub/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases\kcg_s2c_config.txt
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
#ifndef _Build_MA_request_MA_Request_H_
#define _Build_MA_request_MA_Request_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* MA_Request::Build_MA_request */
extern void Build_MA_request_MA_Request(
  /* MA_Request::Build_MA_request::trackDescrDeleted */kcg_bool trackDescrDeleted,
  /* MA_Request::Build_MA_request::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* MA_Request::Build_MA_request::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* MA_Request::Build_MA_request::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* MA_Request::Build_MA_request::t_train */T_TRAIN t_train,
  /* MA_Request::Build_MA_request::message132 */Radio_TrainTrack_Message_T_Radio_Types_Pkg *message132);

#endif /* _Build_MA_request_MA_Request_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_MA_request_MA_Request.h
** Generation date: 2015-07-31T17:20:33
*************************************************************$ */
