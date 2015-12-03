/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */
#ifndef _Read_P027V1_sections_TM_baseline2_H_
#define _Read_P027V1_sections_TM_baseline2_H_

#include "kcg_types.h"
#include "RECV_ReadPackets_TM_lib_internal.h"
#include "T_Decode_Metadata_L2_TM_lib_internal.h"
#include "C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_baseline2::Read_P027V1_sections */
extern void Read_P027V1_sections_TM_baseline2(
  /* TM_baseline2::Read_P027V1_sections::i */ kcg_int i,
  /* TM_baseline2::Read_P027V1_sections::Message_IN */ CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* TM_baseline2::Read_P027V1_sections::n_iter_outer */ kcg_int n_iter_outer,
  /* TM_baseline2::Read_P027V1_sections::meta_sections */ kcg_int meta_sections,
  /* TM_baseline2::Read_P027V1_sections::cont */ kcg_bool *cont,
  /* TM_baseline2::Read_P027V1_sections::P027V1_OBU_section_out */ P027V1_section_enum_T_TM_baseline2 *P027V1_OBU_section_out);

#endif /* _Read_P027V1_sections_TM_baseline2_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Read_P027V1_sections_TM_baseline2.h
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */

