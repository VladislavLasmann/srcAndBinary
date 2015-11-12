#ifndef ROOT_SCRIPTED_TESTBENCH_ENVSIM_INTERFACE
#define ROOT_SCRIPTED_TESTBENCH_ENVSIM_INTERFACE


#include "NewSmuTypes.h"
#include "kcg_types.h"
#include "ROOT_Scripted_Testbench_EnvSim.h"

extern SimSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern outC_ROOT_Scripted_Testbench_EnvSim outputs_ctx;

/* separate_io: inputs declaration */

/* separate_io: outputs declaration */
/*******************************
 * Validity
 *******************************/
extern int valid(void*);
extern int notvalid(void*);

#ifdef EXTENDED_SIM
void BeforeSimInit();
void AfterSimInit();
void BeforeSimStep();
void AfterSimStep();
void ExtendedSimStop();
void ExtendedGatherDumpData(char * pData);
void ExtendedRestoreDumpData(const char * pData);
int ExtendedGetDumpSize();
void UpdateValues();
extern void UpdateSimulatorValues();
extern int GraphicalInputsConnected;
#endif /* EXTENDED_SIM */

#define SIM_INFO    1
#define SIM_WARNING 2
#define SIM_ERROR   3
extern void SsmOutputMessage(int level, const char* str);

#endif /*ROOT_SCRIPTED_TESTBENCH_ENVSIM_INTERFACE */
