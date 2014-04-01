/*
 * colon.c
 *
 * Code generation for function 'colon'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "colon.h"
#include "OFDMDemodulator.h"
#include "PHYReceive.h"
#include "testPHYReceive_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo s_emlrtMCI = { 405, 5, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtMCInfo t_emlrtMCI = { 404, 15, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo au_emlrtRSI = { 404, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtRSInfo ju_emlrtRSI = { 405, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

/* Function Definitions */
void assert_pmaxsize(const emlrtStack *sp, boolean_T p)
{
  const mxArray *y;
  static const int32_T iv109[2] = { 1, 21 };

  const mxArray *m19;
  char_T cv122[21];
  int32_T i;
  static const char_T cv123[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  if (p) {
  } else {
    y = NULL;
    m19 = mxCreateCharArray(2, iv109);
    for (i = 0; i < 21; i++) {
      cv122[i] = cv123[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m19, cv122);
    emlrtAssign(&y, m19);
    st.site = &au_emlrtRSI;
    b_st.site = &ju_emlrtRSI;
    b_error(&st, b_message(&b_st, y, &s_emlrtMCI), &t_emlrtMCI);
  }
}

void b_float_colon_length(int32_T *n, real_T *anew, real_T *bnew, boolean_T
  *n_too_large)
{
  *anew = 0.0;
  *bnew = 0.0002558;
  *n_too_large = FALSE;
  *n = 1280;
}

void float_colon_length(int32_T *n, real_T *anew, real_T *bnew, boolean_T
  *n_too_large)
{
  *anew = -1230.0;
  *bnew = 1230.0;
  *n_too_large = FALSE;
  *n = 2461;
}

/* End of code generation (colon.c) */