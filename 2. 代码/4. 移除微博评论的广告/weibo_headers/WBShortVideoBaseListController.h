//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "WBShortVideoDataProviderObserver-Protocol.h"
#import "WBShortVideoSharedContextEventListener-Protocol.h"

@class NSArray, NSError, NSString, WBShortVideoBaseCollectionCell, WBShortVideoPreloadController, WBShortVideoSharedContext;

@interface WBShortVideoBaseListController : NSObject <UICollectionViewDataSource, WBShortVideoSharedContextEventListener, WBShortVideoDataProviderObserver>
{
    struct {
        unsigned int viewControllerPresented;
    } _flags;
    _Bool _needUpdateLoadMoreStateAfterDragging;
    _Bool _autoLoadMore;
    WBShortVideoSharedContext *_sharedContext;
    WBShortVideoBaseCollectionCell *_visibleCell;
    NSArray *_cellModels;
    WBShortVideoPreloadController *_preloadController;
    unsigned long long _pageBufferCount;
    NSError *_loadMoreError;
}

@property(nonatomic) _Bool autoLoadMore; // @synthesize autoLoadMore=_autoLoadMore;
@property(retain, nonatomic) NSError *loadMoreError; // @synthesize loadMoreError=_loadMoreError;
@property(nonatomic) _Bool needUpdateLoadMoreStateAfterDragging; // @synthesize needUpdateLoadMoreStateAfterDragging=_needUpdateLoadMoreStateAfterDragging;
@property(nonatomic) unsigned long long pageBufferCount; // @synthesize pageBufferCount=_pageBufferCount;
@property(retain, nonatomic) WBShortVideoPreloadController *preloadController; // @synthesize preloadController=_preloadController;
@property(retain, nonatomic) NSArray *cellModels; // @synthesize cellModels=_cellModels;
@property(retain, nonatomic) WBShortVideoBaseCollectionCell *visibleCell; // @synthesize visibleCell=_visibleCell;
@property(nonatomic) __weak WBShortVideoSharedContext *sharedContext; // @synthesize sharedContext=_sharedContext;
- (void).cxx_destruct;
- (void)updateExposureViewsForLog;
- (id)analysisParameters;
- (id)nextCellModel;
- (void)scrollToIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToModel:(id)arg1 animated:(_Bool)arg2;
- (id)nextIndexPath;
- (void)showNetWorkHudTips;
- (void)pullRefresh;
- (void)triggerPullRefresh;
- (void)updateLoadMoreStateWithError:(id)arg1;
- (void)loadMoreForTrigger;
- (void)loadMore;
- (void)startLoadMore;
- (void)triggerLoadMore;
- (void)triggerAutoLoadMore;
- (void)dataProvider:(id)arg1 didApplyChanges:(id)arg2;
- (void)dataProviderDidUpdatePRLMState:(id)arg1;
- (void)dataProvider:(id)arg1 didUpdateStatusDetail:(id)arg2;
- (void)stopPreload;
- (void)startPreload;
- (void)sharedContext:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)sharedContext:(id)arg1 didChangeDraggingState:(_Bool)arg2;
- (void)sharedContext:(id)arg1 didChangeScrollState:(_Bool)arg2;
- (void)sharedContext:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)sharedContext:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)visibleCellChanged:(id)arg1 newCell:(id)arg2;
- (void)updateVisibleCell;
- (id)cellForIndexPath:(id)arg1;
- (id)currentCell;
- (id)currentIndexPath;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)sharedContext:(id)arg1 didTransitionFromPageState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)cellClassSet;
- (void)initializeCollectionView:(id)arg1;
- (id)collectionView;
- (id)dataProvider;
- (id)viewController;
- (id)initWithSharedContext:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

