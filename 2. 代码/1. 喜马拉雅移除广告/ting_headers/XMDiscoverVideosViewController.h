//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatBaseScrollVC.h"

#import "XMMCollectionViewWaterFlowLayoutDelegate-Protocol.h"
#import "XMMShotVideoCellDelegate-Protocol.h"
#import "XMVXPageViewSubControllerProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSString, UILabel, XMMWaterFlowLayout;

@interface XMDiscoverVideosViewController : XMChatBaseScrollVC <XMMShotVideoCellDelegate, XMMCollectionViewWaterFlowLayoutDelegate, XMVXPageViewSubControllerProtocol>
{
    _Bool _isCollectionViewNotScrolling;
    double _recordRemainMinimumTime;
    XMMWaterFlowLayout *_waterFlowLayout;
    NSMutableArray *_historyDataArray;
    long long _requestCount;
    NSArray *_remainMomentArray;
    UILabel *_topTipLabel;
}

@property(retain, nonatomic) UILabel *topTipLabel; // @synthesize topTipLabel=_topTipLabel;
@property(retain, nonatomic) NSArray *remainMomentArray; // @synthesize remainMomentArray=_remainMomentArray;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) NSMutableArray *historyDataArray; // @synthesize historyDataArray=_historyDataArray;
@property(retain, nonatomic) XMMWaterFlowLayout *waterFlowLayout; // @synthesize waterFlowLayout=_waterFlowLayout;
- (void).cxx_destruct;
- (id)menuItemWithMoment:(id)arg1;
- (void)staticMenuItem:(id)arg1 moment:(id)arg2;
- (void)longPressHandler:(id)arg1;
- (void)setupLongPressGR;
- (id)cahceFilePath;
- (id)loadCache;
- (void)saveCacheWithDictionary:(id)arg1;
- (void)removeMomentByfeedback:(id)arg1;
- (_Bool)deleteMomentWithMomentId:(unsigned long long)arg1;
- (void)postSynchronizationInfoWhenMomentDidChangePraise:(id)arg1;
- (void)praiseWithMoment:(id)arg1 success:(CDUnknownBlockType)arg2;
- (void)enumerateMomentUsingBlock:(CDUnknownBlockType)arg1;
- (id)momentWithVideoId:(unsigned long long)arg1;
- (id)momentWithMomentId:(unsigned long long)arg1;
- (void)didReceiveSynchronizationNotification:(id)arg1 synchronizationInfo:(id)arg2;
- (void)receiveSynchronizationNotification:(id)arg1;
- (void)receiveDidLogoutNotification:(id)arg1;
- (void)receiveDidLoginNotification:(id)arg1;
- (void)didRequestMoreData:(_Bool)arg1;
- (_Bool)shouldShowEmptyView;
- (id)vxContentScrollView;
- (void)enterVideoWithIndexPath:(id)arg1;
- (void)xmmShotVideoCell:(id)arg1 didTapBookMark:(id)arg2;
- (void)xmmShotVideoCell:(id)arg1 didTapTopic:(long long)arg2 linkUrl:(id)arg3;
- (void)xmmShotVideoCellDidTapVideo:(id)arg1;
- (void)xmmShotVideoCellDidTapUser:(id)arg1;
- (void)xmmShotVideoCell:(id)arg1 praiseCallback:(CDUnknownBlockType)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 xmmWaterFlowlayout:(id)arg2 heightForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)hideRefreshTips;
- (void)showRefreshTips:(id)arg1;
- (id)modelAtIndexPath:(id)arg1;
- (id)dataArrayAtSession:(unsigned long long)arg1;
- (void)recordVisibleCell;
- (void)recordVisibleCellRemainTime;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (id)analysisResponseData:(id)arg1 isRefresh:(_Bool)arg2;
- (void)setupSubview;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

