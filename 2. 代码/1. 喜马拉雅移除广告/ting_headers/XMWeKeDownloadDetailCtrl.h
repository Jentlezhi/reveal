//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMWeKeBaseScrollCtrl.h"

#import "XMWeKePlayListViewDelegate-Protocol.h"

@class NSString, UIView, XMWeKeSeriesLesson, XMWeKeSoundListInfo;

@interface XMWeKeDownloadDetailCtrl : XMWeKeBaseScrollCtrl <XMWeKePlayListViewDelegate>
{
    XMWeKeSeriesLesson *_lesson;
    XMWeKeSoundListInfo *_soundsInfo;
    UIView *_headerView;
}

@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) XMWeKeSoundListInfo *soundsInfo; // @synthesize soundsInfo=_soundsInfo;
@property(retain, nonatomic) XMWeKeSeriesLesson *lesson; // @synthesize lesson=_lesson;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)reloadTableViewWithDownloadItems;
- (void)updateTableViewHeader;
- (void)requestSoundsInfo;
- (void)playListView:(id)arg1 didClickDownloadAtIndex:(long long)arg2;
- (void)playListViewDidClickAllDownload:(id)arg1;
- (void)playListView:(id)arg1 didSelectIndex:(long long)arg2;
- (void)downloadLessonAtIndex:(long long)arg1;
- (void)deleteDataAtIndex:(long long)arg1;
- (id)trackItemFromListItem:(id)arg1;
- (void)onDownloadFinishedNotification:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

