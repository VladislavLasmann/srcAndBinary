/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrainside/config.txt
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_extract_nid_packet_from_metad.h"

/* TM::T_extract_nid_packet_from_metadata_selector */
kcg_int T_extract_nid_packet_from_metad(
  /* TM::T_extract_nid_packet_from_metadata_selector::Metadata_in */ kcg_int Metadata_in)
{
  /* TM::T_extract_nid_packet_from_metadata_selector::nid_packet */
  static kcg_int nid_packet;
  
  nid_packet = Metadata_in / DIM_offset_metadata_nid_packet_;
  return nid_packet;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_extract_nid_packet_from_metad.c
** Generation date: 2015-11-13T13:31:15
*************************************************************$ */
