//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoBlackBaseViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WBTimeRecorderProtocol-Protocol.h"
#import "WBVideoPlaybackSchemeAutoTransitioning-Protocol.h"
#import "WBVideoPrefetchDataSource-Protocol.h"
#import "WBVideoSegmentSwipeViewDelegate-Protocol.h"
#import "WBVideoTimelinePlayerControllerDelegate-Protocol.h"
#import "WBVideoTimelinePreviewContentViewDelegate-Protocol.h"
#import "WBVideoTimelineTableViewCellDelegate-Protocol.h"
#import "WBVideoUpNextPluginCountDownDelegate-Protocol.h"
#import "WBVideoUpNextPluginViewVisibleDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, SNHTTPRequestOperationWrapper, UIButton, UIPanGestureRecognizer, UIView, WBContactEngine, WBMediaAutoPlayManager, WBStatus, WBTimeRecorder, WBVideoPRLMTableViewWrapper, WBVideoPlaybackTransitionManager, WBVideoTimelineNewPlayerController, WBVideoTimelinePreviewContentView, WBVideoTimelineTableViewCell, WBVideoVoiceViewManager;
@protocol WBMediaPlaybackSourceView, WBVideoPlayerSourceView;

@interface WBVideoBlackListViewController : WBVideoBlackBaseViewController <WBVideoTimelineTableViewCellDelegate, WBVideoUpNextPluginCountDownDelegate, UIViewControllerTransitioningDelegate, WBVideoTimelinePlayerControllerDelegate, UIGestureRecognizerDelegate, PRLMTableViewWrapperDelegate, WBVideoUpNextPluginViewVisibleDelegate, WBVideoTimelinePreviewContentViewDelegate, WBVideoPrefetchDataSource, WBTimeRecorderProtocol, WBVideoSegmentSwipeViewDelegate, WBVideoPlaybackSchemeAutoTransitioning>
{
    CDStruct_a748372a _flags;
    WBVideoPRLMTableViewWrapper *_loadMoreWrapper;
    unsigned long long _pageNum;
    unsigned long long _pageCount;
    NSString *_cacheID;
    unsigned long long _playCount;
    SNHTTPRequestOperationWrapper *_wrapper;
    id _audioSessionHandler;
    WBTimeRecorder *timeRecorder;
    NSDictionary *schemeParams;
    _Bool _interactiveDismissing;
    _Bool _isDismissing;
    _Bool _loadMoreDisabled;
    _Bool _recmmendVideoDisplayed;
    _Bool _muteStateWhenPlaying;
    _Bool _ignorePicCardCell;
    _Bool _baseStatusPageInfoReplaced;
    _Bool _isDidVideoTapLog;
    _Bool _isCurrentShow;
    _Bool _shouldPostNotification;
    WBVideoTimelineNewPlayerController *_playerController;
    WBMediaAutoPlayManager *_playbackManager;
    WBVideoPlaybackTransitionManager *_transitionManager;
    NSArray *_statuses;
    UIView<WBVideoPlayerSourceView> *_timelineSourceView;
    NSMutableArray *_preloadedPlaybackIdentifiers;
    UIView *_backgroundView;
    WBStatus *_baseStatus;
    WBContactEngine *_contactEngine;
    UIButton *_nextVideoButton;
    WBVideoTimelinePreviewContentView *_previewContentView;
    NSTimer *_picCellActiveTimer;
    long long _picCellActiveCountdown;
    unsigned long long _lastActiveCellIndex;
    UIView<WBMediaPlaybackSourceView> *_bestSourceViewForAutoPlay;
    WBVideoTimelineTableViewCell *_bestCellForAutoPlay;
    NSString *_kid;
    NSString *_q;
    UIView<WBVideoPlayerSourceView> *_fromSourceView;
    WBVideoVoiceViewManager *_voiceViewManager;
    UIView *_rightItemsView;
    UIPanGestureRecognizer *_tempPan;
    struct CGRect _sourceFrameOnScreen;
}

@property(nonatomic) _Bool shouldPostNotification; // @synthesize shouldPostNotification=_shouldPostNotification;
@property(retain, nonatomic) UIPanGestureRecognizer *tempPan; // @synthesize tempPan=_tempPan;
@property(nonatomic) _Bool isCurrentShow; // @synthesize isCurrentShow=_isCurrentShow;
@property(retain, nonatomic) UIView *rightItemsView; // @synthesize rightItemsView=_rightItemsView;
@property(retain, nonatomic) WBVideoVoiceViewManager *voiceViewManager; // @synthesize voiceViewManager=_voiceViewManager;
@property(nonatomic) _Bool isDidVideoTapLog; // @synthesize isDidVideoTapLog=_isDidVideoTapLog;
@property(retain, nonatomic) UIView<WBVideoPlayerSourceView> *fromSourceView; // @synthesize fromSourceView=_fromSourceView;
@property(nonatomic) _Bool baseStatusPageInfoReplaced; // @synthesize baseStatusPageInfoReplaced=_baseStatusPageInfoReplaced;
@property(copy, nonatomic) NSString *q; // @synthesize q=_q;
@property(copy, nonatomic) NSString *kid; // @synthesize kid=_kid;
@property(nonatomic) __weak WBVideoTimelineTableViewCell *bestCellForAutoPlay; // @synthesize bestCellForAutoPlay=_bestCellForAutoPlay;
@property(nonatomic) __weak UIView<WBMediaPlaybackSourceView> *bestSourceViewForAutoPlay; // @synthesize bestSourceViewForAutoPlay=_bestSourceViewForAutoPlay;
@property(nonatomic) _Bool ignorePicCardCell; // @synthesize ignorePicCardCell=_ignorePicCardCell;
@property(nonatomic) unsigned long long lastActiveCellIndex; // @synthesize lastActiveCellIndex=_lastActiveCellIndex;
@property(nonatomic) long long picCellActiveCountdown; // @synthesize picCellActiveCountdown=_picCellActiveCountdown;
@property(retain, nonatomic) NSTimer *picCellActiveTimer; // @synthesize picCellActiveTimer=_picCellActiveTimer;
@property(nonatomic) _Bool muteStateWhenPlaying; // @synthesize muteStateWhenPlaying=_muteStateWhenPlaying;
@property(retain, nonatomic) WBVideoTimelinePreviewContentView *previewContentView; // @synthesize previewContentView=_previewContentView;
@property(nonatomic) _Bool recmmendVideoDisplayed; // @synthesize recmmendVideoDisplayed=_recmmendVideoDisplayed;
@property(retain, nonatomic) UIButton *nextVideoButton; // @synthesize nextVideoButton=_nextVideoButton;
@property(retain, nonatomic) WBContactEngine *contactEngine; // @synthesize contactEngine=_contactEngine;
@property(retain, nonatomic) WBStatus *baseStatus; // @synthesize baseStatus=_baseStatus;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSMutableArray *preloadedPlaybackIdentifiers; // @synthesize preloadedPlaybackIdentifiers=_preloadedPlaybackIdentifiers;
@property(nonatomic) _Bool loadMoreDisabled; // @synthesize loadMoreDisabled=_loadMoreDisabled;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(nonatomic) _Bool interactiveDismissing; // @synthesize interactiveDismissing=_interactiveDismissing;
@property(readonly, nonatomic) struct CGRect sourceFrameOnScreen; // @synthesize sourceFrameOnScreen=_sourceFrameOnScreen;
@property(nonatomic) __weak UIView<WBVideoPlayerSourceView> *timelineSourceView; // @synthesize timelineSourceView=_timelineSourceView;
@property(retain, nonatomic) NSArray *statuses; // @synthesize statuses=_statuses;
@property(retain, nonatomic) WBVideoPlaybackTransitionManager *transitionManager; // @synthesize transitionManager=_transitionManager;
@property(retain, nonatomic) WBMediaAutoPlayManager *playbackManager; // @synthesize playbackManager=_playbackManager;
@property(retain, nonatomic) WBVideoTimelineNewPlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (_Bool)shouldRefreshADPageInfo;
- (_Bool)supportVideoTags;
- (double)video_playbackMaxBufferDuration;
- (long long)video_maximumResolutionIndex;
- (_Bool)supportTextExpandable;
- (struct CGRect)tableViewVisibleRectOnScreenForMediaAnimatedTransition;
- (id)videoPrefetch_timelineItems;
- (void)escapeKeyPressed:(id)arg1;
- (id)keyCommands;
- (id)vrf_initialVideoItem;
- (void)playbackTransitionManager:(id)arg1 didFinishDismissalWithTransfered:(_Bool)arg2;
- (void)playbackTransitionManager:(id)arg1 didFinishPresentationWithTransfered:(_Bool)arg2;
- (void)playbackTransitionManagerWillBeginPresentation:(id)arg1;
- (void)playbackTransitionManager:(id)arg1 playerViewWillTransferFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 simulated:(_Bool)arg4 withTransitionCoordinator:(id)arg5;
- (void)muteButtonPressed:(id)arg1;
- (void)updateMuteState:(_Bool)arg1;
- (void)updateMuteButtonState;
- (void)volumeChanged:(id)arg1;
- (void)videoPreviewContentView:(id)arg1 didSelectIndexPath:(id)arg2;
- (_Bool)didPressLoadMoreFooterView:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)videoCollectionHelperDisabled;
- (void)reloadVideoTimelineWithStatuses:(id)arg1;
- (void)setupPageInfoKeyForStatus:(id)arg1;
- (_Bool)isValidFor:(id)arg1;
- (void)reloadVideoTimelineFromServer;
- (id)baseVideoItem;
- (long long)isSameStatusWithStatuses:(id)arg1;
- (id)getCurrentLogExtensionStirngWithStatuses:(id)arg1;
- (void)_logParamsForVideoTapWithIsNetwork:(long long)arg1 withStatuses:(id)arg2;
- (void)videoUpNextPluginDidFinishCountDown:(id)arg1;
- (_Bool)videoUpNextPluginShouldCountDown:(id)arg1;
- (id)providerForSourceView:(id)arg1;
- (void)videoPlayerController:(id)arg1 didPressMutebutton:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 willPerformPauseWithReason:(long long)arg2;
- (void)videoPlayerController:(id)arg1 didPerformPlayWithReason:(long long)arg2 reasonApplied:(_Bool)arg3;
- (void)videoPlayerController:(id)arg1 didUpdateCurrentTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlayerControllerUserDidTapOnBlankArea:(id)arg1;
- (_Bool)videoPlayerController:(id)arg1 shouldEnterFullscreenAnimated:(_Bool)arg2;
- (_Bool)videoPlayerController:(id)arg1 shouldEnterFullscreenByPressingFullScreenButton:(id)arg2;
- (_Bool)videoPlayerController:(id)arg1 shouldEnterFullscreenByPressingPlayButton:(id)arg2;
- (void)videoPlayerController:(id)arg1 didExitFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didEnterFullscreenAnimated:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didReceiveOrientationChangeNotificationWithOrientation:(long long)arg2;
- (void)videoPlayerControllerDidFinishPlayback:(id)arg1;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)autoPlayNextVideoInTimelinePluginView:(id)arg1;
- (_Bool)canPlayNextVideoInTimelinePluginView:(id)arg1;
- (id)autoPlayStatusInTimelinePluginView:(id)arg1;
- (void)playNextVideo;
- (_Bool)shouldStartPlayNextVideo;
- (_Bool)hasNextVideo:(_Bool *)arg1 nextIndex:(unsigned long long *)arg2;
@property(readonly, nonatomic) _Bool haveNextVideo;
- (id)cellForSourceView:(id)arg1;
- (_Bool)shouldPlayToEndWithVideoPlayerController:(id)arg1;
- (void)videoPlayerController:(id)arg1 didChangeVideoPlayerItem:(id)arg2;
- (_Bool)shouldReplayForPlayerController:(id)arg1;
- (_Bool)videoUpNextPluginInvisibleWhenInlinePlaybackFinished:(id)arg1;
- (_Bool)mediaAutoPlayShouldStartNow;
- (struct UIEdgeInsets)generalVideoPlaybackTableViewContentInsets;
- (struct CGRect)mediaAutoPlayVisibleRect;
- (void)tableViewDidFinishScrolling:(id)arg1;
- (void)startAutoPlayIfNeeded;
- (_Bool)mediaAutoPlayValidateSourceView:(id)arg1;
- (id)currentMediaAutoPlayProviderCandidates;
- (void)setNextVideoButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)nextVideoButtonPressed:(id)arg1;
- (void)startThreaterModeTimer;
- (void)stopThreaterModeTimer;
- (void)enterThreaterModeIfNeeded;
- (void)exitFromThreaterModeIfNeeded;
- (_Bool)_enterThreaterMode;
- (_Bool)_exitFromThreaterMode;
@property(readonly, nonatomic) _Bool shouldUpdateStatusBarState;
- (void)tapGesture:(id)arg1;
- (void)dismissCustomActionSheet;
- (void)_slientScrollToCellAtIndexPath:(id)arg1;
- (void)scrollToCellAtIndexPath:(id)arg1;
- (void)_slientScrollToSourceView:(id)arg1;
- (void)scrollToSourceView:(id)arg1;
- (void)videoTimelineTableViewCell:(id)arg1 didPressTag:(id)arg2;
- (void)videoTimelineTableViewCell:(id)arg1 sourceView:(id)arg2 didBecomeBestCellForManager:(id)arg3;
- (void)videoTimelineTableViewCell:(id)arg1 didPressExtraActionButton:(id)arg2;
- (id)extraActionButtonTypesForStatus:(id)arg1;
- (void)videoTimelineTableViewCell:(id)arg1 didPressContentView:(id)arg2;
- (void)videoTimelineTableViewCell:(id)arg1 didPressInactiveOverlay:(id)arg2;
- (void)videoTimelineTableViewCell:(id)arg1 didPressVideoSourceView:(id)arg2;
- (void)videoTimelineTableViewCell:(id)arg1 didPressExpandTextButton:(id)arg2;
- (void)closeButtonPressed:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)teardown;
- (void)applicationWillResignActive:(id)arg1;
- (void)refreshDataIfNeed;
- (void)reachabilityChanged:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)revertPicActiveTimerState;
- (void)timerRepeat;
- (void)viewControllerStateDidChange:(id)arg1;
- (_Bool)generalMediaAutoPlayIgnored;
- (void)playVideoIfNeed;
- (void)playVideoWithPlay:(_Bool)arg1 reason:(id)arg2;
- (void)cellDidBecomeHighlight:(id)arg1;
- (void)deleteTimeLineItemWithNotification:(id)arg1;
- (void)handleTimelineItemDidRemoveNotification:(id)arg1;
- (_Bool)activeCellIsPicCardCell;
- (id)activeCell;
@property(readonly, nonatomic) WBVideoTimelineTableViewCell *playingCell;
- (id)timeRecorder:(id)arg1 willStartRecordAtIndexPath:(id)arg2;
@property(nonatomic) _Bool isShowing;
- (id)rightItemsViewForVideoSegmentSwipeViewController:(id)arg1;
- (void)showPreviewContentView;
- (_Bool)isLastTableViewCell:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTableViewCellState:(_Bool)arg1;
- (void)updateTableViewCellState;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_finishSoundPlayback;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)autoScroll;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateVideoAudioPlaybackState;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)shouldCaptureViewWhenDismiss;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createDefaultTransitionManager;
- (id)mediaPlaybackService;
- (id)moduleID;
- (id)uiCode;
- (id)loadMoreFooterView;
- (id)loadMoreWrapper;
- (void)viewDidLoad;
- (id)copyStatus:(id)arg1;
- (void)configVideoPlayerControllerPlugins;
- (id)initWithSourceView:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithVideoItem:(id)arg1 sourceView:(id)arg2 openURLParams:(struct NSMutableDictionary *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

