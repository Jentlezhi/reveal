//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, UICollectionView;

@interface XMDubShowMSAllMultiMatchMyCooperationsViewController : XMBaseVC <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _hasMore;
    UICollectionView *_collectionView;
    NSArray *_models;
    long long _pageId;
}

@property(nonatomic) long long pageId; // @synthesize pageId=_pageId;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (_Bool)shouldShowNoNetView;
- (_Bool)shouldShowEmptyView;
- (void)p_handleSearchAction:(id)arg1;
- (void)reqeustDataWithPageNo:(long long)arg1 pullToRefresh:(_Bool)arg2;
- (void)loadMore;
- (void)pullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)customInit;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

