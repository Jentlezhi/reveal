//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMFindFlowWhiteBackTableViewCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "XMVIPNewAlbumCardCellDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UICollectionView, UIImageView, UILabel, UIView, XMMoreButton, XMTableCellObject, XMVipChannelHeaderAndAlbumsItem;
@protocol XMVIPNewAlbumCardCellDelegate;

@interface XMVIPNewAlbumCardCell : XMFindFlowWhiteBackTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, XMVIPNewAlbumCardCellDelegate>
{
    double _collectionHeight;
    struct CGSize _itemSize;
    _Bool _isLoading;
    XMTableCellObject *_cellObject;
    id <XMVIPNewAlbumCardCellDelegate> _delegate;
    NSArray *_items;
    UIView *_backView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    XMMoreButton *_moreButton;
    UICollectionView *_collectionView;
    XMVipChannelHeaderAndAlbumsItem *_model;
    UIButton *_reloadButton;
    double _itemHeight;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
+ (id)cellObjectWithCellModel:(id)arg1 customDelegate:(id)arg2;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(retain, nonatomic) UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) XMVipChannelHeaderAndAlbumsItem *model; // @synthesize model=_model;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) XMMoreButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <XMVIPNewAlbumCardCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)p_updateAnimation;
- (void)p_clickReloadAction:(id)arg1;
- (void)p_clickMoreAction:(id)arg1;
- (void)p_setConstraints;
- (void)p_setUI;
- (void)p_initData;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

