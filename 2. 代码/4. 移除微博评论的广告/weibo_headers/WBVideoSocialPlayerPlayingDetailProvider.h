//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBMediaTableViewSectionsProvider-Protocol.h"

@class NSString, WBStatus, WBVideoPlaylistDataProvider, WBVideoPlaylistItem;
@protocol WBMediaTableViewProxing;

@interface WBVideoSocialPlayerPlayingDetailProvider : NSObject <WBMediaTableViewSectionsProvider>
{
    _Bool _shouldLogVideoTagExposure;
    WBStatus *_currentStatus;
    WBVideoPlaylistDataProvider *_dataProvider;
    WBVideoPlaylistItem *_playlist;
    id <WBMediaTableViewProxing> _tableViewProxing;
}

@property(nonatomic) _Bool shouldLogVideoTagExposure; // @synthesize shouldLogVideoTagExposure=_shouldLogVideoTagExposure;
@property(nonatomic) __weak id <WBMediaTableViewProxing> tableViewProxing; // @synthesize tableViewProxing=_tableViewProxing;
@property(retain, nonatomic) WBVideoPlaylistItem *playlist; // @synthesize playlist=_playlist;
@property(retain, nonatomic) WBVideoPlaylistDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) WBStatus *currentStatus; // @synthesize currentStatus=_currentStatus;
- (void).cxx_destruct;
- (void)sensorLog:(id)arg1;
- (void)logVideoTagExposure:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)textContentViewDidExpand:(id)arg1;
- (id)initWithPlaylistDataProvider:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

