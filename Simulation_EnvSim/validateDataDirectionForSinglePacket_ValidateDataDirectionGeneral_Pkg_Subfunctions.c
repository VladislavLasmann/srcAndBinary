/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket */
void validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::inMetadataElement */MetadataElement_T_Common_Types_Pkg *inMetadataElement,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::inTrainRunningDirection */Q_DIRTRAIN inTrainRunningDirection,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::LRBGKnown */kcg_bool LRBGKnown,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::coordinateSystemAssigned */kcg_bool coordinateSystemAssigned,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::outMetadataElement */MetadataElement_T_Common_Types_Pkg *outMetadataElement)
{
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::trainPositionKnown */
  static kcg_bool trainPositionKnown;
  
  trainPositionKnown = !(*trainPosition).trainPositionIsUnknown;
  IfBlock1_clock = (*inMetadataElement).nid_packet != 44;
  if (IfBlock1_clock) {
    (*outMetadataElement).nid_packet = (*inMetadataElement).nid_packet;
    (*outMetadataElement).q_dir = (*inMetadataElement).q_dir;
    (*outMetadataElement).valid = (*inMetadataElement).valid &
      ((((*inMetadataElement).q_dir == Q_DIR_Nominal) & (Q_DIRTRAIN_Nominal ==
            inTrainRunningDirection) & trainPositionKnown &
          coordinateSystemAssigned & LRBGKnown) |
        (((*inMetadataElement).q_dir == Q_DIR_Reverse) & (Q_DIRTRAIN_Reverse ==
            inTrainRunningDirection) & trainPositionKnown &
          coordinateSystemAssigned & LRBGKnown) | ((*inMetadataElement).q_dir ==
          Q_DIR_Both_directions));
    (*outMetadataElement).startAddress = (*inMetadataElement).startAddress;
    (*outMetadataElement).endAddress = (*inMetadataElement).endAddress;
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      outMetadataElement,
      inMetadataElement);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2015-11-12T10:46:57
*************************************************************$ */
