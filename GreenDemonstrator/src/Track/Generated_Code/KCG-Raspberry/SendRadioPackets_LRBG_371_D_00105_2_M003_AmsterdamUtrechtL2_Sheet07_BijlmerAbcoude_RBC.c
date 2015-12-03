/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside\kcg_s2c_config.txt
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_371_D_00105_2_M003_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"

/* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::SendRadioPackets_LRBG_371_D_00105_2_M003 */
void SendRadioPackets_LRBG_371_D_00105_2_M003_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::SendRadioPackets_LRBG_371_D_00105_2_M003::Radio_packets_in */CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  /* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::SendRadioPackets_LRBG_371_D_00105_2_M003::Radio_packets_out */CompressedPackets_T_Common_Types_Pkg *Radio_packets_out)
{
  CompressedPackets_T_Common_Types_Pkg tmp1;
  CompressedPackets_T_Common_Types_Pkg tmp;
  
  /* 2 */
  Send_P015_MessageLibBaseline2(
    Radio_packets_in,
    (P015_trackside_int_T_TM *) &LRBG371_P015_Packets426,
    &tmp1);
  /* 2 */
  Send_P021_MessageLibBaseline2(
    &tmp1,
    (P021_trackside_int_T_TM *) &LRBG371_P021_Packets426,
    &tmp);
  /* 2 */
  Send_P027V1_MessageLibBaseline2(
    &tmp,
    (P027V1_trackside_int_T_TM_baseline2 *) &LRBG371_P027_Packets426,
    &tmp1);
  /* 3 */
  Send_P005_MessageLibBaseline2(
    &tmp1,
    (P005_trackside_int_T_TM *) &LRBG371_P005_Packets426,
    Radio_packets_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SendRadioPackets_LRBG_371_D_00105_2_M003_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.c
** Generation date: 2015-11-10T18:22:10
*************************************************************$ */

