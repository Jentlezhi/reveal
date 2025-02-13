//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveBaseOverlayController.h"

#import "LiveRoomCommentManagerProtocol-Protocol.h"
#import "TBLiveScreenRecordViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class LiveRoomController, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, TBLiveBrandADManager, TBLiveBroadcasterScore, TBLiveFollowCache, TBLiveGoodsWithVideoItem, TBLiveMarketingInfoView, TBLiveNetFlow, TBLiveOverlayView, TBLiveRecommendView, TBLiveSRMoreView, TBLiveScreenRecordView, TBLiveTextField, TBLiveUserLevelHierarchyEntryModel, TBLiveUserLevelPointsUPView, TBLiveUserLevelUPView, TBLiveWebContainerManager, UIImageView, UILabel, UIView;
@protocol LiveRoomFollowProtocol, TBLiveOverlayActionDelegate;

@interface TBLiveOverlayController : TBLiveBaseOverlayController <UIGestureRecognizerDelegate, TBLiveScreenRecordViewDelegate, LiveRoomCommentManagerProtocol, UITextFieldDelegate>
{
    _Bool _switchDataModelPrepare;
    _Bool _isJumpToFaceVerify;
    _Bool _isAnimatingGoodsViewClose;
    _Bool _liveFinished;
    _Bool _broadcasterScoreWithBlackList;
    _Bool _shownVideoGoodsFromHome;
    _Bool _shouldHideGoodsShowCase;
    _Bool _isTimePlay;
    _Bool _isTBTVShowProgram;
    _Bool _anchorReponseViewShowing;
    _Bool _finishReportEnterEvent;
    _Bool _isUpDownSwitch;
    _Bool _hasShowSystemNotice;
    _Bool _isRefreshContollerWithData;
    _Bool _isGotCommentList;
    _Bool _dynamicRenderFailed;
    _Bool _haveModelLayer;
    NSMutableDictionary *_visitorIdentity;
    NSString *_scopeId;
    NSString *_subScopeId;
    TBLiveUserLevelHierarchyEntryModel *_userLevelEntryModel;
    NSMutableDictionary *_actionCacheCounts;
    TBLiveOverlayView *_overlayView;
    TBLiveBrandADManager *_brandADManager;
    long long _overlayType;
    id <TBLiveOverlayActionDelegate> _delegate;
    CDUnknownBlockType _liveMessInfoBlock;
    CDUnknownBlockType _linkLiveApplyBlock;
    CDUnknownBlockType _checkLinLiveStatus;
    TBLiveWebContainerManager *_webManager;
    LiveRoomController *_sourceVC;
    CDUnknownBlockType _receiveInteractiveMessageBlock;
    NSMutableDictionary *_banGestureRects;
    NSString *_liveId;
    NSString *_accountId;
    NSArray *_lastShareGoodsList;
    NSTimer *_liveReportTimer;
    double _lastReportTime;
    TBLiveGoodsWithVideoItem *_goodsWithVideoView;
    UIImageView *_microphoneImg;
    unsigned long long _liveReportCounter;
    unsigned long long _totolStayTimes;
    unsigned long long _totolStayMinutes;
    unsigned long long _goodsVideoTimeCounter;
    TBLiveBroadcasterScore *_broadcasterScore;
    TBLiveRecommendView *_recommendView;
    TBLiveSRMoreView *_moreView;
    TBLiveScreenRecordView *_recordView;
    double _startLiveTime;
    unsigned long long _upDownVideoIndex;
    long long _refreshLiveOrEnterLive;
    UIView *_followView;
    TBLiveTextField *_linkInputField;
    id <LiveRoomFollowProtocol> _followAdapter;
    TBLiveFollowCache *_followCache;
    TBLiveUserLevelUPView *_userLevelUPView;
    TBLiveUserLevelPointsUPView *_userPointsUPView;
    UILabel *_pointsUPLabel;
    NSMutableArray *_anchorResponseMessages;
    NSArray *_userLevelConfig;
    unsigned long long _currentUserPoints;
    TBLiveNetFlow *_netflowView;
    TBLiveMarketingInfoView *_marketingInfoView;
    NSString *_tbtvLiveId;
    long long _tbtvDatiId;
    NSString *_usePullCDNConfig;
    NSString *_lastLikeCounter;
    UIView *_staticWeexView;
    UIView *_dynamicWeexView;
    NSTimer *_hideTimeShiftGoodsViewTimer;
}

+ (_Bool)isRequestComment:(long long)arg1;
+ (id)identifier;
@property(retain, nonatomic) NSTimer *hideTimeShiftGoodsViewTimer; // @synthesize hideTimeShiftGoodsViewTimer=_hideTimeShiftGoodsViewTimer;
@property(nonatomic) _Bool haveModelLayer; // @synthesize haveModelLayer=_haveModelLayer;
@property(nonatomic) _Bool dynamicRenderFailed; // @synthesize dynamicRenderFailed=_dynamicRenderFailed;
@property(retain, nonatomic) UIView *dynamicWeexView; // @synthesize dynamicWeexView=_dynamicWeexView;
@property(retain, nonatomic) UIView *staticWeexView; // @synthesize staticWeexView=_staticWeexView;
@property(copy, nonatomic) NSString *lastLikeCounter; // @synthesize lastLikeCounter=_lastLikeCounter;
@property(copy, nonatomic) NSString *usePullCDNConfig; // @synthesize usePullCDNConfig=_usePullCDNConfig;
@property(nonatomic) _Bool isGotCommentList; // @synthesize isGotCommentList=_isGotCommentList;
@property(nonatomic) _Bool isRefreshContollerWithData; // @synthesize isRefreshContollerWithData=_isRefreshContollerWithData;
@property(nonatomic) long long tbtvDatiId; // @synthesize tbtvDatiId=_tbtvDatiId;
@property(copy, nonatomic) NSString *tbtvLiveId; // @synthesize tbtvLiveId=_tbtvLiveId;
@property(nonatomic) _Bool hasShowSystemNotice; // @synthesize hasShowSystemNotice=_hasShowSystemNotice;
@property(nonatomic) _Bool isUpDownSwitch; // @synthesize isUpDownSwitch=_isUpDownSwitch;
@property(retain, nonatomic) TBLiveMarketingInfoView *marketingInfoView; // @synthesize marketingInfoView=_marketingInfoView;
@property(retain, nonatomic) TBLiveNetFlow *netflowView; // @synthesize netflowView=_netflowView;
@property(nonatomic) unsigned long long currentUserPoints; // @synthesize currentUserPoints=_currentUserPoints;
@property(nonatomic) _Bool finishReportEnterEvent; // @synthesize finishReportEnterEvent=_finishReportEnterEvent;
@property(retain, nonatomic) NSArray *userLevelConfig; // @synthesize userLevelConfig=_userLevelConfig;
@property(nonatomic) _Bool anchorReponseViewShowing; // @synthesize anchorReponseViewShowing=_anchorReponseViewShowing;
@property(retain, nonatomic) NSMutableArray *anchorResponseMessages; // @synthesize anchorResponseMessages=_anchorResponseMessages;
@property(retain, nonatomic) UILabel *pointsUPLabel; // @synthesize pointsUPLabel=_pointsUPLabel;
@property(retain, nonatomic) TBLiveUserLevelPointsUPView *userPointsUPView; // @synthesize userPointsUPView=_userPointsUPView;
@property(retain, nonatomic) TBLiveUserLevelUPView *userLevelUPView; // @synthesize userLevelUPView=_userLevelUPView;
@property(retain, nonatomic) TBLiveFollowCache *followCache; // @synthesize followCache=_followCache;
@property(nonatomic) _Bool isTBTVShowProgram; // @synthesize isTBTVShowProgram=_isTBTVShowProgram;
@property(nonatomic) _Bool isTimePlay; // @synthesize isTimePlay=_isTimePlay;
@property(nonatomic) _Bool shouldHideGoodsShowCase; // @synthesize shouldHideGoodsShowCase=_shouldHideGoodsShowCase;
@property(retain, nonatomic) id <LiveRoomFollowProtocol> followAdapter; // @synthesize followAdapter=_followAdapter;
@property(nonatomic) _Bool shownVideoGoodsFromHome; // @synthesize shownVideoGoodsFromHome=_shownVideoGoodsFromHome;
@property(retain, nonatomic) TBLiveTextField *linkInputField; // @synthesize linkInputField=_linkInputField;
@property(retain, nonatomic) UIView *followView; // @synthesize followView=_followView;
@property(nonatomic) long long refreshLiveOrEnterLive; // @synthesize refreshLiveOrEnterLive=_refreshLiveOrEnterLive;
@property(nonatomic) unsigned long long upDownVideoIndex; // @synthesize upDownVideoIndex=_upDownVideoIndex;
@property(nonatomic) double startLiveTime; // @synthesize startLiveTime=_startLiveTime;
@property(retain, nonatomic) TBLiveScreenRecordView *recordView; // @synthesize recordView=_recordView;
@property(retain, nonatomic) TBLiveSRMoreView *moreView; // @synthesize moreView=_moreView;
@property(nonatomic) _Bool broadcasterScoreWithBlackList; // @synthesize broadcasterScoreWithBlackList=_broadcasterScoreWithBlackList;
@property(retain, nonatomic) TBLiveRecommendView *recommendView; // @synthesize recommendView=_recommendView;
@property(retain, nonatomic) TBLiveBroadcasterScore *broadcasterScore; // @synthesize broadcasterScore=_broadcasterScore;
@property(nonatomic) unsigned long long goodsVideoTimeCounter; // @synthesize goodsVideoTimeCounter=_goodsVideoTimeCounter;
@property(nonatomic) unsigned long long totolStayMinutes; // @synthesize totolStayMinutes=_totolStayMinutes;
@property(nonatomic) unsigned long long totolStayTimes; // @synthesize totolStayTimes=_totolStayTimes;
@property(nonatomic) unsigned long long liveReportCounter; // @synthesize liveReportCounter=_liveReportCounter;
@property(retain, nonatomic) UIImageView *microphoneImg; // @synthesize microphoneImg=_microphoneImg;
@property(retain, nonatomic) TBLiveGoodsWithVideoItem *goodsWithVideoView; // @synthesize goodsWithVideoView=_goodsWithVideoView;
@property(nonatomic) double lastReportTime; // @synthesize lastReportTime=_lastReportTime;
@property(retain, nonatomic) NSTimer *liveReportTimer; // @synthesize liveReportTimer=_liveReportTimer;
@property(retain, nonatomic) NSArray *lastShareGoodsList; // @synthesize lastShareGoodsList=_lastShareGoodsList;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(nonatomic) _Bool liveFinished; // @synthesize liveFinished=_liveFinished;
@property(nonatomic) _Bool isAnimatingGoodsViewClose; // @synthesize isAnimatingGoodsViewClose=_isAnimatingGoodsViewClose;
@property(retain, nonatomic) NSMutableDictionary *banGestureRects; // @synthesize banGestureRects=_banGestureRects;
@property(copy, nonatomic) CDUnknownBlockType receiveInteractiveMessageBlock; // @synthesize receiveInteractiveMessageBlock=_receiveInteractiveMessageBlock;
@property(nonatomic) _Bool isJumpToFaceVerify; // @synthesize isJumpToFaceVerify=_isJumpToFaceVerify;
@property(nonatomic) __weak LiveRoomController *sourceVC; // @synthesize sourceVC=_sourceVC;
@property(retain, nonatomic) TBLiveWebContainerManager *webManager; // @synthesize webManager=_webManager;
@property(copy, nonatomic) CDUnknownBlockType checkLinLiveStatus; // @synthesize checkLinLiveStatus=_checkLinLiveStatus;
@property(copy, nonatomic) CDUnknownBlockType linkLiveApplyBlock; // @synthesize linkLiveApplyBlock=_linkLiveApplyBlock;
@property(copy, nonatomic) CDUnknownBlockType liveMessInfoBlock; // @synthesize liveMessInfoBlock=_liveMessInfoBlock;
@property(nonatomic) _Bool switchDataModelPrepare; // @synthesize switchDataModelPrepare=_switchDataModelPrepare;
@property(nonatomic) __weak id <TBLiveOverlayActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long overlayType; // @synthesize overlayType=_overlayType;
@property(retain, nonatomic) TBLiveBrandADManager *brandADManager; // @synthesize brandADManager=_brandADManager;
@property(retain, nonatomic) TBLiveOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) NSMutableDictionary *actionCacheCounts; // @synthesize actionCacheCounts=_actionCacheCounts;
@property(retain, nonatomic) TBLiveUserLevelHierarchyEntryModel *userLevelEntryModel; // @synthesize userLevelEntryModel=_userLevelEntryModel;
@property(copy, nonatomic) NSString *subScopeId; // @synthesize subScopeId=_subScopeId;
@property(copy, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
@property(retain, nonatomic) NSMutableDictionary *visitorIdentity; // @synthesize visitorIdentity=_visitorIdentity;
- (void).cxx_destruct;
- (_Bool)isDegradeToNativeFansLevel;
- (_Bool)isDegradeDynamicRender;
- (void)kAliHASmartMemoryLevelChangedNotify:(id)arg1;
- (void)onReceiveProtobufPowerMsgMesssage:(id)arg1;
- (_Bool)showNGComment;
- (_Bool)usePullCDNComment;
- (id)fetchCDNCommentURL:(id)arg1;
- (void)receiveCommonTipsMessage:(id)arg1;
- (void)addNetFlowView:(struct CGRect)arg1 title:(id)arg2 url:(id)arg3;
- (void)updateLastDate:(_Bool)arg1;
- (_Bool)isEnableShow:(_Bool)arg1;
- (id)chinaUnicomUserDefaultKey:(_Bool)arg1;
- (_Bool)isChinaUnicom;
- (void)nonNetFlowUser:(id)arg1 naviUrl:(id)arg2;
- (void)removeNetFlowView;
- (void)CellularNetworkToast:(int)arg1;
- (void)showNetworkFlowView;
- (void)upwardCommentModel:(id)arg1 selfComment:(_Bool)arg2;
- (void)processFollowMsg:(id)arg1 tbNick:(id)arg2;
- (_Bool)enableCloseRecommend;
- (void)updateEnableCloseRecommend;
- (void)didFailedRecordScreenWithError:(id)arg1;
- (void)didStartRecordScreen;
- (void)didFinishRecordScreenWithVideoPath:(id)arg1;
- (void)checkFreeStorageSpace;
- (void)checkPhotosAuth;
- (void)checkMicAuth;
- (struct CGPoint)clickPointOnVideoSize:(struct CGSize)arg1 contentMode:(long long)arg2 point:(struct CGPoint)arg3;
- (void)processAcvitityClickPoint:(struct CGPoint)arg1;
- (void)openH5OrWeex:(id)arg1 openType:(id)arg2 frame:(struct CGRect)arg3 onlyOneOpen:(_Bool)arg4 bizData:(id)arg5 accessPoint:(id)arg6;
- (void)setupAuctionView:(id)arg1;
- (void)processAuctionBizInfo:(id)arg1;
- (void)processExtraBizInfos;
- (void)processExtraBizInfosWithDetail:(id)arg1 failedCallback:(CDUnknownBlockType)arg2 successCallback:(CDUnknownBlockType)arg3;
- (void)processMessInfoActivity;
- (void)processActivityMsg:(id)arg1;
- (void)incrementActionCount:(id)arg1 params:(id)arg2;
- (void)sendActionReportEvent:(id)arg1;
- (void)sendScreenFlippedEvent:(id)arg1;
- (void)sendMediaPlayerEvent:(id)arg1;
- (void)sendScreenOrientationEvent:(id)arg1;
- (void)sendMediaEvent:(id)arg1;
- (void)sendMessageEvent:(id)arg1;
- (void)postEvent:(id)arg1 data:(id)arg2 type:(id)arg3 subType:(id)arg4 extParams:(id)arg5;
- (void)anchorResponseMessage:(id)arg1;
- (void)loopAnchorResponseHandler;
- (void)closeFansRightsLayer:(id)arg1;
- (void)openFansRightsLayer:(id)arg1;
- (void)openBubbleWeexView:(id)arg1;
- (void)userLevelSyncState:(id)arg1;
- (void)userLevelUP:(id)arg1;
- (void)setUserLevel:(long long)arg1;
- (long long)userLevel;
- (_Bool)isPushEditLiveItem2GoodsList;
- (_Bool)isCustomLiveRoom;
- (_Bool)isCustomLiveRoomAndLivingStatus;
- (_Bool)isSupportStaticRender:(id)arg1;
- (_Bool)isStaticOverlayView;
- (void)setupTBTVMenuWeexView:(id)arg1;
- (void)setupTMCHeadWeexView:(id)arg1;
- (void)resetTBTVMediaPlayer;
- (void)checkAndAdjustTBTVScreenOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetTBTVFollow:(id)arg1 type:(id)arg2 follow:(id)arg3 accountMolde:(id)arg4;
- (void)modelLayerDidShown:(id)arg1;
- (void)liveDetailDidLoadFinish:(id)arg1;
- (void)doChangeTBTVProgram:(id)arg1;
- (void)checkAndAdjustScreenOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)liveRoomVCIsActivity;
- (void)changeTBTVProgramV2:(id)arg1;
- (void)changeTBTVProgram:(id)arg1;
- (_Bool)isTBTVTMCLiveRoom;
- (_Bool)isTBTVLiveRoom;
- (void)closeWebViewWithUrl:(id)arg1;
- (void)closeWebView:(id)arg1;
- (_Bool)webViewIsOpen:(id)arg1;
- (void)showWebView:(id)arg1;
- (_Bool)shouldOpenWebView:(id)arg1;
- (void)openWebView:(id)arg1 frame:(struct CGRect)arg2 enterAnimation:(unsigned long long)arg3 exitAnimation:(unsigned long long)arg4 rendType:(id)arg5 isModal:(_Bool)arg6 loadingAnimate:(_Bool)arg7 hideWhenClickModal:(_Bool)arg8 onlyOneOpen:(_Bool)arg9 bizData:(id)arg10 weexDict:(id)arg11 accessPoint:(id)arg12 failedCallback:(CDUnknownBlockType)arg13 successCallback:(CDUnknownBlockType)arg14;
- (void)openWebView:(id)arg1 frame:(struct CGRect)arg2 enterAnimation:(unsigned long long)arg3 exitAnimation:(unsigned long long)arg4 rendType:(id)arg5 isModal:(_Bool)arg6 loadingAnimate:(_Bool)arg7 hideWhenClickModal:(_Bool)arg8 onlyOneOpen:(_Bool)arg9 bizData:(id)arg10 accessPoint:(id)arg11 failedCallback:(CDUnknownBlockType)arg12 successCallback:(CDUnknownBlockType)arg13;
- (void)openWebViewWithParams:(id)arg1 accessPoint:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldEditChanged:(id)arg1;
- (void)faceVerifyWithToken:(id)arg1;
- (void)enterFaceVerify;
- (void)inputLinkLiveUserNick;
- (id)fetchLikeView;
- (void)onActionShareButton:(id)arg1;
- (void)setupFollowModule:(_Bool)arg1 forNonTaobaoAppWithParams:(id)arg2 followViewBlock:(CDUnknownBlockType)arg3 followStateChanged:(CDUnknownBlockType)arg4;
- (void)setupFollowModule:(_Bool)arg1 forTaobaoAppWithParams:(id)arg2 followViewBlock:(CDUnknownBlockType)arg3 followStateChanged:(CDUnknownBlockType)arg4;
- (void)showSystemNotice;
- (void)naviToUrl:(id)arg1 withMiniWindow:(_Bool)arg2 animType:(id)arg3;
- (void)setupPreparePlayView:(id)arg1 useVideoToolBox:(_Bool)arg2;
- (void)layoutMiniFollowButton:(id)arg1 accountType:(long long)arg2 followed:(_Bool)arg3;
- (void)handleFollowSuccessAction;
- (void)keybaordWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollOverlayView:(id)arg1;
- (void)popupUserLevelPointsUPView:(int)arg1 level:(int)arg2 triggerName:(id)arg3 action:(id)arg4;
- (void)popupUserLevelUPView:(id)arg1;
- (void)addLiveMarkeintInfoView;
- (void)addLiveBrandADView:(id)arg1;
- (void)commitAppMonitorWithSuccess:(_Bool)arg1 msgId:(id)arg2 errMsg:(id)arg3;
- (void)countdownHandler:(id)arg1;
- (void)addLiveBrandADManager:(id)arg1;
- (void)handleVisitorIdentity:(id)arg1;
- (void)handleLiveBannerModel:(id)arg1;
- (void)TBTVHandler:(id)arg1;
- (void)showRecommandLiveView:(_Bool)arg1;
- (void)showRecommendListViewWithNotification;
- (void)requestNewSwitchDataModel:(id)arg1;
- (void)refreshSwitchLiveData:(id)arg1 type:(long long)arg2;
- (void)requestLiveMessInfo;
- (void)interactiveMessage:(id)arg1;
- (void)reportActionTaskSuppliment:(id)arg1;
- (void)openUserLevelBubbleView:(id)arg1;
- (void)doUserLevelAction:(id)arg1;
- (id)getLevelItemWithLevel:(id)arg1;
- (void)requestUserLevelInfo;
- (void)receiveLiveEndEditItem:(id)arg1;
- (void)disapearGoodsVideoWithAnimation:(_Bool)arg1;
- (void)addGoodsSubVideoItem:(id)arg1;
- (void)removeGoodsSubVideoView;
- (void)onLiveFinish:(_Bool)arg1;
- (void)onLivePrepareStart:(_Bool)arg1;
- (void)removeGoodsItemFinished;
- (void)updateCommentAreaViewConstraints;
- (void)notifyGoodsListViewStatus:(long long)arg1;
- (void)setGoodsShowCaseHidden:(_Bool)arg1;
- (void)adjustRewardMgrViewY:(_Bool)arg1;
- (void)setWebViewFrame:(struct CGRect)arg1 duration:(double)arg2 bizcode:(id)arg3 url:(id)arg4;
- (void)animationCloseGoodsShowCaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)animationCloseGoodsShowCase;
- (void)showGoodsShowViewToInteractiveView:(double)arg1;
- (void)refreshShowCaseViewMode:(id)arg1;
- (struct CGRect)goodsInteractiveViewFrame;
- (void)addWeexMessageData:(id)arg1;
- (void)addTextPushMessageListData:(id)arg1;
- (id)fetchGoodsShowCaseView;
- (id)fetchInteractiveView;
- (void)updateShowCaseViewWithItemList:(id)arg1 duration:(double)arg2 isBulkItem:(_Bool)arg3;
- (void)addGoodsShowCaseView:(id)arg1 showType:(long long)arg2;
- (void)handleGoodsShowCase:(id)arg1;
- (void)startEditItemV2:(id)arg1;
- (void)closeGoodsListWeexView;
- (void)refreshViewLayout;
- (void)enterLiveRoom:(id)arg1;
- (void)updateOnlinePlayer:(id)arg1;
- (void)relayoutCommentAreaView:(_Bool)arg1 duration:(double)arg2 offset:(double)arg3;
- (void)addCommentAreaView;
- (void)setupInitCommentTipsManager;
- (void)setupInitCommentManager:(id)arg1;
- (void)refreshWithData:(id)arg1 videoGood:(id)arg2 requestMessInfo:(_Bool)arg3;
- (void)onNetworkNotReachable;
- (void)didReceiveMemoryWarning;
- (void)onWillResignActive;
- (void)onDidLiveBecomeActive;
- (void)onTranslateOrientation;
- (void)closeActionSheetView;
- (void)notifyMediaPlayerEventToWebView:(unsigned long long)arg1 url:(id)arg2;
- (void)detectSEIFrameWithPoint:(struct CGPoint)arg1;
- (void)hideTimeShiftGoodsView;
- (void)refreshHideTimeShiftGoodsViewTimer;
- (void)invalidateHideTimeShiftGoodsViewTimer;
- (void)setTimeShiftGoodsViewShown:(_Bool)arg1;
- (void)onTapAction:(id)arg1;
- (void)onActionEntranceClick;
- (void)onActionRecordButton:(id)arg1;
- (void)onActionlinkLiveButton:(id)arg1;
- (void)onActionReportButton:(id)arg1;
- (void)hideScreenRecordMoreView;
- (void)showScreenRecordMoreView;
- (_Bool)shouldShowScreenRecorderButton;
- (void)onActionMoreButton:(id)arg1;
- (id)getMoreButton;
- (void)timePlayActionHandler:(_Bool)arg1;
- (void)setupOverlayController;
- (void)addFollowDelayHintHandler;
- (void)loadFollowStatus:(id)arg1 accountType:(id)arg2 follow:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)receivemsg:(id)arg1 params:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)screenTypeUrlWithOriginUrl:(id)arg1;
- (void)createDynamicOverlayView:(id)arg1 failedCallback:(CDUnknownBlockType)arg2 successCallback:(CDUnknownBlockType)arg3;
- (void)createStaticOverlayView:(id)arg1 failedCallback:(CDUnknownBlockType)arg2 successCallback:(CDUnknownBlockType)arg3;
- (void)safeCreateLivingStaticOverlayView:(id)arg1;
- (id)createOverlayViewWithType:(long long)arg1 detailData:(id)arg2;
- (void)reportLiveData:(_Bool)arg1;
- (_Bool)isPortraitLiving;
- (_Bool)isLandscape;
- (void)onTimer;
- (void)stopTimer;
- (void)addEventObservers;
- (id)detailModel;
- (void)dealloc;
- (void)setupInit;
- (id)init;
- (void)setWidget:(id)arg1 frame:(struct CGRect)arg2;
- (struct CGRect)getWidgetFrame:(id)arg1;
- (void)setBottomShown:(_Bool)arg1;
- (void)setTopBarShown:(_Bool)arg1;
- (id)liveRoomController;
- (void)setWidget:(id)arg1 shown:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

