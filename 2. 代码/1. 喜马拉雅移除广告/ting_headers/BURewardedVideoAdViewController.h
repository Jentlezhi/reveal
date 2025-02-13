//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BURewardedVideoAdDelegate-Protocol.h"
#import "BURewardedVideoDisplayDelegate-Protocol.h"
#import "BURewardedVideoWebViewDelegate-Protocol.h"

@class BUAdSlot, BUMaterialMeta, BUPlayableLoadingWebViewController, BURewardedVideoDisplayViewController, BURewardedVideoWebViewController, BUTimer, BUURitSetingModel, NSString, UIButton, UILabel;
@protocol BUVideoAdDelegate;

@interface BURewardedVideoAdViewController : UIViewController <BURewardedVideoDisplayDelegate, BURewardedVideoAdDelegate, BURewardedVideoWebViewDelegate>
{
    _Bool _isChildLandscapeRotate;
    _Bool _isRotate;
    _Bool _supportPortraitLandscape;
    _Bool _mute;
    _Bool _isReportEvent;
    _Bool _purePlayableSendRewardFromH5;
    _Bool _couldSendRewardForPurePlayable;
    _Bool _isShowAlertView;
    id <BUVideoAdDelegate> _rewardedVideoAd;
    UIViewController *_currentViewController;
    BURewardedVideoDisplayViewController *_rewardedVideoDisplayViewController;
    BURewardedVideoWebViewController *_rewardedVideoWebViewController;
    BUPlayableLoadingWebViewController *_loadingWebView;
    BUMaterialMeta *_materialMeta;
    BUAdSlot *_slot;
    NSString *_startTimestamp;
    NSString *_endTimestamp;
    unsigned long long _videoOrientation;
    double _startLoadTime;
    double _startShowTime;
    BUURitSetingModel *_ritModel;
    UILabel *_leftSeconds;
    BUTimer *_leftTimer;
    UIButton *_closeButton;
    UIButton *_silentButton;
}

@property(nonatomic) _Bool isShowAlertView; // @synthesize isShowAlertView=_isShowAlertView;
@property(nonatomic) _Bool couldSendRewardForPurePlayable; // @synthesize couldSendRewardForPurePlayable=_couldSendRewardForPurePlayable;
@property(nonatomic) _Bool purePlayableSendRewardFromH5; // @synthesize purePlayableSendRewardFromH5=_purePlayableSendRewardFromH5;
@property(nonatomic) _Bool isReportEvent; // @synthesize isReportEvent=_isReportEvent;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(retain, nonatomic) UIButton *silentButton; // @synthesize silentButton=_silentButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) BUTimer *leftTimer; // @synthesize leftTimer=_leftTimer;
@property(retain, nonatomic) UILabel *leftSeconds; // @synthesize leftSeconds=_leftSeconds;
@property(retain, nonatomic) BUURitSetingModel *ritModel; // @synthesize ritModel=_ritModel;
@property(nonatomic) double startShowTime; // @synthesize startShowTime=_startShowTime;
@property(nonatomic) double startLoadTime; // @synthesize startLoadTime=_startLoadTime;
@property(nonatomic) _Bool supportPortraitLandscape; // @synthesize supportPortraitLandscape=_supportPortraitLandscape;
@property(nonatomic) unsigned long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) _Bool isRotate; // @synthesize isRotate=_isRotate;
@property(nonatomic) _Bool isChildLandscapeRotate; // @synthesize isChildLandscapeRotate=_isChildLandscapeRotate;
@property(retain, nonatomic) NSString *endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(retain, nonatomic) NSString *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(retain, nonatomic) BUAdSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) BUMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(retain, nonatomic) BUPlayableLoadingWebViewController *loadingWebView; // @synthesize loadingWebView=_loadingWebView;
@property(retain, nonatomic) BURewardedVideoWebViewController *rewardedVideoWebViewController; // @synthesize rewardedVideoWebViewController=_rewardedVideoWebViewController;
@property(retain, nonatomic) BURewardedVideoDisplayViewController *rewardedVideoDisplayViewController; // @synthesize rewardedVideoDisplayViewController=_rewardedVideoDisplayViewController;
@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) id <BUVideoAdDelegate> rewardedVideoAd; // @synthesize rewardedVideoAd=_rewardedVideoAd;
- (void).cxx_destruct;
- (_Bool)supportLandscapeBySystemConfiguration;
- (void)preloadAppStore;
- (id)setingModelForRit;
- (long long)getCloseTimeValue;
- (long long)getDurationValue;
- (_Bool)getMuteType;
- (void)confirmCloseWindow;
- (void)closeButtonTapped:(id)arg1;
- (void)leftLblControl;
- (void)closeBtnControl;
- (void)rewardReport;
- (void)updateLeftSeconds:(id)arg1;
- (void)bu_didEnterBackgroundNotification:(id)arg1;
- (void)bu_willEnterForegroundNotification:(id)arg1;
- (void)startTimer;
- (void)silentButtonTapped:(id)arg1;
- (void)switchToWebViewMute:(_Bool)arg1;
- (id)getTrackTag;
- (void)openAppStore;
- (void)rewardedVideoClickSkip;
- (void)rewardedVideoClickDownload;
- (void)playerDidPlayFinish:(id)arg1 error:(id)arg2;
- (void)playerDidPlayedToTimeOfRportEvent:(double)arg1;
- (void)rewardVideoRportEventWithDurationTime:(double)arg1;
- (void)playerReadyToPlay:(id)arg1;
- (void)purePlayableSendRewardFromH5Callback;
- (void)bu_webviewLoadFinish:(id)arg1;
- (void)rewardedVideoH5AdDidClickNeedJump:(_Bool)arg1;
- (void)rewardedVideoAdClose;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)storeKitDidClose:(id)arg1;
- (void)storeKitWillOpen:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)addNotification;
- (id)initViewControllerWithAd:(id)arg1 slot:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

