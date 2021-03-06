/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG_GreenField/config.txt
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TransitionBuffer_read_only_Info.h"

/* InformationFilter_Pkg::TransitionBuffer_read_only */
void TransitionBuffer_read_only_Info(
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Buffer_In */ TransitionBuffer_T_InformationF *Buffer_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Stacksize_old */ kcg_int Stacksize_old,
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Message_In */ ReceivedMessage_T_Common_Types_ *Message_In,
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Reset */ kcg_bool Reset,
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Buffer_Out */ TransitionBuffer_T_InformationF *Buffer_Out,
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Stacksize_new */ kcg_int *Stacksize_new,
  /* InformationFilter_Pkg::TransitionBuffer_read_only::Message_out */ ReceivedMessage_T_Common_Types_ *Message_out)
{
  /* InformationFilter_Pkg::TransitionBuffer_read_only::_L8 */
  static kcg_int _L8;
  
  /* 2 */ if (Reset) {
    kcg_copy_TransitionBuffer_T_Inf(
      Buffer_Out,
      (TransitionBuffer_T_InformationF *) &DEFAULT_TransitionBuffer_t_Info);
    _L8 = 0 - 1;
  }
  else {
    kcg_copy_TransitionBuffer_T_Inf(Buffer_Out, Buffer_In);
    _L8 = Stacksize_old - 1;
  }
  /* 1 */ if (_L8 < 0) {
    *Stacksize_new = 0;
  }
  else {
    *Stacksize_new = _L8;
  }
  if ((0 <= *Stacksize_new) & (*Stacksize_new < 3)) {
    kcg_copy_ReceivedMessage_T_Comm(
      Message_out,
      &(*Buffer_Out)[*Stacksize_new]);
    kcg_copy_ReceivedMessage_T_Comm(
      &(*Buffer_Out)[*Stacksize_new],
      (ReceivedMessage_T_Common_Types_ *) &cDefaultRM_Common_Types_Pkg);
  }
  else {
    kcg_copy_ReceivedMessage_T_Comm(
      Message_out,
      (ReceivedMessage_T_Common_Types_ *) &cDefaultRM_Common_Types_Pkg);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TransitionBuffer_read_only_Info.c
** Generation date: 2015-12-03T13:39:52
*************************************************************$ */

