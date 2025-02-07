//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSTPlayFooterBaseView.h"

#import "WBSTLikeButtonDelegate-Protocol.h"
#import "WBStoryFullScreenFooterContainerDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, WBContentImageView, WBHelperView, WBSTLikeButton, WBStoryFullScreenProgressView, WBStoryUserView;

@interface WBSTGuestProductFooter : WBSTPlayFooterBaseView <WBSTLikeButtonDelegate, WBStoryFullScreenFooterContainerDelegate>
{
    unsigned long long likeState;
    UIButton *_commentsButton;
    WBSTLikeButton *_likeButton;
    UIButton *_shareButton;
    UIButton *_interactiveButton;
    unsigned long long _visibility;
    WBHelperView *_shareTips;
    UIImageView *_shareRedPacketTips;
    WBStoryFullScreenProgressView *_footerProgressView;
    NSString *_featureCode;
    WBContentImageView *_productImg;
}

@property(retain, nonatomic) WBContentImageView *productImg; // @synthesize productImg=_productImg;
@property(copy, nonatomic) NSString *featureCode; // @synthesize featureCode=_featureCode;
@property(retain, nonatomic) WBStoryFullScreenProgressView *footerProgressView; // @synthesize footerProgressView=_footerProgressView;
@property(retain, nonatomic) UIImageView *shareRedPacketTips; // @synthesize shareRedPacketTips=_shareRedPacketTips;
@property(retain, nonatomic) WBHelperView *shareTips; // @synthesize shareTips=_shareTips;
@property(nonatomic) unsigned long long visibility; // @synthesize visibility=_visibility;
@property(retain, nonatomic) UIButton *interactiveButton; // @synthesize interactiveButton=_interactiveButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) WBSTLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIButton *commentsButton; // @synthesize commentsButton=_commentsButton;
- (void).cxx_destruct;
- (void)likePressed:(id)arg1 doubleTapped:(_Bool)arg2;
- (_Bool)showProgressView;
- (_Bool)showLikeButton;
- (_Bool)canSendMessageAfterFollow;
- (_Bool)canCommentAfterFollow;
- (_Bool)showShareButton;
- (_Bool)showInteractiveButton;
- (void)productImgPressed;
- (void)interactiveButtonPressed:(id)arg1;
- (void)shareButtonPressed:(id)arg1;
- (void)commentsButtonPressed:(id)arg1;
- (void)updateItem:(id)arg1 segments:(id)arg2 segmentIndex:(unsigned long long)arg3;
- (id)actionButtons;
- (_Bool)isShareTipsShowing;
- (void)doShareTipsHideAnimation;
- (double)maxHeight;
- (void)layoutSubviews;
- (void)updateWithSegment:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WBStoryUserView *authorView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

