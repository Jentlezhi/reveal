//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BU_ZFPlayerControlViewDelagate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AVAssetImageGenerator, AVPlayer, AVPlayerItem, AVPlayerLayer, AVURLAsset, BUResourceLoaderManager, BU_ZFPlayerModel, NSArray, NSDictionary, NSIndexPath, NSString, NSURL, UIImage, UIPanGestureRecognizer, UIScrollView, UISlider, UITapGestureRecognizer;
@protocol BU_ZFPlayerDelegate;

@interface BU_ZFPlayerView : UIView <UIGestureRecognizerDelegate, UIAlertViewDelegate, BU_ZFPlayerControlViewDelagate>
{
    _Bool _hasPreviewView;
    _Bool _isPauseByUser;
    _Bool _configureReady;
    _Bool _mute;
    _Bool _stopPlayWhileCellNotVisable;
    _Bool _cellPlayerOnCenter;
    _Bool _playerPushedOrPresented;
    _Bool _isFullScreen;
    _Bool _shouldAutoRotate;
    _Bool _didEnterBackground;
    _Bool _caheEnable;
    _Bool _isLocked;
    _Bool _isVolume;
    _Bool _isLocalVideo;
    _Bool _repeatToPlay;
    _Bool _playDidEnd;
    _Bool _isAutoPlay;
    _Bool _viewDisappear;
    _Bool _isCellVideo;
    _Bool _isBottomVideo;
    _Bool _isDragged;
    long long _playerLayerGravity;
    id <BU_ZFPlayerDelegate> _delegate;
    long long _state;
    long long _option;
    UIView *_controlView;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVURLAsset *_urlAsset;
    AVAssetImageGenerator *_imageGenerator;
    AVPlayerLayer *_playerLayer;
    id _timeObserve;
    UISlider *_volumeViewSlider;
    double _sumTime;
    long long _panDirection;
    double _sliderLastValue;
    UITapGestureRecognizer *_singleTap;
    UITapGestureRecognizer *_doubleTap;
    NSArray *_videoURLArray;
    UIImage *_thumbImg;
    NSString *_videoGravity;
    UIScrollView *_scrollView;
    NSIndexPath *_indexPath;
    UIPanGestureRecognizer *_shrinkPanGesture;
    UIPanGestureRecognizer *_controlPanGesture;
    BU_ZFPlayerModel *_playerModel;
    long long _seekTime;
    NSURL *_videoURL;
    NSString *_videoFileHash;
    NSDictionary *_resolutionDic;
    UIView *_playerSuperView;
    BUResourceLoaderManager *_resourceLoaderManager;
    struct CGPoint _shrinkRightBottomPoint;
}

+ (id)sharedPlayerView;
@property(retain, nonatomic) BUResourceLoaderManager *resourceLoaderManager; // @synthesize resourceLoaderManager=_resourceLoaderManager;
@property(nonatomic) __weak UIView *playerSuperView; // @synthesize playerSuperView=_playerSuperView;
@property(retain, nonatomic) NSDictionary *resolutionDic; // @synthesize resolutionDic=_resolutionDic;
@property(copy, nonatomic) NSString *videoFileHash; // @synthesize videoFileHash=_videoFileHash;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) long long seekTime; // @synthesize seekTime=_seekTime;
@property(retain, nonatomic) BU_ZFPlayerModel *playerModel; // @synthesize playerModel=_playerModel;
@property(retain, nonatomic) UIPanGestureRecognizer *controlPanGesture; // @synthesize controlPanGesture=_controlPanGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *shrinkPanGesture; // @synthesize shrinkPanGesture=_shrinkPanGesture;
@property(nonatomic) struct CGPoint shrinkRightBottomPoint; // @synthesize shrinkRightBottomPoint=_shrinkRightBottomPoint;
@property(nonatomic) _Bool isDragged; // @synthesize isDragged=_isDragged;
@property(nonatomic) _Bool isBottomVideo; // @synthesize isBottomVideo=_isBottomVideo;
@property(nonatomic) _Bool isCellVideo; // @synthesize isCellVideo=_isCellVideo;
@property(nonatomic) _Bool viewDisappear; // @synthesize viewDisappear=_viewDisappear;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(retain, nonatomic) UIImage *thumbImg; // @synthesize thumbImg=_thumbImg;
@property(retain, nonatomic) NSArray *videoURLArray; // @synthesize videoURLArray=_videoURLArray;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTap; // @synthesize doubleTap=_doubleTap;
@property(retain, nonatomic) UITapGestureRecognizer *singleTap; // @synthesize singleTap=_singleTap;
@property(nonatomic) _Bool isAutoPlay; // @synthesize isAutoPlay=_isAutoPlay;
@property(nonatomic) _Bool playDidEnd; // @synthesize playDidEnd=_playDidEnd;
@property(nonatomic) _Bool repeatToPlay; // @synthesize repeatToPlay=_repeatToPlay;
@property(nonatomic) double sliderLastValue; // @synthesize sliderLastValue=_sliderLastValue;
@property(nonatomic) _Bool isLocalVideo; // @synthesize isLocalVideo=_isLocalVideo;
@property(nonatomic) _Bool isVolume; // @synthesize isVolume=_isVolume;
@property(nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) long long panDirection; // @synthesize panDirection=_panDirection;
@property(nonatomic) double sumTime; // @synthesize sumTime=_sumTime;
@property(retain, nonatomic) UISlider *volumeViewSlider; // @synthesize volumeViewSlider=_volumeViewSlider;
@property(retain, nonatomic) id timeObserve; // @synthesize timeObserve=_timeObserve;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(retain, nonatomic) AVURLAsset *urlAsset; // @synthesize urlAsset=_urlAsset;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool caheEnable; // @synthesize caheEnable=_caheEnable;
@property(nonatomic) _Bool didEnterBackground; // @synthesize didEnterBackground=_didEnterBackground;
@property(retain, nonatomic) UIView *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) long long option; // @synthesize option=_option;
@property(nonatomic) _Bool shouldAutoRotate; // @synthesize shouldAutoRotate=_shouldAutoRotate;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) _Bool playerPushedOrPresented; // @synthesize playerPushedOrPresented=_playerPushedOrPresented;
@property(nonatomic) _Bool cellPlayerOnCenter; // @synthesize cellPlayerOnCenter=_cellPlayerOnCenter;
@property(nonatomic) _Bool stopPlayWhileCellNotVisable; // @synthesize stopPlayWhileCellNotVisable=_stopPlayWhileCellNotVisable;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool configureReady; // @synthesize configureReady=_configureReady;
@property(nonatomic) _Bool isPauseByUser; // @synthesize isPauseByUser=_isPauseByUser;
@property(nonatomic) __weak id <BU_ZFPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasPreviewView; // @synthesize hasPreviewView=_hasPreviewView;
@property(nonatomic) long long playerLayerGravity; // @synthesize playerLayerGravity=_playerLayerGravity;
- (void).cxx_destruct;
- (void)zf_controlViewTouchesBegan:(id)arg1;
- (void)zf_controlViewWillHidden:(id)arg1 isFullscreen:(_Bool)arg2;
- (void)zf_controlViewWillShow:(id)arg1 isFullscreen:(_Bool)arg2;
- (void)zf_controlView:(id)arg1 progressSliderTouchEnded:(id)arg2;
- (void)zf_controlView:(id)arg1 progressSliderValueChanged:(id)arg2;
- (void)zf_controlView:(id)arg1 progressSliderTap:(double)arg2;
- (void)zf_controlView:(id)arg1 downloadVideoAction:(id)arg2;
- (void)zf_controlView:(id)arg1 resolutionAction:(id)arg2;
- (void)zf_controlView:(id)arg1 failAction:(id)arg2;
- (void)zf_controlView:(id)arg1 repeatPlayAction:(id)arg2;
- (void)zf_controlView:(id)arg1 cneterPlayAction:(id)arg2;
- (void)zf_controlView:(id)arg1 lockScreenAction:(id)arg2;
- (void)zf_controlView:(id)arg1 fullScreenAction:(id)arg2;
- (void)zf_controlView:(id)arg1 closeAction:(id)arg2;
- (void)zf_controlView:(id)arg1 backAction:(id)arg2;
- (void)zf_controlView:(id)arg1 playAction:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)durationStringWithTime:(int)arg1;
- (void)horizontalMoved:(double)arg1;
- (void)verticalMoved:(double)arg1;
- (void)panDirection:(id)arg1;
- (void)seekToTime:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)appDidEnterPlayground;
- (void)appDidEnterBackground;
- (void)moviePlayFailedToEnd:(id)arg1;
- (void)moviePlayDidEnd:(id)arg1;
- (void)_fullScreenAction;
- (void)shrikPanAction:(id)arg1;
- (void)doubleTapAction:(id)arg1;
- (void)singleTapAction:(id)arg1;
@property(readonly, nonatomic) double currentPlayTime;
@property(readonly, nonatomic) double watchedDuration;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double availableDuration;
- (void)bufferingSomeSecond;
- (void)unLockTheScreen;
- (void)lockScreenAction:(id)arg1;
- (void)onStatusBarOrientationChange;
- (void)onDeviceOrientationChange;
- (void)interfaceOrientation:(long long)arg1;
- (struct CGAffineTransform)getTransformRotationAngleByOrientation:(long long)arg1;
- (void)toOrientation:(long long)arg1;
- (void)setOrientationPortraitConstraint;
- (void)setOrientationLandscapeConstraint:(long long)arg1;
- (void)updatePlayerViewToCell;
- (void)updatePlayerViewToBottom;
- (void)handleScrollOffsetWithDict:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)audioRouteChangeListenerCallback:(id)arg1;
- (void)configureVolume;
- (void)createTimer;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)createGesture;
- (void)configZFPlayer;
- (void)cellVideoWithScrollView:(id)arg1 AtIndexPath:(id)arg2;
- (void)changeOrientationScreen;
- (void)removeTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)stop;
- (void)pause;
- (void)replay;
- (void)play;
- (void)resetToPlayNewVideo:(id)arg1;
- (void)resetPlayer;
- (void)addPlayerToFatherView:(id)arg1;
- (void)autoPlayTheVideo;
- (void)playerModel:(id)arg1;
- (void)playerControlView:(id)arg1 playerModel:(id)arg2;
- (void)layoutSubviews;
- (void)addNotifications;
- (void)resetToPlayNewURL;
- (void)dealloc;
- (void)initializeThePlayer;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

