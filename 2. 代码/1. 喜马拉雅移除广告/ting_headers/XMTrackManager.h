//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMEventProcessDelegate-Protocol.h"
#import "XMEventTrackerRequestAgent-Protocol.h"

@class NSString, XMEventTrackerManager;
@protocol XMTrackManagerProtocol;

@interface XMTrackManager : NSObject <XMEventProcessDelegate, XMEventTrackerRequestAgent>
{
    id <XMTrackManagerProtocol> _delegate;
    XMEventTrackerManager *_manager;
}

+ (void)trackEvent:(id)arg1;
+ (void)trackModule:(id)arg1 reason:(id)arg2 type:(unsigned long long)arg3;
+ (void)trackModule:(id)arg1 reason:(id)arg2;
+ (void)setDelegate:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) XMEventTrackerManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <XMTrackManagerProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getChecksumWithPostData:(id)arg1;
- (id)newRequestWithBody:(id)arg1 tracker:(id)arg2;
- (id)newPostBodyFromEvents:(id)arg1 tracker:(id)arg2;
- (void)sendEventsForTracker:(id)arg1 events:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)trackerManager:(id)arg1 infoDicForEvent:(id)arg2;
- (id)trackerManager:(id)arg1 trackerForEvent:(id)arg2;
- (void)monitorReachabilityStatus;
- (void)trackEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

