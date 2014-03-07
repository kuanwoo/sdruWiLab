/*
 * OFDMDemodulator.c
 *
 * Code generation for function 'OFDMDemodulator'
 *
 * C source code generated on: Thu Mar  6 19:04:23 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "OFDMDemodulator.h"
#include "eml_int_forloop_overflow_check.h"
#include "testMACTransmitter_emxutil.h"
#include "eml_error.h"
#include "testMACTransmitter_mexutil.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo hd_emlrtRSI = { 31, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

static emlrtRSInfo id_emlrtRSI = { 35, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

static emlrtRSInfo jd_emlrtRSI = { 40, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

static emlrtRSInfo kd_emlrtRSI = { 41, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

static emlrtRSInfo nd_emlrtRSI = { 49, "eml_fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fft.m" };

static emlrtRSInfo fj_emlrtRSI = { 29, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

static emlrtRSInfo gj_emlrtRSI = { 32, "eml_fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_fftshift.m" };

static emlrtRSInfo ft_emlrtRSI = { 152, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo gt_emlrtRSI = { 162, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo ht_emlrtRSI = { 168, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo it_emlrtRSI = { 172, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo jt_emlrtRSI = { 171, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRSInfo kt_emlrtRSI = { 14, "fft",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/fft.m" };

static emlrtRSInfo pt_emlrtRSI = { 16, "fftshift",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/fftshift.m" };

static emlrtRSInfo ut_emlrtRSI = { 22, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo vt_emlrtRSI = { 41, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo su_emlrtRSI = { 176, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtMCInfo ob_emlrtMCI = { 42, 9, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo pb_emlrtMCI = { 41, 19, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo qb_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo rb_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRTEInfo tb_emlrtRTEI = { 144, 24, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

static emlrtRTEInfo ub_emlrtRTEI = { 65, 1, "reshape",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtBCInfo y_emlrtBCI = { 1, 64, 171, 28, "postShift", "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m", 0 };

static emlrtDCInfo d_emlrtDCI = { 171, 28, "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m", 1 };

static emlrtBCInfo ab_emlrtBCI = { 1, 768, 171, 28, "postShift",
  "OFDMDemodulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m", 0 };

static emlrtRSInfo gw_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo nw_emlrtRSI = { 42, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

/* Function Definitions */
OFDMDemodulator_2 *OFDMDemodulator_OFDMDemodulator(const emlrtStack *sp,
  OFDMDemodulator_2 *object)
{
  OFDMDemodulator_2 *b_object;
  OFDMDemodulator_2 *obj;
  int8_T b_data[4];
  int32_T i;
  int32_T nb;
  int32_T x;
  int32_T exitg1;
  int32_T exponent;
  boolean_T p;
  boolean_T b1;
  int32_T i4;
  const mxArray *y;
  static const int32_T iv58[2] = { 1, 13 };

  const mxArray *m9;
  char_T cv68[13];
  static const char_T cv69[13] = { 'c', 'o', 'm', 'm', ':', 'O', 'F', 'D', 'M',
    ':', 'x', 'x', 'x' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_object = object;
  st.site = &mj_emlrtRSI;
  obj = b_object;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  d_st.site = &fb_emlrtRSI;
  e_st.site = &gb_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  e_st.site = &gb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_st.site = &db_emlrtRSI;
  st.site = &nj_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &oj_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &pj_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &qj_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &rj_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &sj_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  st.site = &tj_emlrtRSI;
  b_st.site = &gb_emlrtRSI;

  /* OFDMBase Base object for OFDMModulator and OFDMDemodulator System objects */
  /*  Copyright 2013 The MathWorks, Inc. */
  /* FFTLength FFT length */
  /*  Specify the IFFT length. This property can be set to an integer */
  /*  scalar. The value must be a power of two. The default value of */
  /*  this property is 64. */
  /* CyclicPrefixLength Cyclic prefix length */
  /*  Specify the cyclic prefix length. This property can be set to a */
  /*  non-negative interher scalar. The default value of this property is 16. */
  /* NumGuardBandCarriers Number of guard bands */
  /*  Specify the lower and upper guard bands in frequency domain.This */
  /*  property can be set to a non-nagative two-element vector.  */
  /*  The default setting of this property is [6 5]. */
  /* NumSymbols Number of OFDM symbols */
  /*  Specify the number of OFDM symbols at the output. The default value  */
  /*  of this property is 1. */
  /* PilotCarrierIndices Pilot subcarrier indices */
  /*  Specify the locations where pilots are to be inserted. You can */
  /*  set this property to a numeric scalar, column vector, matrix, or */
  /*  3-D array. The defalut value of the property is [-21; -7; 7; 21]. */
  /*  Nontunable ideally */
  /*  Constructor */
  /*      validateattributes(fftLen, {'numeric'}, ... */
  /*          {'real','scalar','integer','finite','>=',8}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(CPLen, {'numeric'}, ... */
  /*          {'real','row','integer','nonnegative','finite'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(guardBands, {'numeric'}, ... */
  /*          {'real','integer','nonnegative','finite','size', [2, 1]}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(numSym, {'numeric'}, ... */
  /*          {'real','scalar','integer','positive','finite'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(pilotIdx, {'numeric'}, ... */
  /*          {'real','integer','positive','finite','3d'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*  Check the 3rd dimension for numTx */
  c_st.site = &xh_emlrtRSI;
  d_st.site = &yh_emlrtRSI;
  for (i = 0; i < 4; i++) {
    b_data[i] = (int8_T)(12 + 14 * i);
  }

  e_st.site = &pi_emlrtRSI;
  nb = 0;
  e_st.site = &ni_emlrtRSI;
  e_st.site = &mi_emlrtRSI;
  i = 1;
  while (i <= 4) {
    x = b_data[i - 1];
    do {
      exitg1 = 0;
      e_st.site = &li_emlrtRSI;
      i++;
      if (i > 4) {
        exitg1 = 1;
      } else {
        e_st.site = &ki_emlrtRSI;
        frexp((real_T)x / 2.0, &exponent);
        if (muDoubleScalarAbs(x - b_data[i - 1]) < ldexp(1.0, exponent - 53)) {
          p = TRUE;
        } else {
          p = FALSE;
        }

        if (!p) {
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);

    e_st.site = &ji_emlrtRSI;
    nb++;
    b_data[nb - 1] = (int8_T)x;
    e_st.site = &ii_emlrtRSI;
    e_st.site = &ii_emlrtRSI;
  }

  e_st.site = &ei_emlrtRSI;
  e_st.site = &di_emlrtRSI;
  e_st.site = &ai_emlrtRSI;
  if (1 > nb) {
    b1 = FALSE;
  } else {
    b1 = (nb > 2147483646);
  }

  if (b1) {
    f_st.site = &eg_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  c_st.site = &xh_emlrtRSI;
  c_st.site = &xh_emlrtRSI;
  if (1 > nb) {
    i4 = 0;
  } else {
    i4 = nb;
  }

  if (!(4 != i4)) {
  } else {
    y = NULL;
    m9 = mxCreateCharArray(2, iv58);
    for (i = 0; i < 13; i++) {
      cv68[i] = cv69[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 13, m9, cv68);
    emlrtAssign(&y, m9);
    d_st.site = &bw_emlrtRSI;
    c_error(&d_st, b_message(&d_st, y, &g_emlrtMCI), &g_emlrtMCI);
  }

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  b_st.site = &gb_emlrtRSI;
  return b_object;
}

void OFDMDemodulator_stepImpl(const emlrtStack *sp, const OFDMDemodulator_1 *obj,
  const creal_T x[64], emxArray_creal_T *varargout_1)
{
  creal_T inputIn3D[64];
  creal_T postFFT[64];
  int32_T ix;
  int32_T ju;
  int32_T iy;
  int32_T i;
  int32_T ib;
  boolean_T overflow;
  real_T tmp_re;
  real_T tmp_im;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  static const real_T dv8[33] = { 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0, -0.99518472667219693, -0.98078528040323043,
    -0.95694033573220882, -0.92387953251128674, -0.881921264348355,
    -0.83146961230254524, -0.773010453362737, -0.70710678118654757,
    -0.63439328416364549, -0.55557023301960218, -0.47139673682599764,
    -0.38268343236508978, -0.29028467725446233, -0.19509032201612825,
    -0.0980171403295606, -0.0 };

  static const real_T dv9[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
    0.95694033573220882, 0.92387953251128674, 0.881921264348355,
    0.83146961230254524, 0.773010453362737, 0.70710678118654757,
    0.63439328416364549, 0.55557023301960218, 0.47139673682599764,
    0.38268343236508978, 0.29028467725446233, 0.19509032201612825,
    0.0980171403295606, 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0 };

  emxArray_real_T *b_x;
  emxArray_creal_T *c_x;
  int32_T varargin_1[3];
  const mxArray *y;
  static const int32_T iv191[2] = { 1, 21 };

  const mxArray *m34;
  char_T cv219[21];
  static const char_T cv220[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T sz[3];
  emxArray_creal_T *b_y;
  const mxArray *c_y;
  static const int32_T iv192[2] = { 1, 40 };

  char_T cv221[40];
  static const char_T cv222[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &st;
  e_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &ft_emlrtRSI;
  memcpy(&inputIn3D[0], &x[0], sizeof(creal_T) << 6);
  st.site = &gt_emlrtRSI;
  b_st.site = &kt_emlrtRSI;
  c_st.site = &nd_emlrtRSI;
  ix = 0;
  ju = 0;
  iy = 0;
  for (i = 0; i < 63; i++) {
    postFFT[iy] = inputIn3D[ix];
    ib = 64;
    overflow = TRUE;
    while (overflow) {
      if (ib >= 0) {
        ib = (int32_T)((uint32_T)ib >> 1);
      } else {
        ib = ~(int32_T)((uint32_T)~ib >> 1);
      }

      ju ^= ib;
      overflow = ((ju & ib) == 0);
    }

    iy = ju;
    ix++;
  }

  postFFT[iy] = inputIn3D[ix];
  for (i = 0; i < 64; i += 2) {
    tmp_re = postFFT[i + 1].re;
    tmp_im = postFFT[i + 1].im;
    postFFT[i + 1].re = postFFT[i].re - postFFT[i + 1].re;
    postFFT[i + 1].im = postFFT[i].im - postFFT[i + 1].im;
    postFFT[i].re += tmp_re;
    postFFT[i].im += tmp_im;
  }

  ju = 2;
  iDelta2 = 4;
  k = 16;
  iheight = 61;
  while (k > 0) {
    for (i = 0; i < iheight; i += iDelta2) {
      ib = i + ju;
      tmp_re = postFFT[ib].re;
      tmp_im = postFFT[ib].im;
      postFFT[i + ju].re = postFFT[i].re - postFFT[ib].re;
      postFFT[i + ju].im = postFFT[i].im - postFFT[ib].im;
      postFFT[i].re += tmp_re;
      postFFT[i].im += tmp_im;
    }

    ib = 1;
    for (iy = k; iy < 32; iy += k) {
      i = ib;
      ix = ib + iheight;
      while (i < ix) {
        tmp_re = dv9[iy] * postFFT[i + ju].re - dv8[iy] * postFFT[i + ju].im;
        tmp_im = dv9[iy] * postFFT[i + ju].im + dv8[iy] * postFFT[i + ju].re;
        postFFT[i + ju].re = postFFT[i].re - tmp_re;
        postFFT[i + ju].im = postFFT[i].im - tmp_im;
        postFFT[i].re += tmp_re;
        postFFT[i].im += tmp_im;
        i += iDelta2;
      }

      ib++;
    }

    ix = k;
    k = (int32_T)((uint32_T)ix >> 1);
    ju = iDelta2;
    iDelta2 <<= 1;
    iheight -= ju;
  }

  st.site = &ht_emlrtRSI;
  b_st.site = &pt_emlrtRSI;
  c_st.site = &hd_emlrtRSI;
  iy = 0;
  c_st.site = &id_emlrtRSI;
  ib = 32;
  for (k = 0; k < 32; k++) {
    tmp_re = postFFT[iy].re;
    tmp_im = postFFT[iy].im;
    postFFT[iy] = postFFT[ib];
    postFFT[ib].re = tmp_re;
    postFFT[ib].im = tmp_im;
    c_st.site = &jd_emlrtRSI;
    iy++;
    c_st.site = &kd_emlrtRSI;
    ib++;
  }

  emxInit_real_T(&b_st, &b_x, 1, &tb_emlrtRTEI, TRUE);
  st.site = &it_emlrtRSI;
  ix = b_x->size[0];
  b_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)b_x, ix, (int32_T)sizeof(real_T),
                    &tb_emlrtRTEI);
  iy = obj->pDataLinearIndices->size[0];
  for (ix = 0; ix < iy; ix++) {
    b_x->data[ix] = obj->pDataLinearIndices->data[ix];
  }

  b_emxInit_creal_T(&st, &c_x, 1, &tb_emlrtRTEI, TRUE);
  st.site = &it_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  st.site = &it_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  st.site = &jt_emlrtRSI;
  ix = c_x->size[0];
  c_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)c_x, ix, (int32_T)sizeof(creal_T),
                    &tb_emlrtRTEI);
  iy = obj->pDataLinearIndices->size[0];
  for (ix = 0; ix < iy; ix++) {
    tmp_re = obj->pDataLinearIndices->data[ix];
    ib = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &d_emlrtDCI, &st);
    c_x->data[ix].re = postFFT[emlrtDynamicBoundsCheckFastR2012b(ib, 1, 64,
      &y_emlrtBCI, &st) - 1].re;
    tmp_re = obj->pDataLinearIndices->data[ix];
    ib = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &d_emlrtDCI, &st);
    c_x->data[ix].im = postFFT[emlrtDynamicBoundsCheckFastR2012b(ib, 1, 64,
      &y_emlrtBCI, &st) - 1].im;
  }

  varargin_1[0] = b_x->size[0];
  varargin_1[1] = 1;
  varargin_1[2] = 1;
  b_st.site = &ut_emlrtRSI;
  c_st.site = &vt_emlrtRSI;
  emxFree_real_T(&b_x);
  c_st.site = &vt_emlrtRSI;
  c_st.site = &wt_emlrtRSI;
  tmp_re = 1.0;
  for (k = 0; k < 3; k++) {
    if (varargin_1[k] <= 0) {
      tmp_re = 0.0;
    } else {
      tmp_re *= (real_T)varargin_1[k];
    }
  }

  c_st.site = &wt_emlrtRSI;
  if (2.147483647E+9 >= tmp_re) {
  } else {
    y = NULL;
    m34 = mxCreateCharArray(2, iv191);
    for (i = 0; i < 21; i++) {
      cv219[i] = cv220[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 21, m34, cv219);
    emlrtAssign(&y, m34);
    c_st.site = &wt_emlrtRSI;
    d_st.site = &gw_emlrtRSI;
    c_error(&c_st, b_message(&d_st, y, &qb_emlrtMCI), &rb_emlrtMCI);
  }

  for (ix = 0; ix < 3; ix++) {
    sz[ix] = varargin_1[ix];
  }

  b_st.site = &tt_emlrtRSI;
  c_st.site = &af_emlrtRSI;
  iy = c_x->size[0];
  if (1 > iy) {
    iy = 1;
  }

  b_st.site = &tt_emlrtRSI;
  c_st.site = &af_emlrtRSI;
  if (c_x->size[0] < iy) {
  } else {
    iy = c_x->size[0];
  }

  if (sz[0] > iy) {
    b_st.site = &st_emlrtRSI;
    c_eml_error(&b_st);
  }

  if (1 > iy) {
    b_st.site = &st_emlrtRSI;
    c_eml_error(&b_st);
  }

  emxInit_creal_T(&st, &b_y, 3, &tb_emlrtRTEI, TRUE);
  ix = b_y->size[0] * b_y->size[1] * b_y->size[2];
  b_y->size[0] = sz[0];
  b_y->size[1] = 1;
  b_y->size[2] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)b_y, ix, (int32_T)sizeof(creal_T),
                    &ub_emlrtRTEI);
  b_st.site = &rt_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  if (c_x->size[0] == sz[0]) {
  } else {
    c_y = NULL;
    m34 = mxCreateCharArray(2, iv192);
    for (i = 0; i < 40; i++) {
      cv221[i] = cv222[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m34, cv221);
    emlrtAssign(&c_y, m34);
    b_st.site = &rt_emlrtRSI;
    e_st.site = &fw_emlrtRSI;
    c_error(&b_st, b_message(&e_st, c_y, &mb_emlrtMCI), &nb_emlrtMCI);
  }

  b_st.site = &qt_emlrtRSI;
  c_st.site = &dg_emlrtRSI;
  if (1 > c_x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (c_x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &eg_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k + 1 <= c_x->size[0]; k++) {
    b_y->data[k] = c_x->data[k];
  }

  emxFree_creal_T(&c_x);
  ix = varargout_1->size[0] * varargout_1->size[1] * varargout_1->size[2];
  varargout_1->size[0] = b_y->size[0];
  varargout_1->size[1] = b_y->size[1];
  varargout_1->size[2] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)varargout_1, ix, (int32_T)sizeof
                    (creal_T), &tb_emlrtRTEI);
  iy = b_y->size[0] * b_y->size[1] * b_y->size[2];
  for (ix = 0; ix < iy; ix++) {
    varargout_1->data[ix] = b_y->data[ix];
  }

  emxFree_creal_T(&b_y);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_OFDMDemodulator_stepImpl(testMACTransmitterStackData *SD, const
  emlrtStack *sp, const OFDMDemodulator_1 *obj, const creal_T x[960],
  emxArray_creal_T *varargout_1, creal_T varargout_2[48])
{
  creal_T postFFT[768];
  int32_T ix;
  int32_T chanStart;
  int32_T i1;
  int32_T i2;
  int32_T i;
  int32_T b_ix;
  boolean_T overflow;
  int32_T c_ix;
  real_T tmp_re;
  real_T tmp_im;
  int32_T ib;
  int32_T iDelta2;
  int32_T k;
  int32_T iheight;
  int32_T ihi;
  static const real_T dv10[33] = { 0.0, -0.0980171403295606,
    -0.19509032201612825, -0.29028467725446233, -0.38268343236508978,
    -0.47139673682599764, -0.55557023301960218, -0.63439328416364549,
    -0.70710678118654757, -0.773010453362737, -0.83146961230254524,
    -0.881921264348355, -0.92387953251128674, -0.95694033573220882,
    -0.98078528040323043, -0.99518472667219693, -1.0, -0.99518472667219693,
    -0.98078528040323043, -0.95694033573220882, -0.92387953251128674,
    -0.881921264348355, -0.83146961230254524, -0.773010453362737,
    -0.70710678118654757, -0.63439328416364549, -0.55557023301960218,
    -0.47139673682599764, -0.38268343236508978, -0.29028467725446233,
    -0.19509032201612825, -0.0980171403295606, -0.0 };

  static const real_T dv11[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
    0.95694033573220882, 0.92387953251128674, 0.881921264348355,
    0.83146961230254524, 0.773010453362737, 0.70710678118654757,
    0.63439328416364549, 0.55557023301960218, 0.47139673682599764,
    0.38268343236508978, 0.29028467725446233, 0.19509032201612825,
    0.0980171403295606, 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0 };

  emxArray_real_T *b_x;
  emxArray_creal_T *c_x;
  real_T varargin_1[3];
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv193[2] = { 1, 57 };

  const mxArray *m35;
  char_T cv223[57];
  static const char_T cv224[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't',
    '_', 'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g',
    '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c',
    't', 'o', 'r' };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  static const int32_T iv194[2] = { 1, 21 };

  char_T cv225[21];
  static const char_T cv226[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T sz[3];
  emxArray_creal_T *e_y;
  const mxArray *f_y;
  static const int32_T iv195[2] = { 1, 40 };

  char_T cv227[40];
  static const char_T cv228[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  creal_T d_x[48];
  static const int16_T iv196[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &st;
  e_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &ft_emlrtRSI;
  memcpy(&SD->u1.f4.inputIn3D[0], &x[0], 960U * sizeof(creal_T));
  st.site = &gt_emlrtRSI;
  b_st.site = &kt_emlrtRSI;
  c_st.site = &nd_emlrtRSI;
  ix = 0;
  for (chanStart = 0; chanStart < 706; chanStart += 64) {
    i1 = 0;
    i2 = chanStart;
    for (i = 0; i < 63; i++) {
      if (ix >= 0) {
        b_ix = (int32_T)((uint32_T)ix >> 6);
      } else {
        b_ix = ~(int32_T)((uint32_T)~ix >> 6);
      }

      postFFT[i2] = SD->u1.f4.inputIn3D[(ix % 64 + 80 * b_ix) + 16];
      i2 = 64;
      overflow = TRUE;
      while (overflow) {
        if (i2 >= 0) {
          i2 = (int32_T)((uint32_T)i2 >> 1);
        } else {
          i2 = ~(int32_T)((uint32_T)~i2 >> 1);
        }

        i1 ^= i2;
        overflow = ((i1 & i2) == 0);
      }

      i2 = chanStart + i1;
      ix++;
    }

    if (ix >= 0) {
      c_ix = (int32_T)((uint32_T)ix >> 6);
    } else {
      c_ix = ~(int32_T)((uint32_T)~ix >> 6);
    }

    postFFT[i2] = SD->u1.f4.inputIn3D[(ix % 64 + 80 * c_ix) + 16];
    ix++;
    for (i = chanStart; i <= chanStart + 62; i += 2) {
      tmp_re = postFFT[i + 1].re;
      tmp_im = postFFT[i + 1].im;
      postFFT[i + 1].re = postFFT[i].re - postFFT[i + 1].re;
      postFFT[i + 1].im = postFFT[i].im - postFFT[i + 1].im;
      postFFT[i].re += tmp_re;
      postFFT[i].im += tmp_im;
    }

    ib = 2;
    iDelta2 = 4;
    k = 16;
    iheight = 61;
    while (k > 0) {
      i = chanStart;
      ihi = chanStart + iheight;
      while (i < ihi) {
        i2 = i + ib;
        tmp_re = postFFT[i2].re;
        tmp_im = postFFT[i2].im;
        postFFT[i + ib].re = postFFT[i].re - postFFT[i2].re;
        postFFT[i + ib].im = postFFT[i].im - postFFT[i2].im;
        postFFT[i].re += tmp_re;
        postFFT[i].im += tmp_im;
        i += iDelta2;
      }

      i2 = chanStart + 1;
      for (i1 = k; i1 < 32; i1 += k) {
        i = i2;
        ihi = i2 + iheight;
        while (i < ihi) {
          tmp_re = dv11[i1] * postFFT[i + ib].re - dv10[i1] * postFFT[i + ib].im;
          tmp_im = dv11[i1] * postFFT[i + ib].im + dv10[i1] * postFFT[i + ib].re;
          postFFT[i + ib].re = postFFT[i].re - tmp_re;
          postFFT[i + ib].im = postFFT[i].im - tmp_im;
          postFFT[i].re += tmp_re;
          postFFT[i].im += tmp_im;
          i += iDelta2;
        }

        i2++;
      }

      ib = k;
      k = (int32_T)((uint32_T)ib >> 1);
      ib = iDelta2;
      iDelta2 <<= 1;
      iheight -= ib;
    }
  }

  st.site = &ht_emlrtRSI;
  b_st.site = &pt_emlrtRSI;
  i2 = 0;
  for (i = 0; i < 12; i++) {
    i1 = i2;
    c_st.site = &fj_emlrtRSI;
    c_st.site = &hd_emlrtRSI;
    c_st.site = &gj_emlrtRSI;
    i2 += 64;
    c_st.site = &id_emlrtRSI;
    ib = i1 + 32;
    for (k = 0; k < 32; k++) {
      tmp_re = postFFT[i1].re;
      tmp_im = postFFT[i1].im;
      postFFT[i1] = postFFT[ib];
      postFFT[ib].re = tmp_re;
      postFFT[ib].im = tmp_im;
      c_st.site = &jd_emlrtRSI;
      i1++;
      c_st.site = &kd_emlrtRSI;
      ib++;
    }
  }

  emxInit_real_T(&b_st, &b_x, 1, &tb_emlrtRTEI, TRUE);
  st.site = &it_emlrtRSI;
  ib = b_x->size[0];
  b_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)b_x, ib, (int32_T)sizeof(real_T),
                    &tb_emlrtRTEI);
  i2 = obj->pDataLinearIndices->size[0];
  for (ib = 0; ib < i2; ib++) {
    b_x->data[ib] = obj->pDataLinearIndices->data[ib];
  }

  b_emxInit_creal_T(&st, &c_x, 1, &tb_emlrtRTEI, TRUE);
  st.site = &it_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  st.site = &it_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  st.site = &jt_emlrtRSI;
  ib = c_x->size[0];
  c_x->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)c_x, ib, (int32_T)sizeof(creal_T),
                    &tb_emlrtRTEI);
  i2 = obj->pDataLinearIndices->size[0];
  for (ib = 0; ib < i2; ib++) {
    tmp_re = obj->pDataLinearIndices->data[ib];
    i1 = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &d_emlrtDCI, &st);
    c_x->data[ib].re = postFFT[emlrtDynamicBoundsCheckFastR2012b(i1, 1, 768,
      &ab_emlrtBCI, &st) - 1].re;
    tmp_re = obj->pDataLinearIndices->data[ib];
    i1 = (int32_T)emlrtIntegerCheckFastR2012b(tmp_re, &d_emlrtDCI, &st);
    c_x->data[ib].im = postFFT[emlrtDynamicBoundsCheckFastR2012b(i1, 1, 768,
      &ab_emlrtBCI, &st) - 1].im;
  }

  varargin_1[0] = (real_T)b_x->size[0] / 12.0;
  varargin_1[1] = 12.0;
  varargin_1[2] = 1.0;
  b_st.site = &ut_emlrtRSI;
  c_st.site = &vt_emlrtRSI;
  k = 0;
  emxFree_real_T(&b_x);
  do {
    exitg1 = 0;
    if (k < 3) {
      if (varargin_1[k] != muDoubleScalarFloor(varargin_1[k])) {
        overflow = FALSE;
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      overflow = TRUE;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (overflow) {
    c_st.site = &vt_emlrtRSI;
    overflow = TRUE;
  } else {
    overflow = FALSE;
  }

  if (overflow) {
  } else {
    y = NULL;
    m35 = mxCreateCharArray(2, iv193);
    for (i = 0; i < 57; i++) {
      cv223[i] = cv224[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 57, m35, cv223);
    emlrtAssign(&y, m35);
    b_y = NULL;
    m35 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m35) = MIN_int32_T;
    emlrtAssign(&b_y, m35);
    c_y = NULL;
    m35 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m35) = MAX_int32_T;
    emlrtAssign(&c_y, m35);
    c_st.site = &vt_emlrtRSI;
    d_st.site = &nw_emlrtRSI;
    c_error(&c_st, c_message(&d_st, y, b_y, c_y, &ob_emlrtMCI), &pb_emlrtMCI);
  }

  c_st.site = &wt_emlrtRSI;
  tmp_re = 1.0;
  for (k = 0; k < 3; k++) {
    if (varargin_1[k] <= 0.0) {
      tmp_re = 0.0;
    } else {
      tmp_re *= varargin_1[k];
    }
  }

  c_st.site = &wt_emlrtRSI;
  if (2.147483647E+9 >= tmp_re) {
  } else {
    d_y = NULL;
    m35 = mxCreateCharArray(2, iv194);
    for (i = 0; i < 21; i++) {
      cv225[i] = cv226[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 21, m35, cv225);
    emlrtAssign(&d_y, m35);
    c_st.site = &wt_emlrtRSI;
    d_st.site = &gw_emlrtRSI;
    c_error(&c_st, b_message(&d_st, d_y, &qb_emlrtMCI), &rb_emlrtMCI);
  }

  for (ib = 0; ib < 3; ib++) {
    sz[ib] = (int32_T)varargin_1[ib];
  }

  b_st.site = &tt_emlrtRSI;
  c_st.site = &af_emlrtRSI;
  i2 = c_x->size[0];
  if (1 > i2) {
    i2 = 1;
  }

  b_st.site = &tt_emlrtRSI;
  c_st.site = &af_emlrtRSI;
  if (c_x->size[0] < i2) {
  } else {
    i2 = c_x->size[0];
  }

  if (sz[0] > i2) {
    b_st.site = &st_emlrtRSI;
    c_eml_error(&b_st);
  }

  if (12 > i2) {
    b_st.site = &st_emlrtRSI;
    c_eml_error(&b_st);
  }

  emxInit_creal_T(&st, &e_y, 3, &tb_emlrtRTEI, TRUE);
  ib = e_y->size[0] * e_y->size[1] * e_y->size[2];
  e_y->size[0] = sz[0];
  e_y->size[1] = 12;
  e_y->size[2] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)e_y, ib, (int32_T)sizeof(creal_T),
                    &ub_emlrtRTEI);
  b_st.site = &rt_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  if (c_x->size[0] == sz[0] * 12) {
  } else {
    f_y = NULL;
    m35 = mxCreateCharArray(2, iv195);
    for (i = 0; i < 40; i++) {
      cv227[i] = cv228[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m35, cv227);
    emlrtAssign(&f_y, m35);
    b_st.site = &rt_emlrtRSI;
    e_st.site = &fw_emlrtRSI;
    c_error(&b_st, b_message(&e_st, f_y, &mb_emlrtMCI), &nb_emlrtMCI);
  }

  b_st.site = &qt_emlrtRSI;
  c_st.site = &dg_emlrtRSI;
  if (1 > c_x->size[0]) {
    overflow = FALSE;
  } else {
    overflow = (c_x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &eg_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k + 1 <= c_x->size[0]; k++) {
    e_y->data[k] = c_x->data[k];
  }

  emxFree_creal_T(&c_x);
  ib = varargout_1->size[0] * varargout_1->size[1] * varargout_1->size[2];
  varargout_1->size[0] = e_y->size[0];
  varargout_1->size[1] = e_y->size[1];
  varargout_1->size[2] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)varargout_1, ib, (int32_T)sizeof
                    (creal_T), &tb_emlrtRTEI);
  i2 = e_y->size[0] * e_y->size[1] * e_y->size[2];
  for (ib = 0; ib < i2; ib++) {
    varargout_1->data[ib] = e_y->data[ib];
  }

  emxFree_creal_T(&e_y);
  st.site = &su_emlrtRSI;
  for (ib = 0; ib < 48; ib++) {
    d_x[ib] = postFFT[iv196[ib]];
  }

  memcpy(&varargout_2[0], &d_x[0], 48U * sizeof(creal_T));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (OFDMDemodulator.c) */
