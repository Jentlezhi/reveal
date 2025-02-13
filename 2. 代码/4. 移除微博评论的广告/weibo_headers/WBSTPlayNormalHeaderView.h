//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSTPlayHeaderBaseView.h"

#import "WBStoryFullScreenHeaderContainerDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, WBContentImageView, WBHelperView, WBSTSameEffectsContol, WBStoryAutoScrollLabel, WBStoryFullScreenDarkGradientView, WBStoryFullScreenProgressView, WBStoryItem, WBStoryItemSegmentShareSourceButton, WBStoryLabel, WBStoryMusicDiversionControl, WBStoryUserView, WBStyleButton;

@interface WBSTPlayNormalHeaderView : WBSTPlayHeaderBaseView <WBStoryFullScreenHeaderContainerDelegate>
{
    _Bool _shouldShowCameraButton;
    _Bool _showFollowTipsIfNeed;
    UIButton *_interactiveButton;
    UIImageView *_followTips;
    UIButton *_closeButton;
    WBStyleButton *_followSuccessButton;
    WBStyleButton *_followButton;
    WBStoryUserView *_userView;
    WBStoryLabel *_screenNameLabel;
    WBStoryLabel *_timeLabel;
    UIButton *_moreButton;
    WBStoryFullScreenProgressView *_progressView;
    WBStoryLabel *_shareSoureLabel;
    WBContentImageView *_shareSoureIcon;
    WBStoryItemSegmentShareSourceButton *_shareSoureButton;
    WBHelperView *_inProfileTip;
    WBStoryFullScreenDarkGradientView *_gradientView;
    WBSTSameEffectsContol *_sameEffects;
    WBStoryMusicDiversionControl *_musicDiversion;
    WBStoryAutoScrollLabel *_musicSrollLabel;
    unsigned long long _visibility;
    long long _providerType;
    NSString *_featureCode;
}

@property(copy, nonatomic) NSString *featureCode; // @synthesize featureCode=_featureCode;
@property(nonatomic) long long providerType; // @synthesize providerType=_providerType;
@property(nonatomic) unsigned long long visibility; // @synthesize visibility=_visibility;
@property(retain, nonatomic) WBStoryAutoScrollLabel *musicSrollLabel; // @synthesize musicSrollLabel=_musicSrollLabel;
@property(retain, nonatomic) WBStoryMusicDiversionControl *musicDiversion; // @synthesize musicDiversion=_musicDiversion;
@property(retain, nonatomic) WBSTSameEffectsContol *sameEffects; // @synthesize sameEffects=_sameEffects;
@property(nonatomic) WBStoryFullScreenDarkGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) WBHelperView *inProfileTip; // @synthesize inProfileTip=_inProfileTip;
@property(retain, nonatomic) WBStoryItemSegmentShareSourceButton *shareSoureButton; // @synthesize shareSoureButton=_shareSoureButton;
@property(retain, nonatomic) WBContentImageView *shareSoureIcon; // @synthesize shareSoureIcon=_shareSoureIcon;
@property(retain, nonatomic) WBStoryLabel *shareSoureLabel; // @synthesize shareSoureLabel=_shareSoureLabel;
@property(retain, nonatomic) WBStoryFullScreenProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) WBStoryLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) WBStoryLabel *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(retain, nonatomic) WBStoryUserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) WBStyleButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) WBStyleButton *followSuccessButton; // @synthesize followSuccessButton=_followSuccessButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *followTips; // @synthesize followTips=_followTips;
@property(retain, nonatomic) UIButton *interactiveButton; // @synthesize interactiveButton=_interactiveButton;
- (void).cxx_destruct;
- (void)beginScrollNameIfNeeded;
- (void)beginMusicAnimationIfNeeded;
- (_Bool)shouldShowFollowButton;
- (_Bool)showTimeLabel;
- (_Bool)showSourceButton;
- (_Bool)showSourceLabel;
- (id)adText;
- (_Bool)canShowAdText;
- (_Bool)shouldShowUserView;
- (_Bool)showProgressView;
- (_Bool)showMusicSrollLabel;
- (_Bool)showMusicDiversion;
- (_Bool)showSameEffect;
- (void)hideStoryAvatarGuide;
- (void)showInProfileTip;
@property(nonatomic) _Bool showFollowTipsIfNeed; // @synthesize showFollowTipsIfNeed=_showFollowTipsIfNeed;
@property(nonatomic) _Bool shouldShowCameraButton; // @synthesize shouldShowCameraButton=_shouldShowCameraButton;
- (id)actionButtons;
- (void)diversionContolPressed:(id)arg1;
- (void)shareSourceButtonPressed:(id)arg1;
- (void)moreButtonPressed:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)followButtonPressed:(id)arg1;
- (void)nameLabelDidPressed;
- (void)userViewDidPressed:(id)arg1;
- (double)maxHeight;
- (void)layoutSubviews;
- (void)updateScreenName:(id)arg1 timeStr:(id)arg2;
- (void)updateItem:(id)arg1 segments:(id)arg2 segmentIndex:(unsigned long long)arg3;
@property(readonly, nonatomic) WBStoryUserView *profileView;
- (void)doFollowTipsHideAnimation;
- (void)doFollowSucessAnimation;
- (_Bool)isFollowTipsShowing;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WBStoryItem *item;
@property(readonly) Class superclass;

@end

