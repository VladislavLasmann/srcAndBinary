/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P039V1_tracksim_compr_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P039V1_tracksim_compr */
void C_P039V1_tracksim_compr_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P039V1_tracksim_compr::P039V1_from_track */ P039V1_trackside_int_T_TM_baseline2 *P039V1_from_track,
  /* TM_conversions_baseline2::C_P039V1_tracksim_compr::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_conversions_baseline2::C_P039V1_tracksim_compr::P001_compressed */ CompressedPacketData_T_Common_Types_Pkg *P001_compressed)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */ kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */ kcg_bool _1_else_clock_1_IfBlock1;
  kcg_int i;
  
  (&(*P001_compressed)[0])[0] = (*P039V1_from_track).NID_PACKET;
  (&(*P001_compressed)[0])[1] = (*P039V1_from_track).Q_DIR;
  (&(*P001_compressed)[0])[2] = (*P039V1_from_track).L_PACKET;
  (&(*P001_compressed)[0])[3] = (*P039V1_from_track).Q_SCALE;
  (&(*P001_compressed)[0])[4] = (*P039V1_from_track).D_TRACTION;
  (&(*P001_compressed)[0])[5] = (*P039V1_from_track).M_TRACTION;
  (*Header).valid = (*P039V1_from_track).valid;
  (*Header).startAddress = 0;
  (*Header).endAddress = DIM_MaxElementsPacket039V1_TM - 1;
  IfBlock1_clock_1 = (*P039V1_from_track).Q_DIR ==
    INT_Q_DIR_nomiinal_TM_conversions;
  (*Header).nid_packet = /* 1 */
    T_Build_Metadata_Packet_ID_TM_lib_internal(
      (*P039V1_from_track).NID_PACKET,
      (*P039V1_from_track).Q_DIR,
      0,
      39,
      INT_M_VERSION_1_0_TM);
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*Header).q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*P039V1_from_track).Q_DIR ==
      INT_Q_DIR_reverse_TM_conversions;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*Header).q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_IfBlock1 = (*P039V1_from_track).Q_DIR ==
        INT_Q_DIR_both_TM_conversions;
      /* 1_ck_anon_activ */ if (else_clock_1_IfBlock1) {
        (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        (*Header).q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  for (i = 0; i < 494; i++) {
    (&(*P001_compressed)[6])[i] = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P039V1_tracksim_compr_TM_conversions_baseline2.c
** Generation date: 2015-12-02T15:32:29
*************************************************************$ */

