//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMPt_Channel-Protocol.h"

@class AMPt_StreamParser, NSString;
@protocol AMPt_ChannelDelegate><AMPt_SecureChannelDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AMPt_SecureChannel : NSObject <AMPt_Channel>
{
    id <AMPt_ChannelDelegate><AMPt_SecureChannelDelegate> _delegate;
    AMPt_StreamParser *_parser;
    struct SSLContext *_ssl;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_queue> *_sslQueue;
    NSObject<OS_dispatch_queue> *_parseQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *parseQueue; // @synthesize parseQueue=_parseQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sslQueue; // @synthesize sslQueue=_sslQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *readSource; // @synthesize readSource=_readSource;
@property(nonatomic) struct SSLContext *ssl; // @synthesize ssl=_ssl;
@property(retain, nonatomic) AMPt_StreamParser *parser; // @synthesize parser=_parser;
@property(nonatomic) __weak id <AMPt_ChannelDelegate><AMPt_SecureChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doSSLRead;
- (_Bool)validateSSLPeer;
- (void)continueSSLHandshake;
- (void)handleReadEventOnSocket:(int)arg1;
- (void)sendPacketWithData:(id)arg1;
- (_Bool)sendMessageWithPayload:(id)arg1;
- (void)dealloc;
- (id)initWithSocket:(int)arg1 sslProtocolSide:(int)arg2 certificateChain:(id)arg3;
- (id)initWithSocket:(int)arg1 sslProtocolSide:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

