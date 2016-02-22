//IBM_PROLOG_BEGIN_TAG
//IBM_PROLOG_END_TAG

#ifndef cipInterpreter_h
#define cipInterpreter_h


/**
 @file cipInterpreter.H
 @brief eCMD CIP Extension Command Interpreter function prototypes
*/

//--------------------------------------------------------------------
// Includes
//--------------------------------------------------------------------
#include <inttypes.h>


#define ECMD_MAX_DATA_BITS        800000 
//--------------------------------------------------------------------
//  Forward References                                                
//--------------------------------------------------------------------
/**
 @brief Process user args and execute command requested
 @param argc Command line arguments
 @param argv Command line arguments
 @retval ECMD_SUCCESS On successful command
 @retval ECMD_INT_UNKNOWN_COMMAND If command is not valid
 @retval nonzero On command failure
 @pre Dll must be loaded - if applicable

 NOTE - should only be called for cip extension functions
*/
 
uint32_t cipCommandInterpreter(int argc, char* argv[]);



/** @name User Functions */
//@{

/* cipProcUser.C */
#ifndef CIP_REMOVE_INSTRUCTION_FUNCTIONS
uint32_t cipInstructUser(int argc, char* argv[]);
#endif // CIP_REMOVE_INSTRUCTION_FUNCTIONS

#ifndef CIP_REMOVE_BREAKPOINT_FUNCTIONS
uint32_t cipBreakpointUser(int argc, char* argv[]);
#endif // CIP_REMOVE_BREAKPOINT_FUNCTIONS

#ifndef CIP_REMOVE_VR_FUNCTIONS
uint32_t cipGetVrUser(int argc, char * argv[]);
uint32_t cipPutVrUser(int argc, char * argv[]);
#endif // CIP_REMOVE_VR_FUNCTIONS

#ifndef CIP_REMOVE_MEMORY_FUNCTIONS
uint32_t ecmdCipGetMemProcUser(int argc, char * argv[]);
uint32_t ecmdCipPutMemProcUser(int argc, char * argv[]);
uint32_t cipGetMemPbaUser(int argc, char * argv[]);
uint32_t cipPutMemPbaUser(int argc, char * argv[]);
uint32_t cipGetMemProcVarUser(int argc, char * argv[]);
uint32_t cipPutMemProcVarUser(int argc, char * argv[]);
#endif // CIP_REMOVE_MEMORY_FUNCTIONS

#ifndef CIP_REMOVE_VSR_FUNCTIONS
uint32_t cipGetVsrUser(int argc, char * argv[]);
uint32_t cipPutVsrUser(int argc, char * argv[]);
#endif // CIP_REMOVE_VSR_FUNCTIONS

/* cipPoreUser.C */
#ifndef CIP_REMOVE_PORE_FUNCTIONS
uint32_t cipPorePutScomUser(int argc, char * argv[]);
uint32_t cipPorePutSpyUser(int argc, char * argv[]);
uint32_t cipPorePutSprUser(int argc, char * argv[]);
uint32_t cipPoreQueryImageUser(int argc, char * argv[]);
uint32_t cipPoreLoadImageUser(int argc, char * argv[]);
#endif // CIP_REMOVE_PORE_FUNCTIONS

/* cipProcUser.C */
#ifndef CIP_REMOVE_RW_FUNCTIONS
uint32_t cipRWReadCacheUser(int argc, char * argv[]);
uint32_t cipRWReadTLBUser(int argc, char * argv[]);
uint32_t cipRWReadMemUser(int argc, char * argv[]);
uint32_t cipRWWriteMemUser(int argc, char * argv[]);
uint32_t cipRWGetDcrUser(int argc, char * argv[]);
uint32_t cipRWPutDcrUser(int argc, char * argv[]);
uint32_t cipRWProcStatusUser(int argc, char * argv[]);
#endif // CIP_REMOVE_RW_FUNCTIONS

/* cipProcUser.C */
#ifndef CIP_REMOVE_PMC_VOLTAGE_FUNCTIONS
uint32_t cipGetPmcVoltageUser(int argc, char * argv[]);
uint32_t cipPutPmcVoltageUser(int argc, char * argv[]);
#endif // CIP_REMOVE_PMC_VOLTAGE_FUNCTIONS

//@}

#endif /* cipInterpreter_h */