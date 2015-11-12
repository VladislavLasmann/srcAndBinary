/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_read_write3_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_read_write3 */
void BufferOutput_read_write3_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_read_write3::Buffer_In */M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_read_write3::Stacksize_old */kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_read_write3::Message_In */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_read_write3::Buffer_Out */M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_read_write3::Stacksize_new */kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_read_write3::Message_out */M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  /* TM_lib_internal::BufferOutput_read_write3::_L34 */
  static kcg_bool _L34;
  /* TM_lib_internal::BufferOutput_read_write3::_L40 */
  static array__130636 _L40;
  
  _L34 = Stacksize_old == 0;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &_L40[0],
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  *Stacksize_new = Stacksize_old + 2;
  if (_L34) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      Message_out,
      &(*Message_In)[0]);
    kcg_copy_array__136580(
      &(*Buffer_Out)[0],
      (array__136580 *) &(*Message_In)[1]);
    kcg_copy_array__130636(&(*Buffer_Out)[2], &_L40);
  }
  else {
    if ((0 <= Stacksize_old - 1) & (Stacksize_old - 1 < 100)) {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        Message_out,
        &(*Buffer_In)[Stacksize_old - 1]);
    }
    else {
      kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
        Message_out,
        (M_TrainTrack_Message_T_TM_radio_messages *)
          &EMPTY_TrainTrackMessage_TM_lib_internal);
    }
    kcg_copy_array__136573(
      &(*Buffer_Out)[0],
      (array__136573 *) &(*Message_In)[0]);
  }
  kcg_copy_array__136576(&(*Buffer_Out)[3], (array__136576 *) &(*Buffer_In)[0]);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BufferOutput_read_write3_TM_lib_internal.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

