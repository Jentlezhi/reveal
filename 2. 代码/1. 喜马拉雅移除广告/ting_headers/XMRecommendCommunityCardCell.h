//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMRecommendBaseCell.h"

@class UIButton, UILabel, XMMCommunityHeadView;
@protocol XMRecommendCommunityCardCelllDelegate;

@interface XMRecommendCommunityCardCell : XMRecommendBaseCell
{
    XMMCommunityHeadView *_imageView;
    UILabel *_titleLabel;
    UILabel *_tipLabel;
    UIButton *_joinButton;
    UIButton *_delBtn;
    id <XMRecommendCommunityCardCelllDelegate> _delegate;
}

@property(nonatomic) __weak id <XMRecommendCommunityCardCelllDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *delBtn; // @synthesize delBtn=_delBtn;
@property(retain, nonatomic) UIButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMMCommunityHeadView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)dellBtnAction;
- (void)joinButtonAction:(id)arg1;
- (void)setModel:(id)arg1;
- (void)updateJoinButtonStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

