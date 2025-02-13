//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBMWScreen.h"

#import "RAPIListScreenDelegate-Protocol.h"

@class NSString, XMAlbumItem, XMServerRequest;

@interface XMBMWSubscribeDetailScreen : XMBMWScreen <RAPIListScreenDelegate>
{
    XMAlbumItem *_albumItem;
    XMServerRequest *_serRequest;
}

@property(retain, nonatomic) XMServerRequest *serRequest; // @synthesize serRequest=_serRequest;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
- (void).cxx_destruct;
- (void)handleOnItemClicked:(long long)arg1 forGroup:(long long)arg2;
- (long long)getTargetScreenForRow:(long long)arg1 forGroup:(long long)arg2;
- (long long)getItemCountForGroup:(long long)arg1;
- (long long)getGroupCount;
- (id)getStringForLine:(long long)arg1 forRow:(long long)arg2 forGroup:(long long)arg3;
- (id)getTitle;
- (id)getLabelForEmptyList;
- (id)getLoadingLabel;
- (_Bool)canProvideDataImmediately;
- (void)onFocused;
- (void)setup;
- (void)reloadData;
- (void)onRequestFailedSelector:(id)arg1;
- (void)onRequestFinishedSelector:(id)arg1;
- (void)requestFromIndex:(long long)arg1;
- (void)refreshWithData:(id)arg1;
- (id)getScreenConfig;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

