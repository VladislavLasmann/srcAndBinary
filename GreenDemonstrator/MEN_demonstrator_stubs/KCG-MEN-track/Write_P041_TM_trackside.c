/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P041_TM_trackside.h"

/* TM_trackside::Write_P041 */
void Write_P041_TM_trackside(
  /* TM_trackside::Write_P041::Packet41 */P041_trackside_int_T_TM *Packet41,
  /* TM_trackside::Write_P041::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside::Write_P041::Error */kcg_bool *Error,
  /* TM_trackside::Write_P041::RadioPacketsOut */CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut)
{
  /* TM_trackside::Write_P041::_L21 */ kcg_int _L21;
  /* TM_trackside::Write_P041::_L22 */ kcg_int _L22;
  /* TM_trackside::Write_P041::_L44 */ CompressedPacketData_T_Common_Types_Pkg _L44;
  /* TM_trackside::Write_P041::_L43 */ MetadataElement_T_Common_Types_Pkg _L43;
  
  *Error = kcg_false;
  /* 1 */ C_P041_tracksim_compr_TM_conversions(Packet41, &_L43, &_L44);
  /* 1 */
  SEND_WriteBaliseMessageHeader_TM_lib_internal(
    &(*Packets).PacketHeaders,
    &_L43,
    &(*RadioPacketsOut).PacketHeaders,
    &_L21,
    &_L22);
  /* 1 */
  SEND_MessageData_TM_lib_internal(
    _L21,
    _L22,
    &(*Packets).PacketData,
    &_L44,
    &(*RadioPacketsOut).PacketData);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_P041_TM_trackside.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */
