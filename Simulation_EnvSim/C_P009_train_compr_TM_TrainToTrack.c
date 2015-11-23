/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P009_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P009_train_compr */
void C_P009_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P009_train_compr::P009_in */P009_TM_TrainToTrack *P009_in,
  /* TM_TrainToTrack::C_P009_train_compr::P009_int */P009_TrainTrack_int_TM_TrainToTrack *P009_int)
{
  (*P009_int)[0] = /* 1 */
    Encode_NID_PACKET_TM_TrainToTrack(
      (*P009_in).valid,
      /* 1 */ CAST_NID_PACKET_to_int_TM_conversions((*P009_in).nid_packet));
  (*P009_int)[1] = /* 1 */
    CAST_L_PACKET_to_int_TM_conversions((*P009_in).l_packet);
  (*P009_int)[2] = /* 1 */
    CAST_NID_LTRBG_to_int_TM_conversions((*P009_in).nid_ltrbg);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P009_train_compr_TM_TrainToTrack.c
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

