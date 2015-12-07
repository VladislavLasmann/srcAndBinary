/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config R:/Repositories/modeling/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"

/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs */
kcg_bool Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::n_pig_1 */ N_PIG n_pig_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::m_dup_1 */ M_DUP m_dup_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::n_pig_2 */ N_PIG n_pig_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::m_dup_2 */ M_DUP m_dup_2,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::crcCheck_1 */ kcg_bool crcCheck_1,
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::crcCheck_2 */ kcg_bool crcCheck_2)
{
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs */ kcg_int tmp1;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs */ kcg_int tmp;
  /* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs::valid */ kcg_bool valid;
  
  tmp1 = /* 2 */ N_PIG2int_CheckBGConsistency_Pkg_SubFunction(n_pig_2);
  tmp = /* 1 */ N_PIG2int_CheckBGConsistency_Pkg_SubFunction(n_pig_1);
  switch (tmp1 - tmp) {
    case 1 :
      valid = /* 1 */
        Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          m_dup_1,
          m_dup_2,
          crcCheck_1,
          crcCheck_2);
      break;
    case 2 :
      valid = /* 1 */
        Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          m_dup_1,
          m_dup_2,
          crcCheck_1,
          crcCheck_2);
      break;
    case 3 :
      valid = /* 1 */
        Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          m_dup_1,
          m_dup_2,
          crcCheck_1,
          crcCheck_2);
      break;
    case -1 :
      valid = /* 2 */
        Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          m_dup_2,
          m_dup_1,
          crcCheck_2,
          crcCheck_1);
      break;
    case -2 :
      valid = /* 2 */
        Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          m_dup_2,
          m_dup_1,
          crcCheck_2,
          crcCheck_1);
      break;
    case -3 :
      valid = /* 2 */
        Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
          m_dup_2,
          m_dup_1,
          crcCheck_2,
          crcCheck_1);
      break;
    
    default :
      valid = kcg_false;
  }
  return valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.c
** Generation date: 2015-12-07T14:47:40
*************************************************************$ */

