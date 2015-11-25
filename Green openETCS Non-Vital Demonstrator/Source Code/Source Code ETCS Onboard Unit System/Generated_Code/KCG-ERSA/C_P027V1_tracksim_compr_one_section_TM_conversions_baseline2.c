/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section */
void C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::i */ kcg_int i1,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::P027V1_sections_from_track */ P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::meta_first_section_in */ kcg_int meta_first_section_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::q_dir */ Q_DIR q_dir,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section::P027V1_sections_compressed */ CompressedPacketData_T_Common_Types_Pkg *P027V1_sections_compressed)
{
  kcg_int i;
  
  (*Header).nid_packet = i1 + meta_first_section_in;
  (*Header).q_dir = q_dir;
  (*Header).valid = kcg_true;
  (*Header).startAddress = 0;
  (&(&(*P027V1_sections_compressed)[0])[0])[0] =
    (*P027V1_sections_from_track).D_STATIC;
  (&(&(*P027V1_sections_compressed)[0])[0])[1] =
    (*P027V1_sections_from_track).V_STATIC;
  (&(&(*P027V1_sections_compressed)[0])[0])[2] =
    (*P027V1_sections_from_track).Q_FRONT;
  (&(&(*P027V1_sections_compressed)[0])[0])[3] =
    (*P027V1_sections_from_track).N_ITER;
  /* 2 */
  C_P027_flatten_sections_qdiff_TM_lib_internal(
    &(*P027V1_sections_from_track).SECTIONS_q_diff,
    (P027V1_sections_array_flat_qdiff_T_TM_baseline2 *)
      &(&(*P027V1_sections_compressed)[0])[4]);
  for (i = 0; i < 432; i++) {
    (&(*P027V1_sections_compressed)[68])[i] = 0;
  }
  (*Header).endAddress = /* 2 */
    T_DeterminePacketSizeInt_TM_lib_internal(
      (*P027V1_sections_from_track).N_ITER,
      4,
      2) - 1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.c
** Generation date: 2015-11-25T12:17:42
*************************************************************$ */

