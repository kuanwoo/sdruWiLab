function [previousMessage, msgStatus] = MACLayerTransmitter(...
    ObjAGC,...           %Objects
    ObjSDRuReceiver,...
    ObjSDRuTransmitter,...
    ObjDetect,...
    ObjPreambleDemod,...
    ObjDataDemod,...
    estimate,...         %Structs
    tx,...
    timeoutDuration,...  %Values/Vectors
    messageBits,...
    message,...
    previousMessage,...
    recipient...
    )

%% This function is called when the node wants to transmit something

% % Sense spectrum and wait until it is unoccupied
% for tries = 1:4 % try only so many times
%     occupied = PHY.Sense;
%     if occupied
%         fprintf('MAC| Spectrum occupied, listening...\n');
%         %Recover signal and/or wait
%         lookingForACK = false;
%         MACLayerReceiver(PHY,lookingForACK);
%     else% Yay we can transmit now
%         break;
%     end    
%     if tries >=4
%         fprintf('MAC| Spectrum Busy, try again later\n');
%         return;
%     end
% end

maxRetries = 4;

msgStatus = false;

% Adjust offset for node
fprintf('Transmitting to node: %d, with offset: %f\n',int16(recipient),tx.offsetTable(recipient));
ObjSDRuTransmitter.CenterFrequency = tx.CenterFrequency + tx.offsetTable(recipient);


%% Spectrum clear, send message
for tries = 1:maxRetries
    % Send message
    PHYTransmit(...
        ObjSDRuTransmitter,...
        ObjSDRuReceiver,...
        message,...
        tx.samplingFreq,...
        tx.nodeNum,...%originator
        recipient...%destination
        );
    % Listen for acknowledgement
    %fprintf('###########################################\n');
    fprintf('MAC| Transmission finished, waiting for ACK\n');
    % Call Receiver
    lookingForACK = true;
    [Response, previousMessage] = MACLayerReceiver(...
        ObjAGC,...           %Objects
        ObjSDRuReceiver,...
        ObjSDRuTransmitter,...
        ObjDetect,...
        ObjPreambleDemod,...
        ObjDataDemod,...
        estimate,...         %Structs
        tx,...
        timeoutDuration,...  %Values/Vectors
        messageBits,...
        lookingForACK,...
        previousMessage...
        );

    if strcmp(Response,'ACK')
        fprintf('MAC| Got ACK\n');
        msgStatus = true;
        break
    else
        fprintf('MAC| Retransmitting message\n');
    end
    if tries >= 4
        fprintf('###########################################\n');
        fprintf('MAC| No ACK received :(\n');
        fprintf('###########################################\n');
        return;
    end 
end


end

