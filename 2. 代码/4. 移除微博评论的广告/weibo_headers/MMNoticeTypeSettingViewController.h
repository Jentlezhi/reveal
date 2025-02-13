//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"

@class MMMessageBoxSettingControlsItem, MMNoticeFeedBackModel, MMNoticeSettingItem, MMNoticeSettingRemindNameItem, NSMutableArray, NSString, UILabel, WBMessageCenterEngine, WBPRLMTableViewWrapper;

@interface MMNoticeTypeSettingViewController : WBTableViewController <PRLMTableViewWrapperDelegate>
{
    _Bool _isLoading;
    NSString *_titleString;
    WBPRLMTableViewWrapper *_prlmWrapper;
    WBMessageCenterEngine *_messageCenterEngine;
    MMNoticeFeedBackModel *_feedBackModel;
    UILabel *_emptyLable;
    NSString *_groupID;
    NSMutableArray *_detailItemChangeArray;
    long long _remindTypeFlag;
    MMNoticeSettingItem *_item;
    MMNoticeSettingRemindNameItem *_remindMap;
    MMMessageBoxSettingControlsItem *_controlsItem;
}

@property(retain, nonatomic) MMMessageBoxSettingControlsItem *controlsItem; // @synthesize controlsItem=_controlsItem;
@property(retain, nonatomic) MMNoticeSettingRemindNameItem *remindMap; // @synthesize remindMap=_remindMap;
@property(retain, nonatomic) MMNoticeSettingItem *item; // @synthesize item=_item;
@property(nonatomic) long long remindTypeFlag; // @synthesize remindTypeFlag=_remindTypeFlag;
@property(retain, nonatomic) NSMutableArray *detailItemChangeArray; // @synthesize detailItemChangeArray=_detailItemChangeArray;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) UILabel *emptyLable; // @synthesize emptyLable=_emptyLable;
@property(retain, nonatomic) MMNoticeFeedBackModel *feedBackModel; // @synthesize feedBackModel=_feedBackModel;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) WBMessageCenterEngine *messageCenterEngine; // @synthesize messageCenterEngine=_messageCenterEngine;
@property(retain, nonatomic) WBPRLMTableViewWrapper *prlmWrapper; // @synthesize prlmWrapper=_prlmWrapper;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;
- (void)changeNoticeItemFromSetting;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (id)tableFooterViewWithText:(id)arg1;
- (id)tableHeaderViewWithText:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)configRestoreNoticeBlockWithCell:(id)arg1;
- (id)controlCellWithModel:(id)arg1 andTableView:(id)arg2;
- (id)detailCellWithModel:(id)arg1 andTableView:(id)arg2;
- (void)configEmptyLable;
- (void)configEmptyView;
- (double)heightWithText:(id)arg1 isHeader:(_Bool)arg2;
- (id)p_getCellData:(id)arg1;
- (void)changeAccountNoticeRemind;
- (void)syncMessageBlockSettingWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncSettingStatus;
- (void)loadMoreData;
- (void)reloadData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 andRemindMap:(id)arg2;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

