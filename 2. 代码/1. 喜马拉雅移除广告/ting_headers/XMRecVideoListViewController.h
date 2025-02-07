//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMTableViewDelegateProtocol-Protocol.h"

@class NSMutableArray, NSString, XMSoundItem, XMTableViewDataSource;

@interface XMRecVideoListViewController : XMSubLevelViewController <XMTableViewDelegateProtocol>
{
    _Bool _isLoadMore;
    NSMutableArray *_recVideoList;
    XMSoundItem *_sound;
    XMTableViewDataSource *_tableDataSource;
}

@property(nonatomic) _Bool isLoadMore; // @synthesize isLoadMore=_isLoadMore;
@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(retain, nonatomic) XMSoundItem *sound; // @synthesize sound=_sound;
@property(retain, nonatomic) NSMutableArray *recVideoList; // @synthesize recVideoList=_recVideoList;
- (void).cxx_destruct;
- (id)convertRecVideoListVCModelToSoundItemWithSourceData:(id)arg1;
- (void)pushRecVideoWithModel:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)triggerLoadMore;
- (double)contentBottomOffset;
- (double)heightOffset;
- (void)resetMJFooterStatus;
- (void)reloadData;
- (void)buildDataSource;
- (void)addTopView;
- (void)viewDidLoad;
- (id)initWithRecVideoList:(id)arg1 andSoundItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

