//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "PPMediaControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class NSMutableArray, NSString, PPMediaDevice, UIToolbar;

@interface XMTsbOtherFilesVC : XMSubLevelViewController <UIActionSheetDelegate, PPMediaControllerDelegate>
{
    long long _pageId;
    long long _maxPageId;
    long long _tblHeight;
    long long _playingIndex;
    long long _willPlayIndex;
    long long _currentPage;
    long long _willPlayPage;
    _Bool _isPaused;
    _Bool _needRenewPl;
    PPMediaDevice *_ppDevice;
    unsigned long long _dirType;
    NSMutableArray *_theSounds;
    UIToolbar *_toolBar;
    NSString *_currentPlayList;
    NSString *_playListName;
    NSString *_dirTitle;
}

@property(copy, nonatomic) NSString *dirTitle; // @synthesize dirTitle=_dirTitle;
@property(copy, nonatomic) NSString *playListName; // @synthesize playListName=_playListName;
@property(copy, nonatomic) NSString *currentPlayList; // @synthesize currentPlayList=_currentPlayList;
@property(retain, nonatomic) UIToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) NSMutableArray *theSounds; // @synthesize theSounds=_theSounds;
@property(nonatomic) unsigned long long dirType; // @synthesize dirType=_dirType;
@property(nonatomic) __weak PPMediaDevice *ppDevice; // @synthesize ppDevice=_ppDevice;
- (void).cxx_destruct;
- (void)checkIsPauseByPlayListName;
- (void)onReceivePlayPauseNotification:(id)arg1;
- (void)onReceiveAVTransportNotification:(id)arg1;
- (void)onReceivePlayQueueNotification:(id)arg1;
- (long long)playingIdxOfPage;
- (void)onReceiveBrowseQueueNotification:(id)arg1;
- (void)browsePlayQueue;
- (void)deleteMediaDidRespondWithResult:(_Bool)arg1;
- (void)setDataSourceWithDict:(id)arg1;
- (void)browseTimeOut;
- (void)browseDidRespondwithObjID:(const char *)arg1 Filter:(const char *)arg2 result:(const char *)arg3;
- (void)playQueueWithIndexDidRespondWithResult:(_Bool)arg1;
- (void)didPlayQueueWithIndex;
- (void)playQueueWithIndex:(long long)arg1 onDevice:(id)arg2;
- (void)playPauseTheDevice:(id)arg1;
- (void)onCreatePlayListSuccess;
- (void)createPlayListOnDevice:(id)arg1;
- (void)browseOtherSoundsAtPage:(int)arg1;
- (void)requestOtherSoundsInDisk;
- (void)triggerLoadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)noDataCellForTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadData;
- (void)setTableViewHeight;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClearButtonClicked:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (id)clearButton;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

