//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WBMLQAAPBannerThemeView, WBMLQAActiveGradientLabel, WBMLQAActivePageLayerInfoModel, WBMLQAActiveSubLine;

@interface WBMLQAActivePageRevivalView : UIView
{
    WBMLQAActivePageLayerInfoModel *_revivalModel;
    CDUnknownBlockType _confirmBlock;
    UIView *_bgView;
    UIView *_revivalCardView;
    UIImageView *_closeImageView;
    UIImageView *_headImageView;
    UILabel *_titleLabel;
    UILabel *_inviteText1Label;
    WBMLQAActiveGradientLabel *_inviteText2Label;
    UIView *_walletText1View;
    WBMLQAActiveSubLine *_strokeLine;
    UIImageView *_walletIcon;
    WBMLQAActiveGradientLabel *_walletText1Label;
    UILabel *_walletText2Label;
    WBMLQAAPBannerThemeView *_confirmView;
}

@property(retain, nonatomic) WBMLQAAPBannerThemeView *confirmView; // @synthesize confirmView=_confirmView;
@property(retain, nonatomic) UILabel *walletText2Label; // @synthesize walletText2Label=_walletText2Label;
@property(retain, nonatomic) WBMLQAActiveGradientLabel *walletText1Label; // @synthesize walletText1Label=_walletText1Label;
@property(retain, nonatomic) UIImageView *walletIcon; // @synthesize walletIcon=_walletIcon;
@property(retain, nonatomic) WBMLQAActiveSubLine *strokeLine; // @synthesize strokeLine=_strokeLine;
@property(retain, nonatomic) UIView *walletText1View; // @synthesize walletText1View=_walletText1View;
@property(retain, nonatomic) WBMLQAActiveGradientLabel *inviteText2Label; // @synthesize inviteText2Label=_inviteText2Label;
@property(retain, nonatomic) UILabel *inviteText1Label; // @synthesize inviteText1Label=_inviteText1Label;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIImageView *closeImageView; // @synthesize closeImageView=_closeImageView;
@property(retain, nonatomic) UIView *revivalCardView; // @synthesize revivalCardView=_revivalCardView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(retain, nonatomic) WBMLQAActivePageLayerInfoModel *revivalModel; // @synthesize revivalModel=_revivalModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)confirmClick;
- (void)handleClose:(id)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

