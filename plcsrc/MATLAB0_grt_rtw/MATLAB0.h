/*
 * MATLAB0.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "MATLAB0".
 *
 * Model version              : 1.76
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C source code generated on : Wed May  8 01:35:56 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_MATLAB0_h_
#define RTW_HEADER_MATLAB0_h_
#include <string.h>
#include <stddef.h>
#ifndef MATLAB0_COMMON_INCLUDES_
# define MATLAB0_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* MATLAB0_COMMON_INCLUDES_ */

#include "MATLAB0_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T data[10];                  /* '<Root>/data' */
  real_T gen_poly[4];                  /* '<Root>/gen_poly' */
} ExtU_MATLAB0_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T data_with_CRC[13];         /* '<Root>/data_with_CRC' */
} ExtY_MATLAB0_T;

/* Real-time Model Data Structure */
struct tag_RTM_MATLAB0_T {
  const char_T *errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_MATLAB0_T MATLAB0_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_MATLAB0_T MATLAB0_Y;

/* Model entry point functions */
extern void MATLAB0_initialize(void);
extern void MATLAB0_output(void);
extern void MATLAB0_update(void);
extern void MATLAB0_terminate(void);

/* Real-time Model object */
extern RT_MODEL_MATLAB0_T *const MATLAB0_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('CRC_Test/Subsystem2/MATLAB Function1')    - opens subsystem CRC_Test/Subsystem2/MATLAB Function1
 * hilite_system('CRC_Test/Subsystem2/MATLAB Function1/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CRC_Test/Subsystem2'
 * '<S1>'   : 'CRC_Test/Subsystem2/MATLAB Function1'
 */
#endif                                 /* RTW_HEADER_MATLAB0_h_ */
