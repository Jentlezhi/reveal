//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor, UIImageView, UILabel, XMCoupon, XMTableCellObject, XMWebImageView;

@interface XMCampCouponView : UIView
{
    int _campCouponShowType;
    CDUnknownBlockType _couponDidSelectBlock;
    CDUnknownBlockType _moreButtonClickBlock;
    UILabel *_couponLabel;
    UIImageView *_divideLine;
    UILabel *_priceLabel;
    UILabel *_introLabel;
    UILabel *_dateLabel;
    UILabel *_xiDianLabel;
    UIButton *_getButton;
    XMCoupon *_coupon;
    XMTableCellObject *_cellObject;
    XMWebImageView *_bkg;
    UIColor *_textColor;
    UILabel *_moreLabel;
    XMWebImageView *_arrowView;
    UIButton *_moreButton;
}

@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) XMWebImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) XMWebImageView *bkg; // @synthesize bkg=_bkg;
@property(retain, nonatomic) XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
@property(retain, nonatomic) XMCoupon *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) UIButton *getButton; // @synthesize getButton=_getButton;
@property(retain, nonatomic) UILabel *xiDianLabel; // @synthesize xiDianLabel=_xiDianLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) UILabel *couponLabel; // @synthesize couponLabel=_couponLabel;
@property(copy, nonatomic) CDUnknownBlockType moreButtonClickBlock; // @synthesize moreButtonClickBlock=_moreButtonClickBlock;
@property(copy, nonatomic) CDUnknownBlockType couponDidSelectBlock; // @synthesize couponDidSelectBlock=_couponDidSelectBlock;
@property(nonatomic) int campCouponShowType; // @synthesize campCouponShowType=_campCouponShowType;
- (void).cxx_destruct;
- (void)moreCouponDidClick;
- (void)getCouponDidClick;
- (id)getXiDianLabel;
- (id)getCouponLabel;
- (void)changeTheme:(int)arg1;
- (void)updateWithCellModel:(id)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

