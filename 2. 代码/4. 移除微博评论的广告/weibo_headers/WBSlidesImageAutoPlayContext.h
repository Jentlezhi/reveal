//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBMediaAutoPlayContext-Protocol.h"

@class NSString;
@protocol WBMediaCacheManaging, WBMediaResourcePrefetching;

@interface WBSlidesImageAutoPlayContext : NSObject <WBMediaAutoPlayContext>
{
    CDUnknownBlockType _playbackControllerProvider;
}

+ (void)load;
@property(copy, nonatomic) CDUnknownBlockType playbackControllerProvider; // @synthesize playbackControllerProvider=_playbackControllerProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <WBMediaResourcePrefetching> prefetchManager;
@property(readonly, nonatomic) id <WBMediaCacheManaging> cacheManager;
- (void)teardownPlaybackController:(id)arg1;
- (id)createPlaybackController;
- (void)validateNewSessionWithSourceView:(id)arg1 playbackItem:(id)arg2 previousController:(id)arg3 playReason:(long long)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) NSString *contextID;
- (id)initWithPlaybackControllerProvider:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

