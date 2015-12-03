/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_demonstrator/Simulation\kcg_s2c_config.txt
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P041_MessageLibBaseline2.h"

void Send_P041_reset_MessageLibBaseline2(
  outC_Send_P041_MessageLibBaseline2 *outC)
{
  /* 1 */ Write_P041_reset_TM_trackside(&outC->Context_1);
}

/* MessageLibBaseline2::Send_P041 */
void Send_P041_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P041::B_data_in */CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P041::P041 */P041_trackside_int_T_TM *P041,
  outC_Send_P041_MessageLibBaseline2 *outC)
{
  CompressedPackets_T_Common_Types_Pkg tmp;
  kcg_bool tmp1;
  kcg_bool noname;
  
  kcg_copy_P041_trackside_int_T_TM(&outC->_L4, P041);
  outC->_L5 = outC->_L4.valid;
  outC->tmp = outC->_L5;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, B_data_in);
  if (outC->tmp) {
    /* 1 */ Write_P041_TM_trackside(&outC->_L4, &outC->_L3, &outC->Context_1);
    tmp1 = outC->Context_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp,
      &outC->Context_1.RadioPacketsOut);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7, &tmp);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7, &outC->_L3);
  }
  outC->_L8 = kcg_false;
  if (outC->tmp) {
    outC->_L6 = tmp1;
  }
  else {
    outC->_L6 = outC->_L8;
  }
  noname = outC->_L6;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_out, &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P041_MessageLibBaseline2.c
** Generation date: 2015-10-19T14:35:58
*************************************************************$ */

