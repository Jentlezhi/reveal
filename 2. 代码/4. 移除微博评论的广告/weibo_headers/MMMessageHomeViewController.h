//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "MMMessageSegmentTitleViewDelegate-Protocol.h"
#import "SwipeViewDataSource-Protocol.h"
#import "SwipeViewDelegate-Protocol.h"
#import "WBTabBarControllerDelegate-Protocol.h"

@class MMFoundGroupConfig, MMMessageSegmentTitleView, NSArray, NSMutableArray, NSString, NSTimer, UIImageView, UIView, WBGuideView, WBSegmentSwipeView;

@interface MMMessageHomeViewController : WBViewController <MMMessageSegmentTitleViewDelegate, SwipeViewDelegate, SwipeViewDataSource, WBTabBarControllerDelegate>
{
    _Bool swipeViewDragging;
    UIImageView *_searchGroupDotIndicator;
    _Bool swipAnalysis;
    double msgListTitleBadgeValueWidth;
    double msgAllClearUnreadCountViewWidth;
    NSString *discovery_group_scheme;
    _Bool _shouldBackToMessageListView;
    _Bool _MMHomeMessageViewDisplay;
    NSArray *_segmentViewControllers;
    MMMessageSegmentTitleView *_titleView;
    NSArray *_segmentClasses;
    WBSegmentSwipeView *_segmentSwipeView;
    long long _schemePushType;
    UIView *_guideView;
    WBGuideView *_guideNoticeUnsheildView;
    WBGuideView *_findGroupGuideView;
    UIView *_guideNoticeUnsheildBGView;
    MMFoundGroupConfig *_findGroupConfig;
    double _timeInterval;
    NSTimer *_findGroupBarTimer;
    unsigned long long _searchGroupSourceType;
    NSMutableArray *_exposeCache;
}

@property(nonatomic) _Bool MMHomeMessageViewDisplay; // @synthesize MMHomeMessageViewDisplay=_MMHomeMessageViewDisplay;
@property(retain, nonatomic) NSMutableArray *exposeCache; // @synthesize exposeCache=_exposeCache;
@property(nonatomic) unsigned long long searchGroupSourceType; // @synthesize searchGroupSourceType=_searchGroupSourceType;
@property(retain, nonatomic) NSTimer *findGroupBarTimer; // @synthesize findGroupBarTimer=_findGroupBarTimer;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) MMFoundGroupConfig *findGroupConfig; // @synthesize findGroupConfig=_findGroupConfig;
@property(nonatomic) _Bool shouldBackToMessageListView; // @synthesize shouldBackToMessageListView=_shouldBackToMessageListView;
@property(retain, nonatomic) UIView *guideNoticeUnsheildBGView; // @synthesize guideNoticeUnsheildBGView=_guideNoticeUnsheildBGView;
@property(retain, nonatomic) WBGuideView *findGroupGuideView; // @synthesize findGroupGuideView=_findGroupGuideView;
@property(retain, nonatomic) WBGuideView *guideNoticeUnsheildView; // @synthesize guideNoticeUnsheildView=_guideNoticeUnsheildView;
@property(retain, nonatomic) UIView *guideView; // @synthesize guideView=_guideView;
@property(nonatomic) long long schemePushType; // @synthesize schemePushType=_schemePushType;
@property(retain, nonatomic) WBSegmentSwipeView *segmentSwipeView; // @synthesize segmentSwipeView=_segmentSwipeView;
@property(retain, nonatomic) NSArray *segmentClasses; // @synthesize segmentClasses=_segmentClasses;
@property(retain, nonatomic) MMMessageSegmentTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSArray *segmentViewControllers; // @synthesize segmentViewControllers=_segmentViewControllers;
- (void).cxx_destruct;
- (void)groupManagementViewControllerSendMessage:(id)arg1;
- (void)accountPushSettingUpdated:(id)arg1;
- (void)logFindGroupConfigWithCode:(id)arg1;
- (void)logFindGroupConfigExpose;
- (void)findGroupConfigTimerEvent:(id)arg1;
- (void)resetLeftBarWithConfig:(id)arg1;
- (void)checkSetFindGroupConfig;
- (void)clearFindGroupConfig;
- (id)searchGroupBarConfig;
- (double)timeIntervalWithEndTime:(double)arg1;
- (void)findGroupClientConfigNotification:(id)arg1;
- (void)latestNoticeListRevisionDidRefresh:(id)arg1;
- (void)latestNoticeListDidRefresh:(id)arg1;
- (void)reloadBadgeValue:(id)arg1;
- (void)pushActiveDidChanged:(id)arg1;
- (void)unreadCountPollingDidGetResult:(id)arg1;
- (void)appLanguageDidChangeNotification:(id)arg1;
- (void)reloadUIElements;
- (void)currentAccountDidChangeNotification:(id)arg1;
- (void)currentSkinDidChangeNotification:(id)arg1;
- (void)reloadTabBarItem;
- (void)tabbarReplaceNotification:(id)arg1;
- (void)atPersonViewController:(id)arg1 didSelectAtPersonWithContact:(id)arg2;
- (void)atPersonViewControllerDidCancel:(id)arg1;
- (void)atPersonSearchViewController:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerViewController:(id)arg1 startChatWithUserTarget:(id)arg2;
- (void)searchTypeMenu:(id)arg1 didSelectType:(id)arg2;
- (void)swipeViewDidEndDecelerating:(id)arg1;
- (void)swipeViewWillBeginDragging:(id)arg1;
- (void)swipeViewCurrentItemIndexDidChange:(id)arg1;
- (void)swipeViewDidScroll:(id)arg1;
- (struct CGSize)swipeViewItemSize:(id)arg1;
- (id)swipeView:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfItemsInSwipeView:(id)arg1;
- (void)segmentTitleView:(id)arg1 didSelectAtIndex:(unsigned long long)arg2;
- (void)segmentTitleViewDidSelect:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)tabBarControllerDidSelect:(id)arg1;
- (void)setNoticeListNeedRefresh;
- (void)didSelectWithScheme:(id)arg1;
- (void)onSheildNoticeGuideView:(id)arg1;
- (void)showFindGroupGuideView:(id)arg1;
- (void)showTopRightGuideView:(id)arg1;
- (id)messageListViewController;
- (id)noticeViewController;
- (void)settingButtonPressed:(id)arg1;
- (void)showOptionMenu;
- (_Bool)isAffiration;
- (void)pickUserButtonPressed:(id)arg1;
- (void)onNoticeSetting:(id)arg1;
- (void)writePrivateMessageButtonPressed:(id)arg1;
- (void)onCustomLeftButton:(id)arg1;
- (void)searchGroupButtonPressed:(id)arg1;
- (void)privacyHintBoardPressed;
- (void)showPrivacyHint;
- (void)refreshBadgeValue;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)clearAllUnreadCountButtonClick;
- (id)clearAllUnreadCountButtonItem;
- (void)refreshDotForRightButtonIfNeed;
- (_Bool)needShowDot;
- (void)prepareDotViewForRightItem:(id)arg1;
- (void)resetRightBarButtonItem;
- (void)dotForFindGroupButtonIfNeed;
- (void)prepareDotViewForFindGroupButton;
- (id)leftItem;
- (void)logFindGroupRequest:(id)arg1 error:(id)arg2;
- (void)configSearchGroupLeftBarButtonItem;
- (void)setCustomLeftBarButtonItem:(id)arg1 image:(id)arg2;
- (void)setNomalLeftBarButtonItem;
- (void)checkSearchGroupSourceType;
- (void)resetLeftBarButtonItem;
- (void)removeSubViewControllers;
- (void)configSubviewsFrame;
- (void)createSegmentViewControllers;
- (void)createTitleView:(unsigned long long)arg1;
- (id)analysisParameters;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

