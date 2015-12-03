/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/MEN_Demonstrator/KCG-MEN\kcg_s2c_config.txt
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P021_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P021 */
void Send_P021_MessageLibBaseline2(
  /* MessageLibBaseline2::Send_P021::B_data_in */CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLibBaseline2::Send_P021::P021 */P021_trackside_int_T_TM *P021,
  /* MessageLibBaseline2::Send_P021::B_data_out */CompressedPackets_T_Common_Types_Pkg *B_data_out)
{
  kcg_bool tmp;
  
  if ((*P021).valid) {
    /* 1 */ Write_P021_TM_trackside(P021, B_data_in, &tmp, B_data_out);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(B_data_out, B_data_in);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P021_MessageLibBaseline2.c
** Generation date: 2015-10-19T12:21:36
*************************************************************$ */

