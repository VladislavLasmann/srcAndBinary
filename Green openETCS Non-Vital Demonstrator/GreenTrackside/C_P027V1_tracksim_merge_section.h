/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */
#ifndef _C_P027V1_tracksim_merge_sectio
#define _C_P027V1_tracksim_merge_sectio

#include "kcg_types.h"
#include "SEND_MessageData_TM_lib_interna.h"
#include "SEND_WriteMessageHeader_TM_lib_.h"
#include "C_P027V1_tracksim_compr_one_sec.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections */
extern void C_P027V1_tracksim_merge_section(
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::i */ kcg_int i,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::PacketStream_in */ CompressedPackets_T_Common_Type *PacketStream_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::P027V1_sections_from_track */ P027V1_section_int_T_TM_baselin *P027V1_sections_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::n_iter */ kcg_int n_iter,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::meta_first_section_in */ kcg_int meta_first_section_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::q_dir */ Q_DIR q_dir,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::cont */ kcg_bool *cont,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::Packets_Out */ CompressedPackets_T_Common_Type *Packets_Out);

#endif /* _C_P027V1_tracksim_merge_sectio */
/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_tracksim_merge_section.h
** Generation date: 2015-11-10T22:49:41
*************************************************************$ */

