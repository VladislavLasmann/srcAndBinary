/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P021_TM_trackside.h"

/* TM_trackside::Write_P021 */
void Write_P021_TM_trackside(
  /* TM_trackside::Write_P021::Packet21 */P021_trackside_int_T_TM *Packet21,
  /* TM_trackside::Write_P021::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_trackside::Write_P021::Error */kcg_bool *Error,
  /* TM_trackside::Write_P021::RadioPacketsOut */CompressedPackets_T_Common_Types_Pkg *RadioPacketsOut)
{
  /* TM_trackside::Write_P021::_L21 */
  static kcg_int _L21;
  /* TM_trackside::Write_P021::_L22 */
  static kcg_int _L22;
  /* TM_trackside::Write_P021::_L44 */
  static CompressedPacketData_T_Common_Types_Pkg _L44;
  /* TM_trackside::Write_P021::_L43 */
  static MetadataElement_T_Common_Types_Pkg _L43;
  
  *Error = kcg_false;
  /* 1 */ C_P021_tracksim_compr_TM_conversions(Packet21, &_L43, &_L44);
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
** Write_P021_TM_trackside.c
** Generation date: 2015-11-12T10:46:59
*************************************************************$ */

