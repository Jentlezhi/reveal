//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "MMNoticeBlacklistManagementCellDelegate-Protocol.h"
#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, WBMessageCenterEngine, WBPRLMTableViewWrapper;

@interface MMNoticeBlacklistManagementViewController : WBTableViewController <UITableViewDataSource, UITableViewDelegate, MMNoticeBlacklistManagementCellDelegate, PRLMTableViewWrapperDelegate>
{
    WBPRLMTableViewWrapper *_prlmWrapper;
    WBMessageCenterEngine *_messageCenterEngine;
    NSString *_nextCursor;
    unsigned long long _maxBlockNumber;
    unsigned long long _currentBlockNumber;
    NSArray *_models;
}

@property(copy, nonatomic) NSArray *models; // @synthesize models=_models;
@property(nonatomic) unsigned long long currentBlockNumber; // @synthesize currentBlockNumber=_currentBlockNumber;
@property(nonatomic) unsigned long long maxBlockNumber; // @synthesize maxBlockNumber=_maxBlockNumber;
@property(copy, nonatomic) NSString *nextCursor; // @synthesize nextCursor=_nextCursor;
@property(retain, nonatomic) WBMessageCenterEngine *messageCenterEngine; // @synthesize messageCenterEngine=_messageCenterEngine;
@property(retain, nonatomic) WBPRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper=_prlmWrapper;
- (void).cxx_destruct;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)noticeBlacklistManagementCell:(id)arg1 didSelectRecoveryButton:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_recoveryUserWithUID:(id)arg1 row:(unsigned long long)arg2;
- (void)_loadDataWithCursor:(id)arg1;
- (void)_loadMoreData;
- (void)_loadNewData;
- (_Bool)_showSectionHeader;
- (id)_setupSectionHeader;
- (void)_setupPrlmWrapper;
- (void)_setupTableView;
- (void)_setupNavigationItem;
- (void)_setupEngine;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

