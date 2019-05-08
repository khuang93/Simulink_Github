/*
 * MATLAB0.c
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

#include "MATLAB0.h"
#include "MATLAB0_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_MATLAB0_T MATLAB0_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_MATLAB0_T MATLAB0_Y;

/* Real-time model */
RT_MODEL_MATLAB0_T MATLAB0_M_;
RT_MODEL_MATLAB0_T *const MATLAB0_M = &MATLAB0_M_;

/* Model output function */
void MATLAB0_output(void)
{
  int32_T b_index;
  boolean_T data_append[14];
  int32_T tmp_index;
  int32_T data_start;
  boolean_T tmp[4];
  int32_T idx;
  int32_T b_ii;
  int8_T current_data_tmp[4];
  boolean_T tmp_data[8];
  boolean_T tmp_data_0[18];
  int32_T loop_ub;
  int32_T ii_size_idx_1;
  int8_T ii_data_idx_0;
  boolean_T current_data_idx_0;
  boolean_T current_data_idx_1;
  boolean_T current_data_idx_2;
  boolean_T current_data_idx_3;
  int32_T exitg1;
  boolean_T exitg2;

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  Inport: '<Root>/data'
   */
  b_index = 1;
  for (ii_size_idx_1 = 0; ii_size_idx_1 < 10; ii_size_idx_1++) {
    data_append[ii_size_idx_1] = MATLAB0_U.data[ii_size_idx_1];
  }

  data_append[10] = false;
  current_data_idx_0 = data_append[0];
  data_append[11] = false;
  current_data_idx_1 = data_append[1];
  data_append[12] = false;
  current_data_idx_2 = data_append[2];
  data_append[13] = false;
  current_data_idx_3 = data_append[3];
  do {
    exitg1 = 0;
    current_data_idx_0 = (MATLAB0_U.gen_poly[0] != 0.0) ^ current_data_idx_0;
    current_data_tmp[0] = (int8_T)current_data_idx_0;
    tmp[0] = current_data_idx_0;
    current_data_idx_0 = (MATLAB0_U.gen_poly[1] != 0.0) ^ current_data_idx_1;
    current_data_tmp[1] = (int8_T)current_data_idx_0;
    tmp[1] = current_data_idx_0;
    current_data_idx_0 = (MATLAB0_U.gen_poly[2] != 0.0) ^ current_data_idx_2;
    current_data_tmp[2] = (int8_T)current_data_idx_0;
    tmp[2] = current_data_idx_0;
    current_data_idx_0 = (MATLAB0_U.gen_poly[3] != 0.0) ^ current_data_idx_3;
    current_data_tmp[3] = (int8_T)current_data_idx_0;
    tmp[3] = current_data_idx_0;
    idx = 0;
    ii_size_idx_1 = 1;
    b_ii = 0;
    exitg2 = false;
    while ((!exitg2) && (b_ii < 4)) {
      if (current_data_tmp[b_ii] != 0) {
        idx = 1;
        exitg2 = true;
      } else {
        b_ii++;
      }
    }

    if (idx == 0) {
      ii_size_idx_1 = 0;
    }

    if (ii_size_idx_1 == 1) {
      b_ii = 0;
      exitg2 = false;
      while ((!exitg2) && (b_ii < 4)) {
        if (current_data_tmp[b_ii] != 0) {
          ii_data_idx_0 = (int8_T)(b_ii + 1);
          exitg2 = true;
        } else {
          b_ii++;
        }
      }

      tmp_index = ii_data_idx_0;
    } else {
      tmp_index = 5;
    }

    data_start = b_index;
    idx = b_index;
    b_index = (b_index + tmp_index) - 1;
    if (b_index > 10) {
      exitg1 = 1;
    } else {
      if (tmp_index > 4) {
        idx = -1;
        b_ii = -1;
      } else {
        idx = tmp_index - 2;
        b_ii = 3;
      }

      tmp_index = (data_start + tmp_index) + 2;
      if (data_start + 4 > tmp_index) {
        data_start = 0;
        tmp_index = 0;
      } else {
        data_start += 3;
      }

      loop_ub = b_ii - idx;
      for (ii_size_idx_1 = 0; ii_size_idx_1 < loop_ub; ii_size_idx_1++) {
        tmp_data_0[ii_size_idx_1] = tmp[(idx + ii_size_idx_1) + 1];
      }

      loop_ub = tmp_index - data_start;
      for (ii_size_idx_1 = 0; ii_size_idx_1 < loop_ub; ii_size_idx_1++) {
        tmp_data_0[(ii_size_idx_1 + b_ii) - idx] = data_append[data_start +
          ii_size_idx_1];
      }

      current_data_idx_0 = tmp_data_0[0];
      current_data_idx_1 = tmp_data_0[1];
      current_data_idx_2 = tmp_data_0[2];
      current_data_idx_3 = tmp_data_0[3];
    }
  } while (exitg1 == 0);

  if (12 - idx > 4) {
    b_index = -1;
    idx = -1;
  } else {
    b_index = 10 - idx;
    idx = 3;
  }

  b_ii = idx - b_index;
  tmp_index = 4 - (int8_T)b_ii;
  for (ii_size_idx_1 = 0; ii_size_idx_1 < b_ii; ii_size_idx_1++) {
    tmp_data[ii_size_idx_1] = tmp[(b_index + ii_size_idx_1) + 1];
  }

  if (0 <= tmp_index - 1) {
    memset(&tmp_data[idx - b_index], 0, ((((tmp_index + idx) - b_index) - idx) +
            b_index) * sizeof(boolean_T));
  }

  for (ii_size_idx_1 = 0; ii_size_idx_1 < 10; ii_size_idx_1++) {
    /* Outport: '<Root>/data_with_CRC' incorporates:
     *  Inport: '<Root>/data'
     */
    MATLAB0_Y.data_with_CRC[ii_size_idx_1] = MATLAB0_U.data[ii_size_idx_1];
  }

  /* Outport: '<Root>/data_with_CRC' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function1'
   */
  MATLAB0_Y.data_with_CRC[10] = tmp_data[0];
  MATLAB0_Y.data_with_CRC[11] = tmp_data[1];
  MATLAB0_Y.data_with_CRC[12] = tmp_data[2];
}

/* Model update function */
void MATLAB0_update(void)
{
  /* (no update code required) */
}

/* Model initialize function */
void MATLAB0_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(MATLAB0_M, (NULL));

  /* external inputs */
  (void)memset(&MATLAB0_U, 0, sizeof(ExtU_MATLAB0_T));

  /* external outputs */
  (void) memset(&MATLAB0_Y.data_with_CRC[0], 0,
                13U*sizeof(boolean_T));
}

/* Model terminate function */
void MATLAB0_terminate(void)
{
  /* (no terminate code required) */
}
