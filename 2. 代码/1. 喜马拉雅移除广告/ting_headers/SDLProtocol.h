//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLAbstractProtocol.h"

#import "SDLProtocolListener-Protocol.h"

@class NSMutableData, NSMutableDictionary, NSObject, NSString, SDLPrioritizedObjectCollection, SDLProtocolReceivedMessageRouter, SDLTimer;
@protocol OS_dispatch_queue;

@interface SDLProtocol : SDLAbstractProtocol <SDLProtocolListener>
{
    unsigned int _messageID;
    NSObject<OS_dispatch_queue> *_receiveQueue;
    NSObject<OS_dispatch_queue> *_sendQueue;
    SDLPrioritizedObjectCollection *_prioritizedCollection;
    NSMutableDictionary *_sessionIDs;
    _Bool _alreadyDestructed;
    unsigned char _sessionID;
    _Bool _heartbeatACKed;
    NSMutableData *_receiveBuffer;
    SDLProtocolReceivedMessageRouter *_messageRouter;
    SDLTimer *_heartbeatTimer;
}

@property(retain, nonatomic) SDLTimer *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
@property(nonatomic) _Bool heartbeatACKed; // @synthesize heartbeatACKed=_heartbeatACKed;
@property(retain) SDLProtocolReceivedMessageRouter *messageRouter; // @synthesize messageRouter=_messageRouter;
@property(retain) NSMutableData *receiveBuffer; // @synthesize receiveBuffer=_receiveBuffer;
@property unsigned char sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dispose;
- (void)destructObjects;
- (void)onError:(id)arg1 exception:(id)arg2;
- (void)onProtocolClosed;
- (void)onProtocolOpened;
- (void)onProtocolMessageReceived:(id)arg1;
- (void)handleHeartbeatACK;
- (void)handleHeartbeatForSession:(unsigned char)arg1;
- (void)handleProtocolEndSessionNACK:(unsigned char)arg1;
- (void)handleProtocolEndSessionACK:(unsigned char)arg1;
- (void)handleProtocolStartSessionNACK:(unsigned char)arg1;
- (void)handleProtocolStartSessionACK:(unsigned char)arg1 sessionID:(unsigned char)arg2 version:(unsigned char)arg3;
- (void)sendRawData:(id)arg1 withServiceType:(unsigned char)arg2;
- (void)startHeartbeatTimerWithDuration:(float)arg1;
- (void)sendHeartbeat;
- (void)processMessages;
- (void)handleBytesFromTransport:(id)arg1;
- (void)sendDataToTransport:(id)arg1 withPriority:(long long)arg2;
- (void)logRPCSend:(id)arg1;
- (void)sendRPCRequest:(id)arg1;
- (void)sendRPC:(id)arg1;
- (void)sendEndSessionWithType:(unsigned char)arg1;
- (void)sendStartSessionWithType:(unsigned char)arg1;
- (unsigned char)retrieveSessionIDforServiceType:(unsigned char)arg1;
- (void)storeSessionID:(unsigned char)arg1 forServiceType:(unsigned char)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

