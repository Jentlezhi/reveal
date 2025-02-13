//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "XMGroupMemberCellDelegate-Protocol.h"

@class NSArray, NSString, UIButton, XMGTAlbum, XMGroupTalkingItem;

@interface XMGTInfoController : XMBaseTabelVC <XMGroupMemberCellDelegate>
{
    XMGroupTalkingItem *_groupItem;
    NSArray *_memberArray;
    XMGTAlbum *_gtAlbum;
    UIButton *_footerView;
}

@property(retain, nonatomic) UIButton *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) XMGTAlbum *gtAlbum; // @synthesize gtAlbum=_gtAlbum;
@property(retain, nonatomic) NSArray *memberArray; // @synthesize memberArray=_memberArray;
@property(retain, nonatomic) XMGroupTalkingItem *groupItem; // @synthesize groupItem=_groupItem;
- (void).cxx_destruct;
- (void)onXMGroupBuySuccessNotify:(id)arg1;
- (void)createOrderForGroup;
- (void)showBuyAlertView:(id)arg1;
- (void)applyForJoinGroup;
- (void)showUserOtherGroups;
- (void)reloadData;
- (void)clickAtFooter;
- (void)updateFooterView;
- (void)addFooterView;
- (void)memberCell:(id)arg1 didPressedMmeberHeadImage:(unsigned long long)arg2;
- (void)updateAlbumFromDict:(id)arg1;
- (void)requestGroupInfo;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

