//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBVideoPlaybackEventListener-Protocol.h"
#import "WBVideoPluginResolutionButtonItemResolverEventListener-Protocol.h"

@class NSString, UIButton, UILabel, WBVideoGradientColorView, WBVideoPlayerController, WBVideoPluginResolutionButtonItemResolver, WBVideoPluginViewBottomProgressView, WBVideoProgressBarDefinitionBubbleView, WBVideoProgressSlider, _WBVideoControlsProgressToolbar;
@protocol WBVideoControlsProgressViewDelegate;

@interface WBVideoControlsProgressView : UIView <WBVideoPlaybackEventListener, WBVideoPluginResolutionButtonItemResolverEventListener>
{
    _Bool _active;
    _Bool _gradientDarker;
    _Bool _enlargeUIStyle;
    _Bool _hiddenBottomProgressBar;
    _Bool _showResolutionbutton;
    _Bool _showPlaySpeedButton;
    _Bool _showFullscreenBtn;
    _Bool _fullscreenBtnSelcted;
    _Bool _ignoreContentTouchesDelays;
    _Bool _currentIsAuto;
    id <WBVideoControlsProgressViewDelegate> _delegate;
    double _internalRightPadding;
    NSString *_resolutionButtonTitleOverride;
    NSString *_playSpeedButtonTitleOverride;
    WBVideoProgressSlider *_playProgressSlider;
    UILabel *_currentTimeLabel;
    UILabel *_totalTimeLabel;
    WBVideoProgressSlider *_cacheProgressSlider;
    WBVideoPlayerController *_videoController;
    UIButton *_resolutionButton;
    UIButton *_playSpeedButton;
    UIButton *_fullScreenButton;
    _WBVideoControlsProgressToolbar *_toolBar;
    WBVideoPluginViewBottomProgressView *_bottomProgressView;
    WBVideoGradientColorView *_gradientView;
    WBVideoPluginResolutionButtonItemResolver *_resolutionButtonItemResolver;
    WBVideoProgressBarDefinitionBubbleView *_definitionBubbleView;
    struct UIEdgeInsets _safeInsets;
}

@property(nonatomic) _Bool currentIsAuto; // @synthesize currentIsAuto=_currentIsAuto;
@property(retain, nonatomic) WBVideoProgressBarDefinitionBubbleView *definitionBubbleView; // @synthesize definitionBubbleView=_definitionBubbleView;
@property(retain, nonatomic) WBVideoPluginResolutionButtonItemResolver *resolutionButtonItemResolver; // @synthesize resolutionButtonItemResolver=_resolutionButtonItemResolver;
@property(retain, nonatomic) WBVideoGradientColorView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) WBVideoPluginViewBottomProgressView *bottomProgressView; // @synthesize bottomProgressView=_bottomProgressView;
@property(retain, nonatomic) _WBVideoControlsProgressToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) UIButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(retain, nonatomic) UIButton *playSpeedButton; // @synthesize playSpeedButton=_playSpeedButton;
@property(retain, nonatomic) UIButton *resolutionButton; // @synthesize resolutionButton=_resolutionButton;
@property(nonatomic) __weak WBVideoPlayerController *videoController; // @synthesize videoController=_videoController;
@property(retain, nonatomic) WBVideoProgressSlider *cacheProgressSlider; // @synthesize cacheProgressSlider=_cacheProgressSlider;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) WBVideoProgressSlider *playProgressSlider; // @synthesize playProgressSlider=_playProgressSlider;
@property(retain, nonatomic) NSString *playSpeedButtonTitleOverride; // @synthesize playSpeedButtonTitleOverride=_playSpeedButtonTitleOverride;
@property(retain, nonatomic) NSString *resolutionButtonTitleOverride; // @synthesize resolutionButtonTitleOverride=_resolutionButtonTitleOverride;
@property(nonatomic) struct UIEdgeInsets safeInsets; // @synthesize safeInsets=_safeInsets;
@property(nonatomic) double internalRightPadding; // @synthesize internalRightPadding=_internalRightPadding;
@property(nonatomic) _Bool ignoreContentTouchesDelays; // @synthesize ignoreContentTouchesDelays=_ignoreContentTouchesDelays;
@property(nonatomic) _Bool fullscreenBtnSelcted; // @synthesize fullscreenBtnSelcted=_fullscreenBtnSelcted;
@property(nonatomic) _Bool showFullscreenBtn; // @synthesize showFullscreenBtn=_showFullscreenBtn;
@property(nonatomic) _Bool showPlaySpeedButton; // @synthesize showPlaySpeedButton=_showPlaySpeedButton;
@property(nonatomic) _Bool showResolutionbutton; // @synthesize showResolutionbutton=_showResolutionbutton;
@property(nonatomic) _Bool hiddenBottomProgressBar; // @synthesize hiddenBottomProgressBar=_hiddenBottomProgressBar;
@property(nonatomic) _Bool enlargeUIStyle; // @synthesize enlargeUIStyle=_enlargeUIStyle;
@property(nonatomic) _Bool gradientDarker; // @synthesize gradientDarker=_gradientDarker;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <WBVideoControlsProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoPlayerController:(id)arg1 didUpdateTransferState:(_Bool)arg2;
- (void)videoPlayerController:(id)arg1 didUpdateCurrentMediaSelection:(id)arg2;
- (void)updateBubbleViewTitle;
- (void)updateCurrentIsAuto;
- (void)pluginResolutionButtonItemResolver:(id)arg1 didUpdateResolutionButtonItems:(id)arg2 selectedButtonItem:(id)arg3;
- (_Bool)isPlaySpeedEnable;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (void)layoutSubviews;
- (void)updateTimeLabels:(id)arg1 remainTime:(id)arg2;
- (void)updateResolutionButtonSize;
@property(nonatomic) _Bool resolutionBtnSelcted;
@property(nonatomic) double cacheProgress;
@property(nonatomic) double progress;
- (void)playSpeedButtonPressed:(id)arg1;
- (void)resolutionButtonPressed:(id)arg1;
- (void)progressChangedConfirm:(id)arg1;
- (void)progressChanged:(id)arg1;
- (void)progressSlidePressed:(id)arg1;
- (void)didTapToolBar;
- (void)fullScreenButtonPressed:(id)arg1;
@property(readonly, nonatomic) double preferredLayoutTop;
@property(readonly, nonatomic) double toolbarCenterY;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

