/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _SEND_MergeRadioPackets_RBC_Sen
#define _SEND_MergeRadioPackets_RBC_Sen

#include "kcg_types.h"
#include "Write_P058_TM_trackside.h"
#include "Write_P057_TM_trackside.h"
#include "Write_P021_TM_trackside.h"
#include "Write_P005_TM_trackside.h"
#include "Write_P015_TM_trackside.h"
#include "Write_P042_TM_trackside.h"
#include "Write_P027V1_TM_trackside_basel.h"
#include "Write_P003V1_TM_trackside_basel.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets */
extern void SEND_MergeRadioPackets_RBC_Send(
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::Header */ _6_Radio_TrackTrain_Header_T_TM *Header,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M03 */ P003V1_trackside_int_T_TM_basel *M03,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M05 */ P005_trackside_int_T_TM *M05,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M15 */ P015_trackside_int_T_TM *M15,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M21 */ P021_trackside_int_T_TM *M21,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M27 */ P027V1_trackside_int_T_TM_basel *M27,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M42 */ P042_trackside_int_T_TM *M42,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M57 */ P057_trackside_int_T_TM *M57,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::M58 */ P058_trackside_int_T_TM *M58,
  /* RBC_SendMergeRadio_Pkg::SEND_MergeRadioPackets::MessageOUT */ CompressedRadioMessage_TM *MessageOUT);

#endif /* _SEND_MergeRadioPackets_RBC_Sen */
/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_MergeRadioPackets_RBC_Send.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

