//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoEventAnnouncer.h"

#import "WBVideoPlaybackEventListener-Protocol.h"

@class NSString;

@interface WBVideoPlaybackEventAnnouncer : WBVideoEventAnnouncer <WBVideoPlaybackEventListener>
{
}

- (void)videoPlayerControllerViewDidDisappear:(id)arg1;
- (void)videoPlayerControllerViewDidAppear:(id)arg1;
- (void)videoPlayerController:(id)arg1 didUpdateCurrentMediaSelection:(id)arg2;
- (void)videoPlayerControllerDidSwitchPlaySpeedRate:(id)arg1 hasChange:(_Bool)arg2;
- (void)videoPlayerControllerDidChangeMuteState:(id)arg1;
- (void)videoPlayerControllerUserSeekDone:(id)arg1;
- (void)videoPlayerController:(id)arg1 playerWillStartSeek:(_Bool)arg2;
- (void)videoPlayerControllerUserWillStartSeek:(id)arg1;
- (void)videoPlayerController:(id)arg1 instreamContentPlaybackStateDidChange:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 playerSeekfinished:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 playerSeekStart:(CDStruct_1b6d18a9)arg2 fromPosition:(CDStruct_1b6d18a9)arg3 isResume:(_Bool)arg4;
- (void)videoPlayerControllerPlaybackLikelyToKeepUp:(id)arg1;
- (void)videoPlayerControllerDidStallPlayback:(id)arg1;
- (void)videoPlayerController:(id)arg1 viewDidMoveToSuperView:(id)arg2;
- (void)videoPlayerController:(id)arg1 didMoveToSourceView:(id)arg2;
- (void)videoPlayerController:(id)arg1 didUpdateTransferState:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didUpdateAnimatedTransferState:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerControllerWillToggleFullScreenState:(id)arg1;
- (void)videoPlayerController:(id)arg1 didReceiveOrientationChangeNotificationWithOrientation:(long long)arg2;
- (void)videoPlayerController:(id)arg1 didPerformPauseWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (void)videoPlayerController:(id)arg1 willPerformPauseWithReason:(long long)arg2;
- (void)videoPlayerController:(id)arg1 didPerformPlayWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (void)videoPlayerControllerDidFinishPlayback:(id)arg1;
- (void)videoPlayerControllerDidPlayToEnd:(id)arg1;
- (void)videoPlayerController:(id)arg1 didUpdateCurrentTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlayerController:(id)arg1 didChangeVideoPlayerItem:(id)arg2;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)videoPlayerController:(id)arg1 didFailWithError:(id)arg2;
- (void)videoPlayerControllerIsReady:(id)arg1;
- (void)videoPlayerController:(id)arg1 queryPlayerItemFinishedWithError:(id)arg2 extraParams:(id)arg3;
- (void)videoPlayerController:(id)arg1 didRequestPlaybackForVideoItem:(id)arg2 reason:(long long)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

