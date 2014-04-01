//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Mon Mar 31 18:20:54 2014
// Arguments: "-B" "macro_default" "-v" "-W" "cpplib:libTransmit" "-T"
// "link:lib" "PHYTransmit.m" "CreateTXRX_TX.m" "BoardIdCapiEnumT.m" 
//

#include <stdio.h>
#define EXPORTING_libTransmit 1
#include "libTransmit.h"

static HMCRINSTANCE _mcr_inst = NULL;


#ifdef __cplusplus
extern "C" {
#endif

static int mclDefaultPrintHandler(const char *s)
{
  return mclWrite(1 /* stdout */, s, sizeof(char)*strlen(s));
}

#ifdef __cplusplus
} /* End extern "C" block */
#endif

#ifdef __cplusplus
extern "C" {
#endif

static int mclDefaultErrorHandler(const char *s)
{
  int written = 0;
  size_t len = 0;
  len = strlen(s);
  written = mclWrite(2 /* stderr */, s, sizeof(char)*len);
  if (len > 0 && s[ len-1 ] != '\n')
    written += mclWrite(2 /* stderr */, "\n", sizeof(char));
  return written;
}

#ifdef __cplusplus
} /* End extern "C" block */
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_libTransmit_C_API
#define LIB_libTransmit_C_API /* No special import/export declaration */
#endif

LIB_libTransmit_C_API 
bool MW_CALL_CONV libTransmitInitializeWithHandlers(
    mclOutputHandlerFcn error_handler,
    mclOutputHandlerFcn print_handler)
{
    int bResult = 0;
  if (_mcr_inst != NULL)
    return true;
  if (!mclmcrInitialize())
    return false;
    {
        mclCtfStream ctfStream = 
            mclGetEmbeddedCtfStream((void *)(libTransmitInitializeWithHandlers));
        if (ctfStream) {
            bResult = mclInitializeComponentInstanceEmbedded(   &_mcr_inst,
                                                                error_handler, 
                                                                print_handler,
                                                                ctfStream);
            mclDestroyStream(ctfStream);
        } else {
            bResult = 0;
        }
    }  
    if (!bResult)
    return false;
  return true;
}

LIB_libTransmit_C_API 
bool MW_CALL_CONV libTransmitInitialize(void)
{
  return libTransmitInitializeWithHandlers(mclDefaultErrorHandler, 
                                           mclDefaultPrintHandler);
}

LIB_libTransmit_C_API 
void MW_CALL_CONV libTransmitTerminate(void)
{
  if (_mcr_inst != NULL)
    mclTerminateInstance(&_mcr_inst);
}

LIB_libTransmit_C_API 
void MW_CALL_CONV libTransmitPrintStackTrace(void) 
{
  char** stackTrace;
  int stackDepth = mclGetStackTrace(&stackTrace);
  int i;
  for(i=0; i<stackDepth; i++)
  {
    mclWrite(2 /* stderr */, stackTrace[i], sizeof(char)*strlen(stackTrace[i]));
    mclWrite(2 /* stderr */, "\n", sizeof(char)*strlen("\n"));
  }
  mclFreeStackTrace(&stackTrace, stackDepth);
}


LIB_libTransmit_C_API 
bool MW_CALL_CONV mlxPHYTransmit(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "PHYTransmit", nlhs, plhs, nrhs, prhs);
}

LIB_libTransmit_C_API 
bool MW_CALL_CONV mlxCreateTXRX_TX(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "CreateTXRX_TX", nlhs, plhs, nrhs, prhs);
}

LIB_libTransmit_C_API 
bool MW_CALL_CONV mlxBoardIdCapiEnumT(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                      *prhs[])
{
  return mclFeval(_mcr_inst, "BoardIdCapiEnumT", nlhs, plhs, nrhs, prhs);
}

LIB_libTransmit_CPP_API 
void MW_CALL_CONV PHYTransmit(const mwArray& ObjSDRuTransmitter, const mwArray& 
                              inputPayloadMessage, const mwArray& samplingFreq, const 
                              mwArray& originNodeID, const mwArray& destNodeID)
{
  mclcppMlfFeval(_mcr_inst, "PHYTransmit", 0, 0, 5, &ObjSDRuTransmitter, &inputPayloadMessage, &samplingFreq, &originNodeID, &destNodeID);
}

LIB_libTransmit_CPP_API 
void MW_CALL_CONV CreateTXRX_TX(int nargout, mwArray& ObjAGC, mwArray& 
                                ObjSDRuTransmitter, mwArray& ObjDetect, mwArray& 
                                ObjPreambleDemod, mwArray& ObjDataDemod, mwArray& 
                                estimate, mwArray& tx, mwArray& timeoutDuration, mwArray& 
                                messageBits, mwArray& desiredSamplingFrequency, mwArray& 
                                destNodeID, mwArray& originNodeID, mwArray& 
                                inputPayloadMessage)
{
  mclcppMlfFeval(_mcr_inst, "CreateTXRX_TX", nargout, 13, 0, &ObjAGC, &ObjSDRuTransmitter, &ObjDetect, &ObjPreambleDemod, &ObjDataDemod, &estimate, &tx, &timeoutDuration, &messageBits, &desiredSamplingFrequency, &destNodeID, &originNodeID, &inputPayloadMessage);
}

LIB_libTransmit_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout, const mwArray& 
                                   varargin)
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", nargout, -1, -1, &varargout, &varargin);
}

LIB_libTransmit_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout)
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", nargout, -1, 0, &varargout);
}

LIB_libTransmit_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT(const mwArray& varargin)
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", 0, 0, -1, &varargin);
}

LIB_libTransmit_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT()
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", 0, 0, 0);
}
