//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WBMViewControllerProtocol-Protocol.h"
#import "WBOpenUrlUiResponseManagerProtocol-Protocol.h"
#import "WBOpenUrlViewControllerProtocol-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, WBOpenUrlContextBase;
@protocol UIViewControllerPreviewing;

@interface WBUniversialViewController : UIViewController <WBOpenUrlViewControllerProtocol, WBOpenUrlUiResponseManagerProtocol, UIViewControllerPreviewingDelegate, WBMViewControllerProtocol>
{
    unsigned long long viewControllerState;
    NSString *schemeLink;
    NSDictionary *schemeParaDict;
    NSMutableDictionary *openUrlRawParameters;
    NSMutableDictionary *globalAnalysisParameters;
    id <UIViewControllerPreviewing> _peekingContext;
    NSString *_peekingTitle;
    CDUnknownBlockType _peekingCommitHandler;
    _Bool _inSwipePanning;
    _Bool _schemeNeedRefresh;
    _Bool _autoRecordResidenceTime;
    _Bool _useNewRecordLifeCycle;
    _Bool _shouldDoTransitionWhenDismiss;
    _Bool _shouldPassAnalysisParamsToChildVC;
    _Bool _hasSetParentUICodeBeforePassHistoryUICodesToChild;
    _Bool _hasSetParentFIDBeforePassHistoryUICodesToChild;
    _Bool _isVisiable;
    _Bool _peeking;
    NSString *_uiCode;
    NSString *_fID;
    NSString *_parentUICode;
    NSString *_parentFID;
    NSString *_parentCardID;
    NSString *parentFeatureCode;
    WBUniversialViewController *analysisOwner;
    NSString *_parentLinkItemID;
    NSString *_moduleID;
    NSString *_entryID;
    WBUniversialViewController *_currentShowingChildViewController;
    WBUniversialViewController *_analysisParentController;
    WBOpenUrlContextBase *_openURLContext;
    NSMutableArray *_historyUICodesArray;
    NSMutableArray *_historyFidArray;
}

+ (double)appWidthForVC:(id)arg1;
+ (double)appScreenWidth;
+ (_Bool)handleOpenURLWithExistingController;
+ (id)controllerToHandleOpenURLContext:(id)arg1;
+ (id)navigationControllerOfViewController:(id)arg1;
+ (id)isAllowShowViewControllerWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
+ (id)classNameWillCreateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
+ (long long)video_defaultPreferedResolutionIndex;
+ (long long)video_defaultMaximumResolutionIndex;
@property(nonatomic) _Bool peeking; // @synthesize peeking=_peeking;
@property(nonatomic) _Bool isVisiable; // @synthesize isVisiable=_isVisiable;
@property(nonatomic) _Bool hasSetParentFIDBeforePassHistoryUICodesToChild; // @synthesize hasSetParentFIDBeforePassHistoryUICodesToChild=_hasSetParentFIDBeforePassHistoryUICodesToChild;
@property(nonatomic) _Bool hasSetParentUICodeBeforePassHistoryUICodesToChild; // @synthesize hasSetParentUICodeBeforePassHistoryUICodesToChild=_hasSetParentUICodeBeforePassHistoryUICodesToChild;
@property(nonatomic) _Bool shouldPassAnalysisParamsToChildVC; // @synthesize shouldPassAnalysisParamsToChildVC=_shouldPassAnalysisParamsToChildVC;
@property(retain, nonatomic) NSMutableArray *historyFidArray; // @synthesize historyFidArray=_historyFidArray;
@property(retain, nonatomic) NSMutableArray *historyUICodesArray; // @synthesize historyUICodesArray=_historyUICodesArray;
@property(nonatomic) _Bool shouldDoTransitionWhenDismiss; // @synthesize shouldDoTransitionWhenDismiss=_shouldDoTransitionWhenDismiss;
@property(nonatomic) _Bool useNewRecordLifeCycle; // @synthesize useNewRecordLifeCycle=_useNewRecordLifeCycle;
@property(nonatomic) _Bool autoRecordResidenceTime; // @synthesize autoRecordResidenceTime=_autoRecordResidenceTime;
@property(nonatomic) __weak WBOpenUrlContextBase *openURLContext; // @synthesize openURLContext=_openURLContext;
@property(nonatomic) __weak WBUniversialViewController *analysisParentController; // @synthesize analysisParentController=_analysisParentController;
@property(nonatomic) __weak WBUniversialViewController *currentShowingChildViewController; // @synthesize currentShowingChildViewController=_currentShowingChildViewController;
@property(retain, nonatomic) NSString *entryID; // @synthesize entryID=_entryID;
@property(retain, nonatomic) NSString *moduleID; // @synthesize moduleID=_moduleID;
@property(nonatomic) _Bool schemeNeedRefresh; // @synthesize schemeNeedRefresh=_schemeNeedRefresh;
@property(nonatomic) _Bool inSwipePanning; // @synthesize inSwipePanning=_inSwipePanning;
@property(retain, nonatomic) NSString *parentLinkItemID; // @synthesize parentLinkItemID=_parentLinkItemID;
@property(readonly, nonatomic) NSMutableDictionary *globalAnalysisParameters; // @synthesize globalAnalysisParameters;
@property(nonatomic) __weak WBUniversialViewController *analysisOwner; // @synthesize analysisOwner;
@property(retain, nonatomic) NSString *parentFeatureCode; // @synthesize parentFeatureCode;
@property(retain, nonatomic) NSString *parentCardID; // @synthesize parentCardID=_parentCardID;
@property(retain, nonatomic) NSMutableDictionary *openUrlRawParameters; // @synthesize openUrlRawParameters;
@property(retain, nonatomic) NSString *fID; // @synthesize fID=_fID;
@property(retain, nonatomic) NSString *uiCode; // @synthesize uiCode=_uiCode;
@property(retain, nonatomic) NSDictionary *schemeParaDict; // @synthesize schemeParaDict;
@property(retain, nonatomic) NSString *schemeLink; // @synthesize schemeLink;
@property(nonatomic) unsigned long long viewControllerState; // @synthesize viewControllerState;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *parentFID; // @synthesize parentFID=_parentFID;
@property(retain, nonatomic) NSString *parentUICode; // @synthesize parentUICode=_parentUICode;
- (void)setSourceTimelineItem:(id)arg1 isTransferedByOpenUrl:(_Bool)arg2;
- (void)schemeRefresh;
- (id)extParam;
- (id)sourceType;
- (void)setSourceType:(id)arg1;
- (id)analysisParametersWithFeatureCode:(id)arg1;
- (id)analysisParameters;
- (id)nearestIDsFrom:(id)arg1 preferredCount:(unsigned long long)arg2 sperator:(id)arg3;
- (id)nearest5HistoryFIDs;
- (id)nearest5HistoryUIcodes;
- (void)passHistoryUICodesToNextViewController:(id)arg1;
- (void)passHistoryUICodesToNextViewController:(id)arg1 skipSelf:(_Bool)arg2;
- (void)setAnalysisData4Child:(id)arg1 withFeatureCode:(id)arg2;
- (void)setAnalysisData4Child:(id)arg1;
- (id)linkItemIDWithItemID:(id)arg1;
- (id)uiCode4Server;
- (id)analysisFeatureCode;
- (id)pageFeatureCode;
- (id)pushBlockTypeArr;
- (void)addDefaultBackBarButtonItem;
@property(readonly, nonatomic) _Bool inViewAnimating;
- (void)wb_didDismissVC;
- (void)wb_didPresentVC;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)onViewControllerVisiable:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)setResidenceTimeingRecordStop;
- (void)setResidenceTimeingRecordStart;
- (void)didReceiveMemoryWarning;
- (_Bool)createdByOpenURL;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setAnalysisData4OpenURL:(struct NSMutableDictionary *)arg1 withSourceTimelienItem:(id)arg2;
- (void)setSourceTimelineItem:(id)arg1;
- (void)setSourceTimelineItem:(id)arg1 isTransferedByOpenUrl:(_Bool)arg2;
- (id)analysisParametersWithSourceTimelineItem:(id)arg1;
- (void)setAnalysisData4Child:(id)arg1 withSourceTimelineItem:(id)arg2;
@property(readonly, nonatomic) long long mediaPlaybackVisibleState;
@property(readonly, nonatomic) _Bool mediaPlaybackContainsOtherAutoPlayContainer;
@property(readonly, nonatomic) _Bool mediaPlaybackContainedByOtherController;
- (void)dismissFloatWindow;
- (void)showFloatWindowWithText:(id)arg1;
- (void)removeFloatView;
- (void)addFloatViewWithDictionary:(id)arg1;
- (_Bool)handleOpenURLContext:(id)arg1;
- (id)updateParaDictForCreatingOpenUrlContext:(id)arg1 baseViewController:(id)arg2 analysisData:(struct NSMutableDictionary *)arg3;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
@property(readonly, nonatomic) _Bool openURLCallbackMode;
- (void)openedViewUpdateWithUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)generalOpenUrlParameterValue:(id)arg1 inAppParas:(id)arg2;
- (id)generalOpenUrlParameterValue:(id)arg1 inAppParas:(id)arg2 defaultValue:(id)arg3;
- (id)openUrlParameterValue:(id)arg1;
- (void)setAnalysisData4OpenURL:(struct NSMutableDictionary *)arg1;
- (id)uiCode4OpenURL;
- (id)forceEjectMeType:(id)arg1;
- (void)loadAnalysisDataFromOpenUrl;
- (void)unregisterForPreviewingWithContextIfNeeded;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)_peeking_findPeekingProviderWithHitTestResult:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType peekingCommitHandler;
- (void)commitFromPeekingWithBaseViewController:(id)arg1;
@property(copy, nonatomic) NSString *peekingTitle;
@property(readonly, nonatomic) _Bool needsTitleBarWhenPeeking;
- (void)viewDidPopFromPeeking;
- (void)viewWillPopFromPeeking;
- (void)viewDidStartPeeking;
- (void)viewWillStartPeeking;
@property(readonly, nonatomic) id <UIViewControllerPreviewing> peekingContext;
@property(readonly, nonatomic) _Bool registersPeekingGesture;
- (id)video_sceneQualityConfig;
- (long long)video_viewSizeQualityLimit;
- (double)video_playbackMaxBufferDuration;
@property(readonly, nonatomic) long long video_maximumResolutionIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

