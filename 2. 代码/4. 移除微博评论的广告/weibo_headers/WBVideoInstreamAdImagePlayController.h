//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSTimer, UIButton, UIControl, UIImage, UIImageView, UIView, WBVideoInstreamAdCountDownPluginView, WBVideoInstreamAdItem, WBVideoLoadingIndicatorView, WBVideoPlayerController;

@interface WBVideoInstreamAdImagePlayController : NSObject
{
    _Bool _allowBackButton;
    WBVideoPlayerController *_hostPlayerController;
    WBVideoInstreamAdItem *_instreamAdItem;
    unsigned long long _playbackState;
    UIView *_sourceView;
    NSTimer *_timer;
    UIImage *_displayImage;
    UIView *_view;
    UIControl *_backgroundControl;
    UIImageView *_imageView;
    WBVideoLoadingIndicatorView *_loadingIndicator;
    UIButton *_backButton;
    WBVideoInstreamAdCountDownPluginView *_countDownView;
    NSHashTable *_listeners;
    NSMutableDictionary *_currentImageDic;
    CDStruct_1b6d18a9 _totalDuration;
}

@property(retain, nonatomic) NSMutableDictionary *currentImageDic; // @synthesize currentImageDic=_currentImageDic;
@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) WBVideoInstreamAdCountDownPluginView *countDownView; // @synthesize countDownView=_countDownView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) WBVideoLoadingIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIControl *backgroundControl; // @synthesize backgroundControl=_backgroundControl;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) _Bool allowBackButton; // @synthesize allowBackButton=_allowBackButton;
@property(nonatomic) unsigned long long playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, nonatomic) CDStruct_1b6d18a9 totalDuration; // @synthesize totalDuration=_totalDuration;
@property(retain, nonatomic) WBVideoInstreamAdItem *instreamAdItem; // @synthesize instreamAdItem=_instreamAdItem;
@property(nonatomic) __weak WBVideoPlayerController *hostPlayerController; // @synthesize hostPlayerController=_hostPlayerController;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)customAdIdentifier;
- (void)prepareImageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)backGroundControlPressed:(id)arg1;
- (void)backAction:(id)arg1;
- (void)timerAction;
- (void)finishPlayback:(_Bool)arg1;
- (void)resumePlayback;
- (void)pausePlayback:(_Bool)arg1;
- (void)transferToHostPlayerController:(id)arg1;
- (void)playInstreamAdItem:(id)arg1 sourceView:(id)arg2 resume:(_Bool)arg3;
- (void)updateControlsVisibility;
- (void)updateViewsWithFullscreenState:(_Bool)arg1;
- (void)layoutViews;
- (void)setupUI;
- (void)_prepareToPlay:(CDUnknownBlockType)arg1;
- (id)initWithHostPlayerController:(id)arg1;
- (void)dealloc;

@end

