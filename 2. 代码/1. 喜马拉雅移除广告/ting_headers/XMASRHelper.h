//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMASRManagerDelegate-Protocol.h"

@class NSString;

@interface XMASRHelper : NSObject <XMASRManagerDelegate>
{
    _Bool _outputInterval;
    CDUnknownBlockType _resultCallBack;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType resultCallBack; // @synthesize resultCallBack=_resultCallBack;
@property(nonatomic) _Bool outputInterval; // @synthesize outputInterval=_outputInterval;
- (void).cxx_destruct;
- (void)receiveCancelSpeechRecord;
- (void)receiveBeginSpeechRecord;
- (void)receiveASRResult:(id)arg1 isLast:(_Bool)arg2;
- (void)receiveASRError:(id)arg1;
- (void)destory;
- (void)reset;
- (void)controlASR:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

