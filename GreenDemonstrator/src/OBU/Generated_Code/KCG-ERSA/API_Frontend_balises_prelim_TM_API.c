/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "API_Frontend_balises_prelim_TM_API.h"

/* TM_API::API_Frontend_balises_prelim */
void API_Frontend_balises_prelim_TM_API(
  /* TM_API::API_Frontend_balises_prelim::telegram_header */ BaliseTelegramHeader_int_T_TM *telegram_header,
  /* TM_API::API_Frontend_balises_prelim::packets_in */ CompressedPackets_T_Common_Types_Pkg *packets_in,
  /* TM_API::API_Frontend_balises_prelim::P001 */ P001_trackside_int_T_TM *P001,
  /* TM_API::API_Frontend_balises_prelim::P002 */ P002_trackside_int_T_TM *P002,
  /* TM_API::API_Frontend_balises_prelim::P003_baseline2 */ P003V1_trackside_int_T_TM_baseline2 *P003_baseline2,
  /* TM_API::API_Frontend_balises_prelim::P005 */ P005_trackside_int_T_TM *P005,
  /* TM_API::API_Frontend_balises_prelim::P012 */ P012_trackside_int_T_TM *P012,
  /* TM_API::API_Frontend_balises_prelim::P015 */ P015_trackside_int_T_TM *P015,
  /* TM_API::API_Frontend_balises_prelim::P016 */ P016_trackside_int_T_TM *P016,
  /* TM_API::API_Frontend_balises_prelim::P021 */ P021_trackside_int_T_TM *P021,
  /* TM_API::API_Frontend_balises_prelim::P027_baseline2 */ P027V1_trackside_int_T_TM_baseline2 *P027_baseline2,
  /* TM_API::API_Frontend_balises_prelim::P039_baseline2 */ P039V1_trackside_int_T_TM_baseline2 *P039_baseline2,
  /* TM_API::API_Frontend_balises_prelim::P040 */ P040_trackside_int_T_TM *P040,
  /* TM_API::API_Frontend_balises_prelim::P041 */ P041_trackside_int_T_TM *P041,
  /* TM_API::API_Frontend_balises_prelim::P042 */ P042_trackside_int_T_TM *P042,
  /* TM_API::API_Frontend_balises_prelim::P045 */ P045_trackside_int_T_TM *P045,
  /* TM_API::API_Frontend_balises_prelim::P046 */ P046_trackside_int_T_TM *P046,
  /* TM_API::API_Frontend_balises_prelim::P057 */ P057_trackside_int_T_TM *P057,
  /* TM_API::API_Frontend_balises_prelim::P058 */ P058_trackside_int_T_TM *P058,
  /* TM_API::API_Frontend_balises_prelim::P064 */ P064_trackside_int_T_TM *P064,
  /* TM_API::API_Frontend_balises_prelim::P065 */ P065_trackside_int_T_TM *P065,
  /* TM_API::API_Frontend_balises_prelim::P066 */ P066_trackside_int_T_TM *P066,
  /* TM_API::API_Frontend_balises_prelim::P071 */ P071_trackside_int_T_TM *P071,
  /* TM_API::API_Frontend_balises_prelim::P072_baseline2 */ P072V1_trackside_int_T_TM_baseline2 *P072_baseline2,
  /* TM_API::API_Frontend_balises_prelim::P080 */ P080_trackside_int_T_TM *P080,
  /* TM_API::API_Frontend_balises_prelim::P131 */ P131_trackside_int_T_TM *P131,
  /* TM_API::API_Frontend_balises_prelim::P132 */ P132_trackside_int_T_TM *P132,
  /* TM_API::API_Frontend_balises_prelim::P133 */ P133_trackside_int_T_TM *P133,
  /* TM_API::API_Frontend_balises_prelim::P134 */ P134_trackside_int_T_TM *P134,
  /* TM_API::API_Frontend_balises_prelim::P135 */ P135_trackside_int_T_TM *P135,
  /* TM_API::API_Frontend_balises_prelim::P136 */ P136_trackside_int_T_TM *P136,
  /* TM_API::API_Frontend_balises_prelim::P137 */ P137_trackside_int_T_TM *P137,
  /* TM_API::API_Frontend_balises_prelim::P138 */ P138_trackside_int_T_TM *P138,
  /* TM_API::API_Frontend_balises_prelim::P139 */ P139_trackside_int_T_TM *P139,
  /* TM_API::API_Frontend_balises_prelim::P140 */ P140_trackside_int_T_TM *P140,
  /* TM_API::API_Frontend_balises_prelim::P141 */ P141_trackside_int_T_TM *P141,
  /* TM_API::API_Frontend_balises_prelim::P143 */ P143_trackside_int_T_TM *P143,
  /* TM_API::API_Frontend_balises_prelim::P145 */ P145_trackside_int_T_TM *P145,
  /* TM_API::API_Frontend_balises_prelim::P254 */ P254_trackside_int_T_TM *P254,
  /* TM_API::API_Frontend_balises_prelim::P255 */ P255_trackside_int_T_TM *P255,
  /* TM_API::API_Frontend_balises_prelim::telegram_out */ CompressedBaliseMessage_TM *telegram_out)
{
  kcg_copy_BaliseTelegramHeader_int_T_TM(
    &(*telegram_out).Header,
    telegram_header);
  /* 1 */
  SEND_MergePackets_TM_API(
    packets_in,
    P001,
    P002,
    P003_baseline2,
    P005,
    P012,
    P015,
    P016,
    P021,
    P027_baseline2,
    P039_baseline2,
    P040,
    P041,
    P042,
    P045,
    P046,
    P057,
    P058,
    P064,
    P065,
    P066,
    P071,
    P072_baseline2,
    P080,
    P131,
    P132,
    P133,
    P134,
    P135,
    P136,
    P137,
    P138,
    P139,
    P140,
    P141,
    P143,
    P145,
    P254,
    P255,
    &(*telegram_out).Messages);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** API_Frontend_balises_prelim_TM_API.c
** Generation date: 2015-12-10T15:16:03
*************************************************************$ */

