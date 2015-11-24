/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/model/Scade/System/OBU_PreIntegrations/Demonstrators/ERSA_EVC_Testrunner/config.txt
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Kr_intIterator_SDMConversionModelPkg.h"

/* SDMConversionModelPkg::Kr_intIterator */
void Kr_intIterator_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kr_intIterator::m_last */ kcg_int m_last,
  /* SDMConversionModelPkg::Kr_intIterator::Kr_int */ nvkrint_T_Packet_Types_Pkg *Kr_int,
  /* SDMConversionModelPkg::Kr_intIterator::L */ L_internal_Type_Obu_BasicTypes_Pkg L,
  /* SDMConversionModelPkg::Kr_intIterator::goOn */ kcg_bool *goOn,
  /* SDMConversionModelPkg::Kr_intIterator::m_now */ kcg_int *m_now)
{
  *goOn = (*Kr_int).valid & /* 1 */
    LengthLargerThanLKr_SDMConversionModelPkg(L, (*Kr_int).l_nvkrint);
  /* 1 */ if (*goOn) {
    *m_now = /* 1 */ TransformA_realToA_int_SDM_Types_Pkg((*Kr_int).m_nvkrint);
  }
  else {
    *m_now = m_last;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Kr_intIterator_SDMConversionModelPkg.c
** Generation date: 2015-11-24T10:24:41
*************************************************************$ */

