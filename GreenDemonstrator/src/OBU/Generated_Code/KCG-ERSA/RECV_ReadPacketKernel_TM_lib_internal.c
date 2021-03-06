/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacketKernel_TM_lib_internal.h"

/* TM_lib_internal::RECV_ReadPacketKernel */
void RECV_ReadPacketKernel_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPacketKernel::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_lib_internal::RECV_ReadPacketKernel::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_lib_internal::RECV_ReadPacketKernel::PacketOut */ CompressedPacketData_T_Common_Types_Pkg *PacketOut)
{
  /* TM_lib_internal::RECV_ReadPacketKernel */ kcg_bool cond_iterw;
  kcg_int i;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L22 */ kcg_int _L22;
  
  for (i = 0; i < 500; i++) {
    /* 1 */
    RECV_ReadPacketKernelLoop_TM_lib_internal(
      i,
      PacketData,
      (*Header).startAddress,
      (*Header).endAddress,
      &cond_iterw,
      &(*PacketOut)[i]);
    _L22 = i + 1;
    if (!cond_iterw) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L22; i < 500; i++) {
    (*PacketOut)[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RECV_ReadPacketKernel_TM_lib_internal.c
** Generation date: 2015-12-10T15:16:01
*************************************************************$ */

