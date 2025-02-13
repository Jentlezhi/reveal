//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDZModalView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, PHAssetCollection, PHCachingImageManager, PHImageRequestOptions, UITableView;

@interface XMDubShowPhotoAlbumView : CDZModalView <UITableViewDelegate, UITableViewDataSource>
{
    PHAssetCollection *_currentAssetCollection;
    CDUnknownBlockType _selectBlock;
    UITableView *_tableView;
    NSArray *_dataArray;
    PHImageRequestOptions *_synchronousRequestOptions;
    PHCachingImageManager *_imageManager;
}

@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) PHImageRequestOptions *synchronousRequestOptions; // @synthesize synchronousRequestOptions=_synchronousRequestOptions;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(retain, nonatomic) PHAssetCollection *currentAssetCollection; // @synthesize currentAssetCollection=_currentAssetCollection;
- (void).cxx_destruct;
- (void)loadMoreData:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)willShowInView:(id)arg1;
- (void)dealloc;
- (void)didInitialize;
- (long long)overrideUserInterfaceStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

