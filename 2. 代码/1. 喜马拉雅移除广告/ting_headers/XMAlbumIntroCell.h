//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

#import "XMCVU_SoundFeedCampGroupInfoDelegate-Protocol.h"

@class NSString, TYAttributedLabel, UIButton, UIImageView, UILabel, UIView, XMAlbumCellInfosView, XMAlbumCoverImageView, XMAlbumItem, XMAlbumPayScoreView, XMAlbumRecCellModel, XMTableCellObject;
@protocol XMAlbumCellDelegate;

@interface XMAlbumIntroCell : XMTableViewCell <XMCVU_SoundFeedCampGroupInfoDelegate>
{
    XMAlbumCoverImageView *_coverImageView;
    UIView *_contentV;
    TYAttributedLabel *_albumTitleTYLab;
    UILabel *_priceLabel;
    _Bool _showRecReason;
    _Bool _subjectDetailCell;
    _Bool _showBoughtNum;
    _Bool _hiddenTrackBuyTag;
    _Bool _showFavButton;
    id <XMAlbumCellDelegate> _delegate;
    XMAlbumItem *_albumItem;
    XMAlbumRecCellModel *_cellModel;
    XMTableCellObject *_cellObject;
    long long _fromType;
    long long _similarTagType;
    UILabel *_introLabel;
    XMAlbumCellInfosView *_infosView;
    XMAlbumPayScoreView *_scoreView;
    UILabel *_boughtNum;
    UILabel *_refundStatus;
    UIButton *_refundMore;
    UIButton *_favBtn;
    UIView *_campGroupInfo;
    UIImageView *_similarTagView;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
+ (double)boughtHeightForItem:(id)arg1;
+ (double)layoutForCellModel:(id)arg1;
+ (double)albumSimilarHeightForItem:(id)arg1 isSubjectCell:(_Bool)arg2 showRecReason:(_Bool)arg3 hiddenTrackBuyTag:(_Bool)arg4;
+ (double)newHeightForItem:(id)arg1 isSubjectCell:(_Bool)arg2 showRecReason:(_Bool)arg3 hiddenTrackBuyTag:(_Bool)arg4;
+ (double)height;
@property(retain, nonatomic) UIImageView *similarTagView; // @synthesize similarTagView=_similarTagView;
@property(retain, nonatomic) UIView *campGroupInfo; // @synthesize campGroupInfo=_campGroupInfo;
@property(retain, nonatomic) UIButton *favBtn; // @synthesize favBtn=_favBtn;
@property(retain, nonatomic) UIButton *refundMore; // @synthesize refundMore=_refundMore;
@property(retain, nonatomic) UILabel *refundStatus; // @synthesize refundStatus=_refundStatus;
@property(retain, nonatomic) UILabel *boughtNum; // @synthesize boughtNum=_boughtNum;
@property(retain, nonatomic) XMAlbumPayScoreView *scoreView; // @synthesize scoreView=_scoreView;
@property(retain, nonatomic) XMAlbumCellInfosView *infosView; // @synthesize infosView=_infosView;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(nonatomic) long long similarTagType; // @synthesize similarTagType=_similarTagType;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) _Bool showFavButton; // @synthesize showFavButton=_showFavButton;
@property(nonatomic) _Bool hiddenTrackBuyTag; // @synthesize hiddenTrackBuyTag=_hiddenTrackBuyTag;
@property(nonatomic) _Bool showBoughtNum; // @synthesize showBoughtNum=_showBoughtNum;
@property(nonatomic) _Bool subjectDetailCell; // @synthesize subjectDetailCell=_subjectDetailCell;
@property(nonatomic) _Bool showRecReason; // @synthesize showRecReason=_showRecReason;
@property(nonatomic) __weak XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
@property(retain, nonatomic) XMAlbumRecCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
@property(nonatomic) __weak id <XMAlbumCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)refundMoreClick:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)campGroupInfoTap:(id)arg1;
- (void)addRefundUIElement;
- (void)removeRefundUIElements;
- (void)removeRefundMore;
- (void)removeRefundStatus;
- (void)removeBoughtNum;
- (void)onFavBtn:(id)arg1;
- (void)removeFavBtn;
- (void)removeScoreView;
- (void)updatePriceLabel:(id)arg1;
- (void)removeInfosView;
- (void)removeIntroLabel;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

