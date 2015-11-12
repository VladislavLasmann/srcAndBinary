/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfPacketRadioMetadataEleme.h"

/* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15 */
kcg_bool CheckIfPacketRadioMetadataEleme(
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::accumulatorInput */ kcg_bool accumulatorInput,
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::metadataElement */ MetadataElement_T_Common_Types_ *metadataElement)
{
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::result */
  static kcg_bool result;
  
  result = accumulatorInput | (/* 1 */
      T_extract_nid_packet_from_metad((*metadataElement).nid_packet) == 15);
  return result;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckIfPacketRadioMetadataEleme.c
** Generation date: 2015-11-12T17:51:54
*************************************************************$ */

