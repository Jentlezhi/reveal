//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLCommonBaseSegmentViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, WBPRLMTableViewWrapper;

@interface WBMLCommonRealTimeWeiboSegmentViewController : WBMLCommonBaseSegmentViewController <PRLMTableViewWrapperDelegate, UITableViewDelegate, UITableViewDataSource>
{
    WBPRLMTableViewWrapper *_dataTableViewWrapper;
    NSMutableArray *_dataSource;
    NSString *_minCID;
    unsigned long long _unreadMessageCount;
    UIButton *_tableTipBtn;
}

@property(retain, nonatomic) UIButton *tableTipBtn; // @synthesize tableTipBtn=_tableTipBtn;
@property(nonatomic) unsigned long long unreadMessageCount; // @synthesize unreadMessageCount=_unreadMessageCount;
@property(copy, nonatomic) NSString *minCID; // @synthesize minCID=_minCID;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) WBPRLMTableViewWrapper *dataTableViewWrapper; // @synthesize dataTableViewWrapper=_dataTableViewWrapper;
- (void).cxx_destruct;
- (void)onTapBannerCellNotification:(id)arg1;
- (_Bool)tableViewAtBottom:(id)arg1;
- (_Bool)tableViewAtTop:(id)arg1;
- (void)appendHistoryDatas:(id)arg1;
- (void)appendNewData:(id)arg1;
- (void)appendDataFromLiveMessage:(id)arg1;
- (void)requestStatusInfo:(id)arg1 cid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestFeedInfoWithMaxID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doTapTableTipBtnAction;
- (void)didSelectStatusInTableView:(id)arg1;
- (void)showEmptyView;
- (void)loadMoreInWrapper:(id)arg1;
- (void)pullRefreshInWrapper:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initViewControllerWithSegmentChannel:(id)arg1 baseViewController:(id)arg2 userInfo:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

