/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_write_only2_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_write_only2 */
void BufferOutput_write_only2_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_write_only2::Buffer_In */M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_write_only2::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_write_only2::Message_In */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_write_only2::Buffer_Out */M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_write_only2::Stacksize_new */kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_write_only2::Message_out */M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  /* TM_lib_internal::BufferOutput_write_only2::_L7 */
  static kcg_int _L7;
  
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    Message_out,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  _L7 = Stacksize_old + 2;
  if (_L7 > DIM_FIFO_TrainTrackOutput_TM_lib_internal) {
    *Stacksize_new = DIM_FIFO_TrainTrackOutput_TM_lib_internal;
  }
  else {
    *Stacksize_new = _L7;
  }
  kcg_copy_array__137230(
    &(*Buffer_Out)[0],
    (array__137230 *) &(*Message_In)[0]);
  kcg_copy_array__137233(&(*Buffer_Out)[2], (array__137233 *) &(*Buffer_In)[0]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferOutput_write_only2_TM_lib_internal.c
** Generation date: 2015-11-23T09:24:23
*************************************************************$ */

