function testPHYReceive

[...
    ObjAGC,...           %Objects
    ObjSDRuReceiver,...
    ObjSDRuTransmitter,...
    ObjDetect,...
    ObjPreambleDemod,...
    ObjDataDemod,...
    estimate,...         %Structs
    rx,...
    timeoutDuration,...  %Values/Vectors
    messageBits...
    ] = CreateTXRX;

[recoveredMessage] = PHYReceive(...
                ObjAGC,...           %Objects
                ObjSDRuReceiver,...
                ObjDetect,...
                ObjPreambleDemod,...
                ObjDataDemod,...
                estimate,...         %Structs
                rx,...
                timeoutDuration,...  %Values/Vectors
                messageBits...
                );
            
end