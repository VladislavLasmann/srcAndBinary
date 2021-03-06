/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferOutput_write_only5_TM_lib_internal.h"

/* TM_lib_internal::BufferOutput_write_only5 */
void BufferOutput_write_only5_TM_lib_internal(
  /* TM_lib_internal::BufferOutput_write_only5::Buffer_In */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferOutput_write_only5::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferOutput_write_only5::Message_In */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *Message_In,
  /* TM_lib_internal::BufferOutput_write_only5::Buffer_Out */ M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferOutput_write_only5::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferOutput_write_only5::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  /* TM_lib_internal::BufferOutput_write_only5::_L7 */ kcg_int _L7;
  
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    Message_out,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  kcg_copy_array_122062(&(*Buffer_Out)[0], (array_122062 *) &(*Message_In)[0]);
  kcg_copy_array_122641(&(*Buffer_Out)[5], (array_122641 *) &(*Buffer_In)[0]);
  _L7 = Stacksize_old + 5;
  /* 1 */ if (_L7 > DIM_FIFO_TrainTrackOutput_TM_lib_internal) {
    *Stacksize_new = DIM_FIFO_TrainTrackOutput_TM_lib_internal;
  }
  else {
    *Stacksize_new = _L7;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferOutput_write_only5_TM_lib_internal.c
** Generation date: 2015-12-10T15:16:02
*************************************************************$ */

