/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckAllowedPacketsRadio_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::CheckAllowedPacketsRadio */
kcg_bool CheckAllowedPacketsRadio_CheckEuroradioMessage(
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage)
{
  static kcg_int i;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::valid */
  static kcg_bool valid;
  
  valid = kcg_true;
  /* 1 */ for (i = 0; i < 30; i++) {
    valid = /* 1 */
      CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions(
        valid,
        &(*rtmMessage).packets.PacketHeaders[i],
        (*rtmMessage).Radio_Common_Header.nid_message,
        (MetadataTruthtable_T1_CheckEuroradioMessage *)
          &cPermittedRadioPackets1_CheckEuroradioMessage);
  }
  return valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckAllowedPacketsRadio_CheckEuroradioMessage.c
** Generation date: 2015-11-05T08:55:27
*************************************************************$ */

