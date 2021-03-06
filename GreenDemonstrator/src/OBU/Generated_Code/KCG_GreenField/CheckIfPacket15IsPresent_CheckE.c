/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfPacket15IsPresent_CheckE.h"

/* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent */
kcg_bool CheckIfPacket15IsPresent_CheckE(
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent::rtmMessage */ ReceivedMessage_T_Common_Types_ *rtmMessage)
{
  static kcg_int i;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent::result */
  static kcg_bool result;
  
  result = kcg_false;
  for (i = 0; i < 30; i++) {
    result = /* 1 */
      CheckIfPacketRadioMetadataEleme(
        result,
        &(*rtmMessage).packets.PacketHeaders[i]);
  }
  return result;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckIfPacket15IsPresent_CheckE.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

