/*
 * PHYTransmit.c
 *
 * Code generation for function 'PHYTransmit'
 *
 * C source code generated on: Thu Mar  6 19:04:24 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "PHYTransmit.h"
#include "generateOFDMSignal_TX2.h"
#include "SystemCore.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo fm_emlrtRSI = { 29, "PHYTransmit",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYTransmit.m" };

static emlrtRSInfo gm_emlrtRSI = { 32, "PHYTransmit",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYTransmit.m" };

static emlrtRSInfo hm_emlrtRSI = { 16, "PHYTransmit",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/PHYTransmit.m" };

/* Function Definitions */
void PHYTransmit(testMACTransmitterStackData *SD, const emlrtStack *sp,
                 comm_SDRuTransmitter *ObjSDRuTransmitter, comm_SDRuReceiver
                 *ObjSDRuReceiver, real_T originNodeID)
{
  OFDMDemodulator_2 *unusedU1;
  OFDMDemodulator_3 *unusedU0;
  OFDMDemodulator_3 b_unusedU0;
  OFDMDemodulator_2 b_unusedU1;
  int32_T framesTransmitted;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Send Messages */
  /* % Create message bits */
  /*  The output needs to be duplicated to long vectors to help prevent */
  /*  Underflow for the USRP */
  st.site = &hm_emlrtRSI;
  b_generateOFDMSignal_TX2(SD, &st, originNodeID, &b_unusedU1, &b_unusedU0,
    &unusedU0, &unusedU1, SD->u2.f12.dataToTx, &SD->u2.f12.unusedU2);

  /*  30 Dupe frames created (NOTE! author shouldcreate shorter simpler function) */
  /* % Run transmitter */
  /* increasing value will help receiver, 10 */
  /*  This should be longer to help transmit over periods when the RX is */
  /*  cleaning its buffer */
  for (framesTransmitted = 0; framesTransmitted < 10; framesTransmitted++) {
    st.site = &fm_emlrtRSI;
    h_SystemCore_step(SD, &st, ObjSDRuTransmitter, SD->u2.f12.dataToTx);

    /* if mod(framesTransmitted,60) == 0 */
    st.site = &gm_emlrtRSI;
    i_SystemCore_step(SD, &st, ObjSDRuReceiver);

    /*  Call used to prevent Overflow.  Essentially will clean up receive buffer, will be filled with crosstalk frames */
    /* end */
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  /* obj.pSDRuTransmitter.reset;%stop transmitting? */
}

void b_PHYTransmit(testMACTransmitterStackData *SD, const emlrtStack *sp,
                   comm_SDRuTransmitter *ObjSDRuTransmitter, comm_SDRuReceiver
                   *ObjSDRuReceiver, real_T originNodeID, real_T destNodeID)
{
  OFDMDemodulator_2 *unusedU1;
  OFDMDemodulator_3 *unusedU0;
  OFDMDemodulator_3 b_unusedU0;
  OFDMDemodulator_2 b_unusedU1;
  int32_T framesTransmitted;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Send Messages */
  /* % Create message bits */
  /*  The output needs to be duplicated to long vectors to help prevent */
  /*  Underflow for the USRP */
  st.site = &hm_emlrtRSI;
  c_generateOFDMSignal_TX2(SD, &st, originNodeID, destNodeID, &b_unusedU1,
    &b_unusedU0, &unusedU0, &unusedU1, SD->u2.f10.dataToTx, &SD->u2.f10.unusedU2);

  /*  30 Dupe frames created (NOTE! author shouldcreate shorter simpler function) */
  /* % Run transmitter */
  /* increasing value will help receiver, 10 */
  /*  This should be longer to help transmit over periods when the RX is */
  /*  cleaning its buffer */
  for (framesTransmitted = 0; framesTransmitted < 10; framesTransmitted++) {
    st.site = &fm_emlrtRSI;
    h_SystemCore_step(SD, &st, ObjSDRuTransmitter, SD->u2.f10.dataToTx);

    /* if mod(framesTransmitted,60) == 0 */
    st.site = &gm_emlrtRSI;
    i_SystemCore_step(SD, &st, ObjSDRuReceiver);

    /*  Call used to prevent Overflow.  Essentially will clean up receive buffer, will be filled with crosstalk frames */
    /* end */
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  /* obj.pSDRuTransmitter.reset;%stop transmitting? */
}

/* End of code generation (PHYTransmit.c) */
