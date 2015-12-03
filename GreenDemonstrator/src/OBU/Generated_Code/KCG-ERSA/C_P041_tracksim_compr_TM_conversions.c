/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P041_tracksim_compr */
void C_P041_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P041_tracksim_compr::P041_from_track */ P041_trackside_int_T_TM *P041_from_track,
  /* TM_conversions::C_P041_tracksim_compr::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions::C_P041_tracksim_compr::P005_compressed */ CompressedPacketData_T_Common_Types_Pkg *P005_compressed)
{
  /* TM_conversions::C_P041_tracksim_compr */ P041_OBU_sectionlist_int_T_TM tmp;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _1_else_clock_1_IfBlock1;
  kcg_int i;
  
  (&tmp[0])[0].M_LEVELTR = (*P041_from_track).M_LEVELTR;
  (&tmp[0])[0].NID_NTC = (*P041_from_track).NID_NTC;
  (&tmp[0])[0].L_ACKLEVELTR = (*P041_from_track).L_ACKLEVELTR;
  (&(&(&(*P005_compressed)[0])[0])[0])[0] = (*P041_from_track).NID_PACKET;
  (&(&(&(*P005_compressed)[0])[0])[0])[1] = (*P041_from_track).Q_DIR;
  (&(&(&(*P005_compressed)[0])[0])[0])[2] = (*P041_from_track).L_PACKET;
  (&(&(&(*P005_compressed)[0])[0])[0])[3] = (*P041_from_track).Q_SCALE;
  (&(&(&(*P005_compressed)[0])[0])[0])[4] = (*P041_from_track).D_LEVELTR;
  (*Header).valid = (*P041_from_track).valid;
  (*Header).startAddress = 0;
  IfBlock1_clock_1 = (*P041_from_track).Q_DIR ==
    INT_Q_DIR_nomiinal_TM_conversions;
  (*Header).nid_packet = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      (*P041_from_track).NID_PACKET,
      (*P041_from_track).Q_DIR,
      0,
      41,
      INT_M_VERSION_2_0_TM);
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*Header).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*P041_from_track).Q_DIR ==
      INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*Header).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = (*P041_from_track).Q_DIR ==
        INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  (*Header).endAddress = /* 1 */
    T_DeterminePacketSizeInt_TM_lib_internal(
      (*P041_from_track).N_ITER,
      5 + 1 + 3,
      3) - 1;
  (&(&(&(*P005_compressed)[0])[0])[5])[0] = (*P041_from_track).N_ITER;
  kcg_copy_P041_trackide_sectionlist_T_TM(
    &tmp[1],
    &(*P041_from_track).SECTIONS);
  /* 1 */
  C_P041_flatten_sections_TM_lib_internal(
    &tmp,
    (P041_sections_array_flat_T_TM *) &(&(*P005_compressed)[0])[6]);
  for (i = 0; i < 395; i++) {
    (&(*P005_compressed)[105])[i] = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P041_tracksim_compr_TM_conversions.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

