//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "SwipeViewDataSource-Protocol.h"
#import "SwipeViewDelegate-Protocol.h"
#import "WBMediaAutoPlayContainer-Protocol.h"
#import "WBSegmentChannelsBarViewDelegate-Protocol.h"

@class NSArray, NSString, WBSegmentSwipeView, WBTableView, WBVideoAlbumListViewController, WBVideoSegmentChannelsBarView, WBVideoVideoListViewController;
@protocol WBMediaPlaybackService;

@interface WBVideoAlbumManagerViewController : WBViewController <WBSegmentChannelsBarViewDelegate, SwipeViewDataSource, SwipeViewDelegate, WBMediaAutoPlayContainer>
{
    _Bool _swipeViewDragging;
    WBVideoVideoListViewController *_videoListController;
    WBVideoAlbumListViewController *_albumListController;
    WBVideoSegmentChannelsBarView *_channelsBarView;
    WBSegmentSwipeView *_swipeView;
}

@property(nonatomic) _Bool swipeViewDragging; // @synthesize swipeViewDragging=_swipeViewDragging;
@property(retain, nonatomic) WBSegmentSwipeView *swipeView; // @synthesize swipeView=_swipeView;
@property(retain, nonatomic) WBVideoSegmentChannelsBarView *channelsBarView; // @synthesize channelsBarView=_channelsBarView;
@property(retain, nonatomic) WBVideoAlbumListViewController *albumListController; // @synthesize albumListController=_albumListController;
@property(retain, nonatomic) WBVideoVideoListViewController *videoListController; // @synthesize videoListController=_videoListController;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <WBMediaPlaybackService> mediaPlaybackService;
@property(readonly, nonatomic) WBTableView *mediaPlaybackTableView;
- (_Bool)panToNavigation;
- (void)swipeView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)swipeView:(id)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (void)swipeViewDidEndScrollingAnimation:(id)arg1;
- (void)swipeViewDidEndDecelerating:(id)arg1;
- (void)swipeViewWillBeginDecelerating:(id)arg1;
- (void)swipeViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)swipeViewWillBeginDragging:(id)arg1;
- (void)swipeViewCurrentItemIndexDidChange:(id)arg1;
- (void)swipeViewDidScroll:(id)arg1;
- (struct CGSize)swipeViewItemSize:(id)arg1;
- (id)swipeView:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfItemsInSwipeView:(id)arg1;
- (void)channelsBarDidClickTips:(id)arg1;
- (void)channelsBarDidClickNavigationButton:(id)arg1;
- (void)channelsBarDidClickSameButton:(id)arg1;
- (void)channelsBar:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)channelsBarDidClickSortButton:(id)arg1;
- (void)channelsBar:(id)arg1 didClickMoreButton:(id)arg2;
- (void)channelsBarDidSelectChannel:(id)arg1 toIndex:(long long)arg2;
- (void)channelsBarDidSelectChannelManual:(id)arg1 toIndex:(long long)arg2;
- (void)openServiceController;
- (void)createSwipeView;
- (void)createNavTitleView;
- (void)createAlbumViewController;
- (void)createVideoViewController;
- (void)configSubviewsFrame;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, nonatomic) NSArray *currentMediaAutoPlayProviderCandidates;
@property(readonly, nonatomic) _Bool customizeMediaAutoPlayProviderCandidates;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool generalMediaAutoPlayEnabledWhenContainedInAnotherContainer;
@property(readonly, nonatomic) _Bool generalMediaAutoPlayIgnored;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool mediaAutoPlayShouldStartNow;
@property(readonly, nonatomic) struct CGRect mediaAutoPlayVisibleRect;
@property(readonly) Class superclass;

@end

