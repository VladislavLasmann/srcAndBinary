/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/Github/modeling/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/KCG-Releases/config.txt
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */
#ifndef _Kv_intIterator_SDMConversionModelPkg_H_
#define _Kv_intIterator_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "TransformA_realToA_int_SDM_Types_Pkg.h"
#include "interpolateMfromA_SDMConversionModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* SDMConversionModelPkg::Kv_intIterator */
extern void Kv_intIterator_SDMConversionModelPkg(
  /* SDMConversionModelPkg::Kv_intIterator::Kv_int */ nvkvint_T_Packet_Types_Pkg *Kv_int,
  /* SDMConversionModelPkg::Kv_intIterator::a */ A_internal_Type_Obu_BasicTypes_Pkg a,
  /* SDMConversionModelPkg::Kv_intIterator::a12 */ A_internal_Type_Obu_BasicTypes_Pkg a12,
  /* SDMConversionModelPkg::Kv_intIterator::a23 */ A_internal_Type_Obu_BasicTypes_Pkg a23,
  /* SDMConversionModelPkg::Kv_intIterator::P */ kcg_bool P,
  /* SDMConversionModelPkg::Kv_intIterator::goOn */ kcg_bool *goOn,
  /* SDMConversionModelPkg::Kv_intIterator::m */ kcg_int *m,
  /* SDMConversionModelPkg::Kv_intIterator::v */ V_internal_Type_Obu_BasicTypes_Pkg *v);

#endif /* _Kv_intIterator_SDMConversionModelPkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Kv_intIterator_SDMConversionModelPkg.h
** Generation date: 2015-12-03T13:41:22
*************************************************************$ */

