//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WBLiveCallbackProtocol-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSString, WBBaseLiveViewCell, WBLiveListCollectionView, WBLiveListViewController, WBLiveRoomView;
@protocol WBLiveRoomModelProtocol;

@interface WBLiveListController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WBLiveCallbackProtocol>
{
    _Bool _isScreenLandscape;
    _Bool _isInLiveRoom;
    _Bool _statusBarNeedHidden;
    _Bool _scrolling;
    _Bool _dragging;
    _Bool _isCloseRoom;
    _Bool _isMergingLiveInfo;
    WBLiveListViewController *_viewContoller;
    WBLiveRoomView *_view;
    NSString *_schemeLink;
    NSDictionary *_params;
    NSDictionary *_schemeParams;
    NSString *_luicode;
    WBLiveListCollectionView *_collectionView;
    NSMutableArray *_liveArray;
    NSArray *_liveCacheArray;
    long long _liveCacheFaceTo;
    NSMutableSet *_cells;
    WBBaseLiveViewCell *_visibleCell;
    id <WBLiveRoomModelProtocol> _visibleLiveModel;
    long long _currentPage;
    long long _indexForRotation;
}

@property(nonatomic) long long indexForRotation; // @synthesize indexForRotation=_indexForRotation;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool isMergingLiveInfo; // @synthesize isMergingLiveInfo=_isMergingLiveInfo;
@property(nonatomic) _Bool isCloseRoom; // @synthesize isCloseRoom=_isCloseRoom;
@property(nonatomic) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(retain, nonatomic) id <WBLiveRoomModelProtocol> visibleLiveModel; // @synthesize visibleLiveModel=_visibleLiveModel;
@property(retain, nonatomic) WBBaseLiveViewCell *visibleCell; // @synthesize visibleCell=_visibleCell;
@property(retain, nonatomic) NSMutableSet *cells; // @synthesize cells=_cells;
@property(nonatomic) long long liveCacheFaceTo; // @synthesize liveCacheFaceTo=_liveCacheFaceTo;
@property(retain, nonatomic) NSArray *liveCacheArray; // @synthesize liveCacheArray=_liveCacheArray;
@property(retain, nonatomic) NSMutableArray *liveArray; // @synthesize liveArray=_liveArray;
@property(retain, nonatomic) WBLiveListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSString *luicode; // @synthesize luicode=_luicode;
@property(retain, nonatomic) NSDictionary *schemeParams; // @synthesize schemeParams=_schemeParams;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *schemeLink; // @synthesize schemeLink=_schemeLink;
@property(nonatomic) _Bool statusBarNeedHidden; // @synthesize statusBarNeedHidden=_statusBarNeedHidden;
@property(nonatomic) _Bool isInLiveRoom; // @synthesize isInLiveRoom=_isInLiveRoom;
@property(readonly, nonatomic) _Bool isScreenLandscape; // @synthesize isScreenLandscape=_isScreenLandscape;
@property(retain, nonatomic) WBLiveRoomView *view; // @synthesize view=_view;
@property(nonatomic) __weak WBLiveListViewController *viewContoller; // @synthesize viewContoller=_viewContoller;
- (void).cxx_destruct;
- (void)liveContainerDidResetCoverImageHidden:(_Bool)arg1;
- (void)liveContainerShouldClose:(_Bool)arg1;
- (void)liveContainerShouldRequestSlidingList:(id)arg1;
- (void)liveContainerDidResetModel:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)currentLiveModel;
- (id)currentCell;
- (id)nextIndexPath;
- (id)currentIndexPath;
- (void)visibleCellChanged:(id)arg1 newCell:(id)arg2;
- (void)updateVisibleCell;
- (void)liveRoomDidRecoverFromFloatWindow;
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)formatAppPrarasWithModel:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndScroll;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)draggingEnd;
- (void)draggingStarted;
- (void)scrollingEnded;
- (void)scrollingStarted;
- (void)orientationDidChange:(id)arg1;
- (void)addObservers;
- (id)getContainerID;
- (id)getSCID;
- (void)getLivesSuccess:(id)arg1 faceto:(long long)arg2;
- (void)insertLiveArrayProcess;
- (void)requestSlidingListWithRoomId:(id)arg1 faceto:(long long)arg2;
- (void)requestSlidingListProcess;
- (id)createLiveViewCell:(id)arg1 collectionView:(id)arg2 cellForItemAtIndexPath:(id)arg3;
- (void)checkUniqueLiveRoom;
- (void)reloadItemAtIndex:(long long)arg1;
- (void)reloadView;
- (void)initListView;
- (void)initView;
- (id)createLiveModelWithLiveType:(id)arg1;
- (void)initFirstLiveModel;
- (void)initData;
- (void)setPageDidDisappearIfNeedOfCell:(id)arg1;
- (void)setPageDidAppearIfNeed;
- (void)setViewDidDisappearIfNeed;
- (void)setViewWillDisappearIfNeed;
- (void)setViewDidAppearIfNeed;
- (void)setViewWillAppearIfNeed;
- (void)didReceiveMemoryWarning;
- (void)liveRoomDidLayoutSubviews;
- (_Bool)shouldNotifiCellsContainerDidClose;
- (void)closeAllContainer;
- (void)cellsDidClose;
- (_Bool)isCurrentlyShowingTaobaoCell;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)liveRoomDidDisappear;
- (void)liveRoomWillDisappear;
- (void)liveRoomDidAppear;
- (void)liveRoomWillAppear;
- (void)liveRoomDidLoad;
- (void)dealloc;
- (id)initWithLiveModel:(id)arg1;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

