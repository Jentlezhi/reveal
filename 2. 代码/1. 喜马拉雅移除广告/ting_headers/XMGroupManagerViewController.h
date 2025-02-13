//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

@class NSArray, XMGroupTalkingItem;

@interface XMGroupManagerViewController : XMBaseTabelVC
{
    XMGroupTalkingItem *_groupItem;
    NSArray *_dataList;
    long long _minPrice;
    long long _maxPrice;
    NSArray *_adminDataArray;
}

@property(retain, nonatomic) NSArray *adminDataArray; // @synthesize adminDataArray=_adminDataArray;
@property(nonatomic) long long maxPrice; // @synthesize maxPrice=_maxPrice;
@property(nonatomic) long long minPrice; // @synthesize minPrice=_minPrice;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) XMGroupTalkingItem *groupItem; // @synthesize groupItem=_groupItem;
- (void).cxx_destruct;
- (void)onSwitchChanged:(id)arg1;
- (void)requestGroupInfo;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)createCellWithTitle:(id)arg1 detail:(id)arg2 showLine:(_Bool)arg3 cellIdentifier:(id)arg4 intableView:(id)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

