//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSIndexPath, NSString, NSTimer, UICollectionView, UICollectionViewFlowLayout, UIPageControl;
@protocol WBVideoPlaylistLandsVideoCarouselViewDelegate;

@interface WBVideoPlaylistLandsVideoCarouselView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    struct CGSize _itemSize;
    _Bool _beenInitialPosition;
    NSTimer *_timer;
    _Bool _allowInfiniteBanner;
    _Bool _allowAutoNextPage;
    _Bool _allEqual;
    UICollectionViewFlowLayout *_collectionViewLayout;
    id <WBVideoPlaylistLandsVideoCarouselViewDelegate> _delegate;
    long long _timeInterval;
    CDUnknownBlockType _loadMoreBlock;
    UIPageControl *_pageControl;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(copy, nonatomic) CDUnknownBlockType loadMoreBlock; // @synthesize loadMoreBlock=_loadMoreBlock;
@property(nonatomic) _Bool allEqual; // @synthesize allEqual=_allEqual;
@property(nonatomic) long long timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) _Bool allowAutoNextPage; // @synthesize allowAutoNextPage=_allowAutoNextPage;
@property(nonatomic) _Bool allowInfiniteBanner; // @synthesize allowInfiniteBanner=_allowInfiniteBanner;
@property(nonatomic) id <WBVideoPlaylistLandsVideoCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
- (void).cxx_destruct;
- (void)reloadCurrentPageControl;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)destroyRefreshWithIsHeader:(_Bool)arg1;
- (void)endFooderLoading;
- (void)endHeaderLoading;
- (void)setupRefreshHeaderFoorer;
@property(readonly, nonatomic) NSIndexPath *lastIndexPath;
@property(readonly, nonatomic) NSIndexPath *nextIndexPath;
@property(readonly, nonatomic) NSIndexPath *currentIndexPath;
- (void)layoutSubviews;
- (void)scrollToMostSuitableAnimated:(_Bool)arg1;
- (void)scrollToInitialAnimated:(_Bool)arg1;
- (void)scrollToIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)removeTimer;
- (void)dealloc;
- (void)addTimer;
- (void)initialization;
- (id)initWithDelegate:(id)arg1;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

