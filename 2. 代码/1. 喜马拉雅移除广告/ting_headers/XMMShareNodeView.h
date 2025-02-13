//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseNodeView.h"

@class UIButton, UILabel, XMWebImageView;

@interface XMMShareNodeView : XMMBaseNodeView
{
    UIButton *_iconButton;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    XMWebImageView *_isPaidImageView;
}

@property(retain, nonatomic) XMWebImageView *isPaidImageView; // @synthesize isPaidImageView=_isPaidImageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
- (void).cxx_destruct;
- (void)setXmubt_moment:(id)arg1;
- (void)layoutSubviewsWithSize:(struct CGSize)arg1;
- (void)initializationLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)resetColor;
- (void)updateColorWithTheme:(id)arg1;
- (void)reuseWithNode:(id)arg1;
- (void)didInitialize;

@end

