/*
 * Nondirect1.c
 *
 * Code generation for function 'Nondirect1'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "Nondirect1.h"
#include "setup.h"

/* Function Definitions */
void Nondirect_stepImpl(commcodegen_BPSKModulator *obj, const real_T varargin_1
  [563], creal_T varargout_1[563])
{
  commcodegen_BPSKModulator *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv34[2] = { 563, 1 };

  b_obj = obj;
  Outputs(&b_obj->cSFunObject, varargin_1, iv34, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 563U * sizeof(creal_T));
}

void b_Nondirect_stepImpl(commcodegen_BPSKModulator *obj, const real_T
  varargin_1[13], creal_T varargout_1[13])
{
  commcodegen_BPSKModulator *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv35[2] = { 13, 1 };

  b_obj = obj;
  Outputs(&b_obj->cSFunObject, varargin_1, iv35, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 13U * sizeof(creal_T));
}

void c_Nondirect_stepImpl(commcodegen_BPSKModulator_1 *obj, const real_T
  varargin_1[563], creal_T varargout_1[563])
{
  commcodegen_BPSKModulator_1 *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv75[2] = { 563, 1 };

  b_obj = obj;
  b_Outputs(&b_obj->cSFunObject, varargin_1, iv75, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 563U * sizeof(creal_T));
}

void d_Nondirect_stepImpl(commcodegen_BPSKModulator_1 *obj, const real_T
  varargin_1[13], creal_T varargout_1[13])
{
  commcodegen_BPSKModulator_1 *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv76[2] = { 13, 1 };

  b_obj = obj;
  b_Outputs(&b_obj->cSFunObject, varargin_1, iv76, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 13U * sizeof(creal_T));
}

void e_Nondirect_stepImpl(commcodegen_BPSKModulator_2 *obj, const real_T
  varargin_1[563], creal_T varargout_1[563])
{
  commcodegen_BPSKModulator_2 *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv98[2] = { 563, 1 };

  b_obj = obj;
  c_Outputs(&b_obj->cSFunObject, varargin_1, iv98, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 563U * sizeof(creal_T));
}

void f_Nondirect_stepImpl(commcodegen_BPSKModulator_2 *obj, const real_T
  varargin_1[13], creal_T varargout_1[13])
{
  commcodegen_BPSKModulator_2 *b_obj;
  int32_T tmp_size[2];
  creal_T tmp_data[563];
  static int32_T iv99[2] = { 13, 1 };

  b_obj = obj;
  c_Outputs(&b_obj->cSFunObject, varargin_1, iv99, tmp_data, tmp_size);
  memcpy(&varargout_1[0], &tmp_data[0], 13U * sizeof(creal_T));
}

/* End of code generation (Nondirect1.c) */