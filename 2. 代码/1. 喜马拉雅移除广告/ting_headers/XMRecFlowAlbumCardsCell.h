//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMFindFlowWhiteBackTableViewCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "XMRecFlowAlbumCardCellDelegate-Protocol.h"

@class NSString, UICollectionView, UILabel, XMFindRecFlowModel, XMTableCellObject;
@protocol XMRecFlowAlbumCardCellDelegate;

@interface XMRecFlowAlbumCardsCell : XMFindFlowWhiteBackTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, XMRecFlowAlbumCardCellDelegate>
{
    id <XMRecFlowAlbumCardCellDelegate> _delegate;
    XMFindRecFlowModel *_model;
    UICollectionView *_collectionView;
    UILabel *_moduleTitleLabel;
    XMTableCellObject *_cellObj;
    id _xmubt_model;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
+ (id)localLiveGifImages;
@property(retain, nonatomic) id xmubt_model; // @synthesize xmubt_model=_xmubt_model;
@property(nonatomic) __weak XMTableCellObject *cellObj; // @synthesize cellObj=_cellObj;
@property(retain, nonatomic) UILabel *moduleTitleLabel; // @synthesize moduleTitleLabel=_moduleTitleLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) XMFindRecFlowModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <XMRecFlowAlbumCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)recFlowAlbumCardCellDidLongPress:(id)arg1 albumCardModel:(id)arg2 recFlowModel:(id)arg3;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollActionWithScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)rangingListTap;
- (void)guessYouLikeClick;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

