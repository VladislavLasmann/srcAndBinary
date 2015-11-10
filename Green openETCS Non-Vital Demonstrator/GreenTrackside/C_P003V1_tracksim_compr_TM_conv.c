/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/DB-Data/Github/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/GreenTrackside/config.txt
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_tracksim_compr_TM_conv.h"

/* TM_conversions_baseline2::C_P003V1_tracksim_compr */
void C_P003V1_tracksim_compr_TM_conv(
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::P003V1_from_track */ P003V1_trackside_int_T_TM_basel *P003V1_from_track,
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::Header */ MetadataElement_T_Common_Types_ *Header,
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::P003V1_compressed */ CompressedPacketData_T_Common_T *P003V1_compressed)
{
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _1_else_clock_1_IfBlock1;
  static kcg_int i;
  
  (&(&(*P003V1_compressed)[0])[0])[0] = (*P003V1_from_track).NID_PACKET;
  (&(&(*P003V1_compressed)[0])[0])[1] = (*P003V1_from_track).Q_DIR;
  (&(&(*P003V1_compressed)[0])[0])[2] = (*P003V1_from_track).L_PACKET;
  (&(&(*P003V1_compressed)[0])[0])[3] = (*P003V1_from_track).Q_SCALE;
  (&(&(*P003V1_compressed)[0])[0])[4] = (*P003V1_from_track).D_VALIDNV;
  (&(&(*P003V1_compressed)[0])[0])[5] = (*P003V1_from_track).N_ITER;
  (&(&(*P003V1_compressed)[0])[0])[6] = (*P003V1_from_track).V_NVSHUNT;
  (&(&(*P003V1_compressed)[0])[0])[7] = (*P003V1_from_track).V_NVSTFF;
  (&(&(*P003V1_compressed)[0])[0])[8] = (*P003V1_from_track).V_NVONSIGHT;
  (&(&(*P003V1_compressed)[0])[0])[9] = (*P003V1_from_track).V_NVUNFIT;
  (&(&(*P003V1_compressed)[0])[0])[10] = (*P003V1_from_track).V_NVREL;
  (&(&(*P003V1_compressed)[0])[0])[11] = (*P003V1_from_track).D_NVROLL;
  (&(&(*P003V1_compressed)[0])[0])[12] = (*P003V1_from_track).Q_NVSRBKTRG;
  (&(&(*P003V1_compressed)[0])[0])[13] = (*P003V1_from_track).Q_NVEMRRLS;
  (&(&(*P003V1_compressed)[0])[0])[14] = (*P003V1_from_track).V_NVALLOWOVTRP;
  (&(&(*P003V1_compressed)[0])[0])[15] = (*P003V1_from_track).V_NVSUPOVTRP;
  (&(&(*P003V1_compressed)[0])[0])[16] = (*P003V1_from_track).D_NVOVTRP;
  (&(&(*P003V1_compressed)[0])[0])[17] = (*P003V1_from_track).T_NVOVTRP;
  (&(&(*P003V1_compressed)[0])[0])[18] = (*P003V1_from_track).D_NVPOTRP;
  (&(&(*P003V1_compressed)[0])[0])[19] = (*P003V1_from_track).M_NVCONTACT;
  (&(&(*P003V1_compressed)[0])[0])[20] = (*P003V1_from_track).T_NVCONTACT;
  (&(&(*P003V1_compressed)[0])[0])[21] = (*P003V1_from_track).M_NVDERUN;
  (&(&(*P003V1_compressed)[0])[0])[22] = (*P003V1_from_track).D_NVSTFF;
  (&(&(*P003V1_compressed)[0])[0])[23] = (*P003V1_from_track).Q_NVDRIVER_ADHES;
  (*Header).valid = (*P003V1_from_track).valid;
  (*Header).startAddress = 0;
  IfBlock1_clock_1 = (*P003V1_from_track).Q_DIR ==
    INT_Q_DIR_nomiinal_TM_conversio;
  (*Header).nid_packet = /* 2 */
    T_Build_Metadata_Packet_ID_TM_l(
      (*P003V1_from_track).NID_PACKET,
      (*P003V1_from_track).Q_DIR,
      0,
      3,
      INT_M_VERSION_1_0_TM);
  /* 1_ck_IfBlock1 */ if (IfBlock1_clock_1) {
    (*Header).q_dir = ENUM_Q_DIR_nominal_TM_conversio;
  }
  else {
    _1_else_clock_1_IfBlock1 = (*P003V1_from_track).Q_DIR ==
      INT_Q_DIR_reverse_TM_conversion;
    /* 1_ck_anon_activ */ if (_1_else_clock_1_IfBlock1) {
      (*Header).q_dir = ENUM_Q_DIR_reverse_TM_conversio;
    }
    else {
      else_clock_1_IfBlock1 = (*P003V1_from_track).Q_DIR ==
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
    T_DeterminePacketSizeInt_TM_lib((*P003V1_from_track).N_ITER, 6 + 17, 1) - 1;
  kcg_copy_P003V1_trackide_sectio(
    &(*P003V1_compressed)[24],
    &(*P003V1_from_track).SECTIONS);
  for (i = 0; i < 444; i++) {
    (&(*P003V1_compressed)[56])[i] = 0;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003V1_tracksim_compr_TM_conv.c
** Generation date: 2015-11-10T22:49:42
*************************************************************$ */

