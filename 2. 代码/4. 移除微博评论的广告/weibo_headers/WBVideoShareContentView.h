//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, WBContactAvatarView, WBStatus, WBTimelineAttributedTextView, WBTimelineLikeButton, WBVideoShareControl;
@protocol WBVideoShareContentViewDelegate;

@interface WBVideoShareContentView : UIView
{
    _Bool _adVideo;
    _Bool _isInFollowList;
    _Bool _applyingFollowOperation;
    _Bool _isSharePluginShowing;
    _Bool _isAd;
    NSString *_pageCardShareScheme;
    WBStatus *_status;
    id <WBVideoShareContentViewDelegate> _delegate;
    WBTimelineAttributedTextView *_videoTitleLabel;
    WBContactAvatarView *_avatarView;
    UILabel *_screenNameLabel;
    UILabel *_timeLabel;
    UILabel *_cornerLabel;
    UIButton *_followButton;
    UIButton *_commentButton;
    UILabel *_commentInfoLabel;
    WBTimelineLikeButton *_likeButton;
    UIButton *_shareButton;
    UIButton *_moreButton;
    UIButton *_weiboBtn;
    UIButton *_weChatBtn;
    UIButton *_friendCircleBtn;
    UILabel *_infoLabel;
    WBVideoShareControl *_schemeButton;
    struct CGRect _videoRect;
}

+ (double)videoShareContentViewHeight;
@property(retain, nonatomic) WBVideoShareControl *schemeButton; // @synthesize schemeButton=_schemeButton;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIButton *friendCircleBtn; // @synthesize friendCircleBtn=_friendCircleBtn;
@property(retain, nonatomic) UIButton *weChatBtn; // @synthesize weChatBtn=_weChatBtn;
@property(retain, nonatomic) UIButton *weiboBtn; // @synthesize weiboBtn=_weiboBtn;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) WBTimelineLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *commentInfoLabel; // @synthesize commentInfoLabel=_commentInfoLabel;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *cornerLabel; // @synthesize cornerLabel=_cornerLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) WBTimelineAttributedTextView *videoTitleLabel; // @synthesize videoTitleLabel=_videoTitleLabel;
@property(nonatomic) _Bool isAd; // @synthesize isAd=_isAd;
@property(nonatomic) _Bool isSharePluginShowing; // @synthesize isSharePluginShowing=_isSharePluginShowing;
@property(nonatomic) _Bool applyingFollowOperation; // @synthesize applyingFollowOperation=_applyingFollowOperation;
@property(nonatomic) __weak id <WBVideoShareContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isInFollowList; // @synthesize isInFollowList=_isInFollowList;
@property(nonatomic) _Bool adVideo; // @synthesize adVideo=_adVideo;
@property(nonatomic) struct CGRect videoRect; // @synthesize videoRect=_videoRect;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *pageCardShareScheme; // @synthesize pageCardShareScheme=_pageCardShareScheme;
- (void).cxx_destruct;
- (id)currentPageInfo;
- (_Bool)isSharePluginEnabled;
- (_Bool)isShareEnabled;
- (void)schemeButtonAction:(id)arg1;
- (void)shareToFriendCircleAction:(id)arg1;
- (void)shareToWeChatAction:(id)arg1;
- (void)shareToWeiboAction:(id)arg1;
- (void)updateShareActionSheet;
- (void)didFollowUser:(_Bool)arg1;
- (void)presentComposerWithShareScheme:(id)arg1;
- (void)notifyDidUnlikeStatusWithMenuModel:(id)arg1 index:(long long)arg2;
- (void)showUnLikeActionSheet;
- (void)showShareActionSheetWithAnalysisParameters:(id)arg1 andShowMore:(_Bool)arg2;
- (_Bool)clickLocalUserInProfileViewController:(id)arg1;
- (void)avatarPressedAction:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)moreAction:(id)arg1;
- (void)likeAction:(id)arg1;
- (void)commentAction:(id)arg1;
- (void)followAction:(id)arg1;
- (void)updateDisplay;
- (void)resetSubviewsVisibility;
- (void)updateSubviewsVisibilityWithVideoPlaying:(_Bool)arg1;
- (void)updateSubviewsVisibilityOnPluginWithNeedExpendPlugin:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateSubviewsVisibilityOnVideoWithHidden:(_Bool)arg1;
- (void)hiddenTitleAfterDelay;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

