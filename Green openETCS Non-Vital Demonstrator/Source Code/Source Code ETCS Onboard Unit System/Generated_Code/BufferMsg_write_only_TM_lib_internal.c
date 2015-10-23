/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BufferMsg_write_only_TM_lib_internal.h"

/* TM_lib_internal::BufferMsg_write_only */
void BufferMsg_write_only_TM_lib_internal(
  /* TM_lib_internal::BufferMsg_write_only::Buffer_In */ M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_In,
  /* TM_lib_internal::BufferMsg_write_only::Stacksize_old */ kcg_int Stacksize_old,
  /* TM_lib_internal::BufferMsg_write_only::Message_In */ M_TrainTrack_Message_T_TM_radio_messages *Message_In,
  /* TM_lib_internal::BufferMsg_write_only::Buffer_Out */ M_TrainTrackMessage_buffer_t_TM_lib_internal *Buffer_Out,
  /* TM_lib_internal::BufferMsg_write_only::Stacksize_new */ kcg_int *Stacksize_new,
  /* TM_lib_internal::BufferMsg_write_only::Message_out */ M_TrainTrack_Message_T_TM_radio_messages *Message_out)
{
  /* TM_lib_internal::BufferMsg_write_only::_L7 */
  static kcg_int _L7;
  
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    Message_out,
    (M_TrainTrack_Message_T_TM_radio_messages *)
      &EMPTY_TrainTrackMessage_TM_lib_internal);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &(&(*Buffer_Out)[0])[0],
    Message_In);
  kcg_copy_array_92220(&(*Buffer_Out)[1], (array_92220 *) &(*Buffer_In)[0]);
  _L7 = Stacksize_old + 1;
  /* 1 */ if (_L7 > DIM_FIFO_TrainTrackMessage_TM_lib_internal) {
    *Stacksize_new = DIM_FIFO_TrainTrackMessage_TM_lib_internal;
  }
  else {
    *Stacksize_new = _L7;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BufferMsg_write_only_TM_lib_internal.c
** Generation date: 2015-10-23T15:36:34
*************************************************************$ */

