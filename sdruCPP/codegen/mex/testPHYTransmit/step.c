/*
 * step.c
 *
 * Code generation for function 'step'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "step.h"

/* Function Definitions */
void Destructor(comm_PNSequence_2 *obj)
{
  /* System object Destructor function: comm.PNSequence */
  if (obj->S0_isInitialized) {
    obj->S0_isInitialized = FALSE;
    if (!obj->S1_isReleased) {
      obj->S1_isReleased = TRUE;
    }
  }
}

void b_Destructor(comm_PNSequence_5 *obj)
{
  /* System object Destructor function: comm.PNSequence */
  if (obj->S0_isInitialized) {
    obj->S0_isInitialized = FALSE;
    if (!obj->S1_isReleased) {
      obj->S1_isReleased = TRUE;
    }
  }
}

void c_Destructor(comm_PNSequence_9 *obj)
{
  /* System object Destructor function: comm.PNSequence */
  if (obj->S0_isInitialized) {
    obj->S0_isInitialized = FALSE;
    if (!obj->S1_isReleased) {
      obj->S1_isReleased = TRUE;
    }
  }
}

/* End of code generation (step.c) */