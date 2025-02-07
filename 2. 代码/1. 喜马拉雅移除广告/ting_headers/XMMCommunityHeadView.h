//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseView.h"

@class UIImage, UIImageView, XMAnimatedImageView, XMMCommunity;

@interface XMMCommunityHeadView : XMMBaseView
{
    _Bool _showRoleTag;
    XMMCommunity *_community;
    UIImage *_placeholderImage;
    XMAnimatedImageView *_headImageView;
    XMAnimatedImageView *_iconImageView;
    UIImageView *_roleImageView;
}

@property(retain, nonatomic) UIImageView *roleImageView; // @synthesize roleImageView=_roleImageView;
@property(retain, nonatomic) XMAnimatedImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) XMAnimatedImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool showRoleTag; // @synthesize showRoleTag=_showRoleTag;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) XMMCommunity *community; // @synthesize community=_community;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image;
- (void)updateRoleTagImageView;
- (void)updateIconImageView;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;
- (void)didInitialize;

@end

