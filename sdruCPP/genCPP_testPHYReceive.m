!export LD_LIBRARY_PATH=/opt/MATLAB/R2013a/runtime/glnxa64/

mcc -v -W cpplib:libtestPHYReceive -T link:lib testPHYReceive.m...
                                               generateOFDMSignal.m...
                                               generateOFDMSignal_TX2.m...
                                               OFDMbits2letters.m...
                                               OFDMletters2bits.m...
                                               initializeOFDMSyncMemory_sdr.m...
                                               PHYReceive.m...
                                               locateOFDMFrame_sdr.m...
                                               coarseOFDMFreqEst_sdr.m...
                                               equalizeOFDM.m...
                                               demodOFDMSubcarriers_sdr.m ...
                                               CreateTXRX.m...
                                               BoardIdCapiEnumT.m...
                                               OFDMBase.m...
                                               OFDMModulator.m...
                                               OFDMDemodulator.m...
                                               SDRuReceiver.p
                                          

!sudo cp libtestPHYReceive.so /opt/MATLAB/R2013a/runtime/glnxa64/

mbuild phyreceive_testPHYReceive.cpp libtestPHYReceive.so
!./phyreceive_testPHYReceive