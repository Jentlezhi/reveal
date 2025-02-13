//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, XMAlbumCardModel, XMWebImageView;

@interface _XMRecFlowCardView : UICollectionViewCell
{
    _Bool _updatingLayout;
    XMWebImageView *_coverImageView;
    XMWebImageView *_payIcon;
    UILabel *_titleLabel;
    UIImageView *_maskImageView;
    UIImageView *_infoIcon;
    UILabel *_infoLabel;
    XMAlbumCardModel *_item;
    CDUnknownBlockType _longPressHanlder;
}

@property(copy, nonatomic) CDUnknownBlockType longPressHanlder; // @synthesize longPressHanlder=_longPressHanlder;
@property(retain, nonatomic) XMAlbumCardModel *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *infoIcon; // @synthesize infoIcon=_infoIcon;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *payIcon; // @synthesize payIcon=_payIcon;
@property(retain, nonatomic) XMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)longPress:(id)arg1;
- (void)setAlbumAdInfoWithModel:(id)arg1;
- (void)p_updateAlbumCardModel:(id)arg1;
- (void)p_setConstraints;
- (void)p_setUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

