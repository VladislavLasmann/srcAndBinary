/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ThirdFilter_InformationFilter_Pkg_ThirdFilter.h"

/* InformationFilter_Pkg::ThirdFilter::ThirdFilter */
void ThirdFilter_InformationFilter_Pkg_ThirdFilter(
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::inModus */ M_MODE inModus,
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::outMessage */ ReceivedMessage_T_Common_Types_Pkg *outMessage)
{
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter */
  static Metadata_T_Common_Types_Pkg tmp;
  static kcg_int i;
  static kcg_bool tmp_1_1;
  
  (*outMessage).valid = (*inMessage).valid;
  (*outMessage).source = (*inMessage).source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &(*outMessage).radioMetadata,
    &(*inMessage).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &(*outMessage).BG_Common_Header,
    &(*inMessage).BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*outMessage).Radio_Common_Header,
    &(*inMessage).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*outMessage).sendingRBC,
    &(*inMessage).sendingRBC);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*outMessage).packets,
    &(*inMessage).packets);
  for (i = 0; i < 30; i++) {
    tmp_1_1 = /* 2 */
      ModeFilter_InformationFilter_Pkg_ThirdFilter(
        inModus,
        /* 1 */
        GetPacketId_InformationFilter_Pkg_Common(
          &(*inMessage).packets.PacketHeaders[i]));
    /* 1 */
    SetValidFlag_InformationFilter_Pkg_Common(
      tmp_1_1,
      &(*inMessage).packets.PacketHeaders[i],
      &tmp[i]);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &(*outMessage).packets.PacketHeaders,
    &tmp);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ThirdFilter_InformationFilter_Pkg_ThirdFilter.c
** Generation date: 2015-12-03T13:41:24
*************************************************************$ */

