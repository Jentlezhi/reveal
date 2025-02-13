//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubTableViewController.h"

#import "XMDownloadControlViewDelegate-Protocol.h"
#import "XMNoDataTableViewCellDelegate-Protocol.h"
#import "XMSoundTableViewCellDelegate-Protocol.h"
#import "XMTableViewEditDoneViewDelegate-Protocol.h"
#import "XMTableViewEditSelectViewDelegate-Protocol.h"

@class NSMutableArray, NSString, XMDownloadControlView, XMHearRecommendViewModel, XMSegmentTabViewController, XMSoundSortViewController;

@interface XMDownloadedSoundViewController : XMSubTableViewController <XMNoDataTableViewCellDelegate, XMTableViewEditDoneViewDelegate, XMTableViewEditSelectViewDelegate, XMDownloadControlViewDelegate, XMSoundTableViewCellDelegate>
{
    _Bool _clearingSound;
    NSMutableArray *_sounds;
    XMSegmentTabViewController *_tabCtrl;
    unsigned long long _sourceType;
    XMDownloadControlView *_controlView;
    NSMutableArray *_removeSounds;
    NSMutableArray *_removeSoundsListened;
    long long _listenedSoundCount;
    XMSoundSortViewController *_sortViewCtrl;
    NSMutableArray *_videos;
    NSMutableArray *_dbItems;
    XMHearRecommendViewModel *_recommendViewModel;
}

@property(retain, nonatomic) XMHearRecommendViewModel *recommendViewModel; // @synthesize recommendViewModel=_recommendViewModel;
@property(retain, nonatomic) NSMutableArray *dbItems; // @synthesize dbItems=_dbItems;
@property(retain, nonatomic) NSMutableArray *videos; // @synthesize videos=_videos;
@property(nonatomic) __weak XMSoundSortViewController *sortViewCtrl; // @synthesize sortViewCtrl=_sortViewCtrl;
@property(nonatomic) long long listenedSoundCount; // @synthesize listenedSoundCount=_listenedSoundCount;
@property(retain, nonatomic) NSMutableArray *removeSoundsListened; // @synthesize removeSoundsListened=_removeSoundsListened;
@property(retain, nonatomic) NSMutableArray *removeSounds; // @synthesize removeSounds=_removeSounds;
@property(retain, nonatomic) XMDownloadControlView *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) __weak XMSegmentTabViewController *tabCtrl; // @synthesize tabCtrl=_tabCtrl;
@property(retain, nonatomic) NSMutableArray *sounds; // @synthesize sounds=_sounds;
- (void).cxx_destruct;
- (_Bool)isEmpty;
- (void)downloadControlViewSearchDidClick;
- (void)downloadControlViewBatchDeleteDidClick;
- (void)downloadControlViewSortDidClick;
- (void)initWithVIdeoDataSource:(id)arg1;
- (void)onAVDownloadDownloadedListChange;
- (void)onNoDataActionButtonClicked:(id)arg1;
- (void)longPress:(id)arg1 sound:(id)arg2;
- (void)soundTableViewCell:(id)arg1 deleteSound:(id)arg2;
- (void)clearSoundsWillRemove;
- (void)lightReload;
- (void)doneLoadData;
- (_Bool)isLoadMoreViewNeeded;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (void)reloadData;
- (void)openVideoCtrlWithItem:(id)arg1;
- (void)playerSound:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tableViewSelectStatusUpdate;
- (void)tableViewDeletionSelect:(_Bool)arg1 andItem:(id)arg2;
- (void)tableViewDeletionCancel;
- (void)tableViewDeletionListenedDidClick:(_Bool)arg1;
- (void)tableViewDeletionSelectAllDidClick:(_Bool)arg1;
- (void)tableViewDeletionDone;
- (void)onLoginBtn;
- (id)tableHeadView;
- (id)tableFooterView;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)deleteSoundItem:(id)arg1;
- (void)deleteCellSound:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onPlayingTrackPaused;
- (void)onVideoPlayerInvalidate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)downloadedSound;
- (void)viewWillAppear:(_Bool)arg1;
- (double)contentBottomOffset;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)onPlayingTrackChanged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

