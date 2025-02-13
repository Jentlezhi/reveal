//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFeedListViewModel.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WBSkinning-Protocol.h"
#import "WBTimeRecorderProtocol-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, WBADSuspendRedPacketEngine, WBFeedGroup, WBPRLMTableViewWrapper, WBStatusListEngine, WBTimeRecorder, _WBTableViewWrapperProxy;

@interface WBFeedTimelineViewModel : WBFeedListViewModel <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, PRLMTableViewWrapperDelegate, WBSkinning, WBTimeRecorderProtocol>
{
    WBPRLMTableViewWrapper *prlmWrapper;
    WBTimeRecorder *timeRecorder;
    _Bool isAutoLoadingMore;
    int selectedTimelineItemIndex;
    _WBTableViewWrapperProxy *proxy;
    NSIndexPath *positiveAnimationIndex;
    _Bool _isViewVisiable;
    WBFeedGroup *_currentGroup;
    NSMutableArray *_timelineItems;
    NSMutableArray *_cellModels;
    WBStatusListEngine *_statusListEngine;
    WBADSuspendRedPacketEngine *_redPacketEngine;
    NSString *_refreshSourceId;
}

@property(nonatomic) _Bool isViewVisiable; // @synthesize isViewVisiable=_isViewVisiable;
@property(retain, nonatomic) NSString *refreshSourceId; // @synthesize refreshSourceId=_refreshSourceId;
@property(retain, nonatomic) WBADSuspendRedPacketEngine *redPacketEngine; // @synthesize redPacketEngine=_redPacketEngine;
@property(retain, nonatomic) WBStatusListEngine *statusListEngine; // @synthesize statusListEngine=_statusListEngine;
@property(retain, nonatomic) NSMutableArray *cellModels; // @synthesize cellModels=_cellModels;
@property(retain, nonatomic) NSMutableArray *timelineItems; // @synthesize timelineItems=_timelineItems;
@property(retain, nonatomic) WBFeedGroup *currentGroup; // @synthesize currentGroup=_currentGroup;
@property(retain, nonatomic) WBTimeRecorder *timeRecorder; // @synthesize timeRecorder;
@property(retain, nonatomic) WBPRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper;
- (void).cxx_destruct;
- (void)handleDeleteTagChange:(id)arg1;
- (_Bool)dataLoaded;
- (void)checkIfNeedRequestPositiveRecomForCell:(id)arg1 withTriggerType:(int)arg2 withObjectId:(id)arg3;
- (void)requestPositiveRecomDataOfStatus:(id)arg1 withTriggerAction:(int)arg2 withObjectId:(id)arg3 trendsTypeStr:(id)arg4 callBack1:(CDUnknownBlockType)arg5;
- (void)requestPositiveRecomDataOfStatus:(id)arg1 withTriggerAction:(int)arg2 withObjectId:(id)arg3 trendsTypeStr:(id)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)requestPositiveRecomDataOfStatus:(id)arg1 withParameters:(id)arg2 withTriggerAction:(int)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)handleContactUnFollow:(id)arg1;
- (void)handleContactFollowStateChange:(id)arg1;
- (void)handleStatusShouldReload:(id)arg1;
- (long long)checkAndInsertLocalStatus:(id)arg1;
- (void)insertLocalStatus:(id)arg1 isReplace:(_Bool)arg2;
- (void)receveMCMessageWithKey:(id)arg1 event:(id)arg2;
- (void)setCurrentGroup:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;
- (void)reloadDataWithCurrentResultSet;
- (void)reloadWithViewModels:(id)arg1 models:(id)arg2;
- (id)updateDataFromEngine:(id)arg1;
- (id)updateDataFromEngine;
- (void)checkNeedAutoLoadMore;
- (void)asyncResetWrapperWithError:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)isEmpty;
- (void)loadMoreStatusWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadStatusWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertTimelineItemsAheadOfItem:(id)arg1 params:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadMore;
- (void)reload;
- (_Bool)reloadIfEqualTask:(id)arg1;
- (void)deleteObjectInTimelineItem:(id)arg1;
- (void)replaceObjectInTimelineItemsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)resetTableViewData;
- (_Bool)isNeedResetTableViewDataWhenSendNewStatus:(id)arg1 fromEdit:(_Bool)arg2;
- (_Bool)isNeedInsertStatusToDB;
- (id)viewModelWithList:(id)arg1;
- (id)viewModelWithList:(id)arg1 mergeViewModels:(id)arg2 newViewModels:(id)arg3;
- (id)viewModelWithList:(id)arg1 mergeViewModels:(id)arg2;
- (id)viewModelWithFeedItem:(id)arg1 inViewModels:(id)arg2;
- (void)insertTimelineItem:(id)arg1 atIndex:(long long)arg2;
- (void)currentAccountWillChangeNotification:(id)arg1;
- (void)handleTimelineItemWillEnterForegroundNotification:(id)arg1;
- (void)handleTimelineTrendItemDidRemoveNotification:(id)arg1;
- (void)handleTimelineItemDestroyRemoveNotification:(id)arg1;
- (void)handleTimelineItemWillRemoveNotification:(id)arg1;
- (void)handleTimelineItemDidRemoveNotification:(id)arg1;
- (void)deleteItemAtIndexes:(id)arg1;
- (void)insertTimelineTrendItem:(id)arg1 aheadOfItem:(id)arg2 lastCell:(id)arg3 isNeedAnimation:(_Bool)arg4;
- (void)insertPositiveRecomTrends:(id)arg1 toGroup:(id)arg2 afterItemCell:(id)arg3 thenDelete:(id)arg4;
- (void)insertPositiveRecomTrends:(id)arg1 toCustomeModuleOfGroup:(id)arg2 afterItemCell:(id)arg3 thenDelete:(id)arg4;
- (id)timeRecorder:(id)arg1 willStartRecordAtIndexPath:(id)arg2;
- (id)timelineItemWithFeedItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)tableViewHasData:(id)arg1;
- (void)showError:(id)arg1 isViewVisiable:(_Bool)arg2;
- (void)showError:(id)arg1;
- (void)appLanguageDidChange;
- (void)configEmptyView:(id)arg1;
- (void)changeEmptyViewActionButtonByCurrentGroup;
- (void)setEmptyView;
- (void)wrapperUpdateADModelIfNeed:(id)arg1;
- (struct CGPoint)wrapperContentOffset;
- (void)checkAndChangeLoadingState:(id)arg1;
- (void)wrapperWillPullRefresh:(id)arg1;
- (void)wrapperWillLoadMore:(id)arg1;
- (void)configPRLMWrapper;
- (void)reloadUIElements;
- (void)changeTableViewFrameWhenRotation;
- (void)configTableViewInsets;
- (void)createAdSuspendRedPacket;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)bindingNotifications;
- (void)buildSubViewsWithTableView:(id)arg1;
- (void)reloadData;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

