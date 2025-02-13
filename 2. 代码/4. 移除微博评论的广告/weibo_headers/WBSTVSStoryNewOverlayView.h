//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSTVSOverlayBaseView.h"

#import "WBStoryAttributedExpandableTextViewDelegate-Protocol.h"
#import "WBStoryClickNodesContentViewDelegate-Protocol.h"

@class LOTAnimationView, NSArray, NSString, UIButton, UILabel, WBContentImageView, WBLittleVideoStoryMusicDiversionControl, WBSTLikeAnimationView, WBSTVSADCardView, WBStoryAdvertView, WBStoryAttributedExpandableTextView, WBStoryClickNodesContentView, WBStoryFullScreenDarkGradientView, WBStoryNewFullOverlayButton, WBStoryNewFullScreenOverlayMusicLabel, WBStoryNewFullScreenOverlayNicknameLabel, WBStoryOverlayAvatarView, WBStoryRankListView, WBStoryWechatControl;

@interface WBSTVSStoryNewOverlayView : WBSTVSOverlayBaseView <WBStoryAttributedExpandableTextViewDelegate, WBStoryClickNodesContentViewDelegate>
{
    _Bool _highLightedBtn;
    _Bool _isAdCardEnable;
    _Bool _isDisplayAdCard;
    _Bool _isAdClosed;
    UIButton *_moreButton;
    WBStoryFullScreenDarkGradientView *_gradientView;
    WBStoryOverlayAvatarView *_avatarView;
    LOTAnimationView *_followButton;
    WBStoryNewFullOverlayButton *_likeButton;
    WBStoryNewFullOverlayButton *_commentListButton;
    WBStoryNewFullOverlayButton *_shareButton;
    WBStoryNewFullOverlayButton *_viewerButton;
    WBStoryWechatControl *_wechatButton;
    WBLittleVideoStoryMusicDiversionControl *_musicDiversion;
    UIButton *_interactiveButton;
    NSArray *_rightViews;
    WBStoryRankListView *_rankListView;
    WBStoryNewFullScreenOverlayNicknameLabel *_nickNameLabel;
    WBStoryNewFullScreenOverlayMusicLabel *_musicTitleLabel;
    NSArray *_bottomViews;
    WBSTLikeAnimationView *_likeAnimation;
    WBStoryClickNodesContentView *_clickNodesContentView;
    WBStoryAttributedExpandableTextView *_textContentView;
    UIButton *_moreVideoButton;
    WBContentImageView *_productImg;
    UIButton *_backButton;
    WBStoryAdvertView *_advertView;
    UILabel *_adLabel;
    WBSTVSADCardView *_adCard;
}

@property(nonatomic) _Bool isAdClosed; // @synthesize isAdClosed=_isAdClosed;
@property(nonatomic) _Bool isDisplayAdCard; // @synthesize isDisplayAdCard=_isDisplayAdCard;
@property(retain, nonatomic) WBSTVSADCardView *adCard; // @synthesize adCard=_adCard;
@property(nonatomic) _Bool isAdCardEnable; // @synthesize isAdCardEnable=_isAdCardEnable;
@property(nonatomic) _Bool highLightedBtn; // @synthesize highLightedBtn=_highLightedBtn;
@property(retain, nonatomic) UILabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) WBStoryAdvertView *advertView; // @synthesize advertView=_advertView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) WBContentImageView *productImg; // @synthesize productImg=_productImg;
@property(retain, nonatomic) UIButton *moreVideoButton; // @synthesize moreVideoButton=_moreVideoButton;
@property(retain, nonatomic) WBStoryAttributedExpandableTextView *textContentView; // @synthesize textContentView=_textContentView;
@property(retain, nonatomic) WBStoryClickNodesContentView *clickNodesContentView; // @synthesize clickNodesContentView=_clickNodesContentView;
@property(retain, nonatomic) WBSTLikeAnimationView *likeAnimation; // @synthesize likeAnimation=_likeAnimation;
@property(retain, nonatomic) NSArray *bottomViews; // @synthesize bottomViews=_bottomViews;
@property(retain, nonatomic) WBStoryNewFullScreenOverlayMusicLabel *musicTitleLabel; // @synthesize musicTitleLabel=_musicTitleLabel;
@property(retain, nonatomic) WBStoryNewFullScreenOverlayNicknameLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WBStoryRankListView *rankListView; // @synthesize rankListView=_rankListView;
@property(retain, nonatomic) NSArray *rightViews; // @synthesize rightViews=_rightViews;
@property(retain, nonatomic) UIButton *interactiveButton; // @synthesize interactiveButton=_interactiveButton;
@property(retain, nonatomic) WBLittleVideoStoryMusicDiversionControl *musicDiversion; // @synthesize musicDiversion=_musicDiversion;
@property(retain, nonatomic) WBStoryWechatControl *wechatButton; // @synthesize wechatButton=_wechatButton;
@property(retain, nonatomic) WBStoryNewFullOverlayButton *viewerButton; // @synthesize viewerButton=_viewerButton;
@property(retain, nonatomic) WBStoryNewFullOverlayButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) WBStoryNewFullOverlayButton *commentListButton; // @synthesize commentListButton=_commentListButton;
@property(retain, nonatomic) WBStoryNewFullOverlayButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) LOTAnimationView *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) WBStoryOverlayAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) WBStoryFullScreenDarkGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
- (void).cxx_destruct;
- (void)setAdCardHidden:(_Bool)arg1;
- (void)doAdCardAnimationWithCardIn:(_Bool)arg1;
- (void)videoOverlayControlsPlugin:(id)arg1 currentTime:(double)arg2 totalTime:(double)arg3;
- (void)tapAdCardCloseButton;
- (void)resetAdButtonUI;
- (void)setVisible:(_Bool)arg1;
- (void)doAdFollowAnimation;
- (void)resetAdFollowState;
- (void)updateAdButtons;
- (_Bool)shouldHighLightBtn;
- (void)highLightBtn;
- (void)adButtonPressed;
- (double)maxHeight;
- (void)checkLoginWithTitle:(id)arg1;
- (id)contentView;
- (void)startMusicAndAttriTextAnimation;
- (void)stopMusicAndAttriTextAnimation;
- (void)clickNodesView:(id)arg1 tipControlDidPressed:(id)arg2;
- (void)stopAnimateAvatarIfNeed;
- (void)startAnimateAvatarIfNeed;
- (_Bool)shouldHideWechatButton;
- (void)resetWechatButton;
- (void)animatedWechatButtonOnce;
- (void)showWechatIcon;
- (void)startWechatButtonAnimation;
- (void)stopAnimateMusicControlIfNeed;
- (void)startAnimateMusicControlIfNeed;
- (void)doLikeAnimation:(_Bool)arg1;
- (_Bool)shouldPlayNow;
- (void)setBottomHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setContentHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)doSuccessFollowAnimation;
- (void)updateFollowState;
- (void)timeLabelShow:(_Bool)arg1;
- (void)updateRankListView:(id)arg1;
- (void)updateDiversionArea:(id)arg1;
- (void)updateCommentListButton;
- (void)updateViewerButton;
- (void)updateLikeButton;
- (void)updateAvatar;
- (void)configureWithSegment:(id)arg1;
- (void)hideClickNodeTips;
- (void)configureWithClickNodes:(id)arg1 mediaContentRect:(struct CGRect)arg2;
- (void)adCardAction;
- (void)tapMoreButton;
- (void)tapAdCardButton;
- (void)updateTextContentView:(id)arg1 maxWidth:(double)arg2 maxLine:(long long)arg3;
- (void)interactiveButtonPressed;
- (void)diversionContolPressed;
- (void)moreButtonPressed:(id)arg1;
- (void)productImgPressed;
- (void)userNameDidPressed;
- (void)userViewDidPressed;
- (void)followButtonPressed;
- (void)viewerButtonPressed;
- (void)shareButtonPressed;
- (void)commentsButtonPressed;
- (void)wechatButtonPressed;
- (void)likeStateChanged:(_Bool)arg1;
- (void)likeButtonPressed;
- (void)backButtonPressed:(id)arg1;
- (_Bool)isShowingMoreVideoButton;
- (void)animatedHideMoreVideoButton;
- (void)hideMoreVideoButton;
- (void)showMoreVideoButton;
- (void)moreVideoButtonPressed;
- (void)storyAttributedExpandableTextViewDidExpand:(_Bool)arg1;
- (void)videoOverlayControlsPlugin:(id)arg1 didUpdateActiveState:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutRight:(double)arg1;
- (void)layoutBottom:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

