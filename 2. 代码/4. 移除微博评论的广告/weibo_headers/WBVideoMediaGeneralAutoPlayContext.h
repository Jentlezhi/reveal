//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoMediaAutoPlayContext.h"

#import "WBMediaCacheManaging-Protocol.h"
#import "WBVideoPlayerControllerDelegate-Protocol.h"
#import "WBVideoUpNextPluginViewVisibleDelegate-Protocol.h"

@class NSString, WBUniversialViewController, WBVideoResourceCachePurger;
@protocol WBMediaAutoPlayContainer;

@interface WBVideoMediaGeneralAutoPlayContext : WBVideoMediaAutoPlayContext <WBMediaCacheManaging, WBVideoPlayerControllerDelegate, WBVideoUpNextPluginViewVisibleDelegate>
{
    unsigned long long _currentVideoPlayCount;
    _Bool _needsAudioSession;
    WBVideoResourceCachePurger *_legacyCachePurger;
    WBVideoResourceCachePurger *_cachePurger;
    WBUniversialViewController<WBMediaAutoPlayContainer> *_currentContainerController;
}

+ (void)initialize;
+ (id)generalPlaybackController;
@property(nonatomic) __weak WBUniversialViewController<WBMediaAutoPlayContainer> *currentContainerController; // @synthesize currentContainerController=_currentContainerController;
@property(nonatomic) _Bool needsAudioSession; // @synthesize needsAudioSession=_needsAudioSession;
@property(retain, nonatomic) WBVideoResourceCachePurger *cachePurger; // @synthesize cachePurger=_cachePurger;
@property(retain, nonatomic) WBVideoResourceCachePurger *legacyCachePurger; // @synthesize legacyCachePurger=_legacyCachePurger;
- (void).cxx_destruct;
- (void)cleanAllCache;
- (void)purgeCache;
@property(readonly, nonatomic) unsigned long long totalCacheFileSize;
- (id)cacheManager;
- (void)updateNeedsAudioSessionWithContainerChanged:(_Bool)arg1;
- (_Bool)_resolveAudioSessionRequirements;
- (void)currentTableViewContainerDidChange:(id)arg1;
- (void)videoPlayerControllerDidChangeMuteState:(id)arg1;
- (void)videoPlayerController:(id)arg1 didChangeVideoPlayerItem:(id)arg2;
- (void)validateNewSessionWithSourceView:(id)arg1 playbackItem:(id)arg2 previousController:(id)arg3 playReason:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)videoPlayerControllerDidFinishPlayback:(id)arg1;
- (void)videoPlayerController:(id)arg1 didPerformPauseWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (void)videoPlayerController:(id)arg1 didPerformPlayWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (_Bool)_gifVideoPlayBackFinishedInProvider:(id)arg1;
- (_Bool)shouldPlayToEndWithVideoPlayerController:(id)arg1;
- (_Bool)videoPlayerController:(id)arg1 shouldEnterFullscreenAnimated:(_Bool)arg2;
- (_Bool)schemeOfVideoFeed:(id)arg1;
- (void)logShouldEnterFullscreenWithPlayerController:(id)arg1 videoItem:(id)arg2 sourceView:(id)arg3;
- (_Bool)_shouldEnterFullScreenWithPlayerController:(id)arg1 videoItem:(id)arg2 sourceView:(id)arg3;
- (_Bool)videoUpNextPluginInvisibleWhenInlinePlaybackFinished:(id)arg1;
- (void)setPlayerController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

