//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBVideoUserGeneralOperationListener-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface WBVideo3rdMonitorManager : NSObject <WBVideoUserGeneralOperationListener>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_sessions;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)videoUserDidPressActionButton:(id)arg1 position:(long long)arg2;
- (void)videoUserDidPerformGeneralOperationOnStatus:(id)arg1 operation:(long long)arg2;
- (void)instreamAdPlaybackEnd:(id)arg1;
- (void)instreamAdPlaybackStarted:(id)arg1;
- (void)instreamImagePlaybackFinished:(id)arg1;
- (void)instreamImagePlaybackStarted:(id)arg1;
- (void)videoTimelineTableViewCellBecomeHighlighted:(id)arg1;
- (void)videoLogDidTransferIn:(id)arg1;
- (void)videoLogDidTransferOut:(id)arg1;
- (void)videoLogDidCommit:(id)arg1;
- (void)videoLogDidCreate:(id)arg1;
- (id)playerLogWithNotification:(id)arg1;
- (void)_createSessionForKey:(id)arg1 playerLog:(id)arg2 logManager:(id)arg3;
- (void)_finalizeSessionForKey:(id)arg1 logManager:(id)arg2;
- (id)_sessionKeyForLog:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

