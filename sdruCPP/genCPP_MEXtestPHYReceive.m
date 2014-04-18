!export LD_LIBRARY_PATH=/opt/MATLAB/R2013a/runtime/glnxa64/

decimation = 20;
compilesdru('testPHYReceive','mex','-args','{decimation}');

% mcc -v -W cpplib:libtestPHYReceive -T link:lib testPHYReceive.m...
%                                                generateOFDMSignal.m...
%                                                generateOFDMSignal_TX2.m...
%                                                OFDMbits2letters.m...
%                                                OFDMletters2bits.m...
%                                                initializeOFDMSyncMemory_sdr.m...
%                                                PHYReceive.m...
%                                                locateOFDMFrame_sdr.m...
%                                                coarseOFDMFreqEst_sdr.m...
%                                                equalizeOFDM.m...
%                                                demodOFDMSubcarriers_sdr.m ...
%                                                CreateTXRX.m...
%                                                BoardIdCapiEnumT.m...
%                                                OFDMBase.m...
%                                                OFDMModulator.m...
%                                                OFDMDemodulator.m...
%                                                SDRuReceiver.p

mcc -v -W cpplib:libMEXtestPHYReceive -T link:lib MEXtestPHYReceive.m

!sudo cp libMEXtestPHYReceive.so /opt/MATLAB/R2013a/runtime/glnxa64/

mbuild phyreceive_MEXtestPHYReceive.cpp libMEXtestPHYReceive.so
!./phyreceive_MEXtestPHYReceive
