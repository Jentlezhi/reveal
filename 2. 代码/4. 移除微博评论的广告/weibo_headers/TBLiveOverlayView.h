//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveBaseOverlayView.h"

#import "TBLiveOverlayProtocol-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class LiveRoomCommentTextFieldContainer, LiveRoomHeadBannerView, NSString, TBLiveActionView, TBLiveAnchorResponseView, TBLiveAnchorTipView, TBLiveBackLivingButton, TBLiveBrandADView, TBLiveCommentInputView, TBLiveGoodsPromptView, TBLiveGoodsShowCaseView, TBLiveInteractiveView, TBLiveItemIntroduceTipView, TBLiveLHSTimestampView, TBLiveLikeView, TBLiveNormalQuitView, TBLiveOnlinePlayerView, TBLivePostManView, TBLiveRoomContext, TBLiveRoomNumView, TBLiveUserLevelPointsView, TBLiveWeexBaseView, UIButton, UIImageView, UIView;

@interface TBLiveOverlayView : TBLiveBaseOverlayView <UITextFieldDelegate, TBLiveOverlayProtocol>
{
    _Bool _isLandscape;
    TBLiveGoodsPromptView *_goodsPromptView;
    LiveRoomHeadBannerView *_headBannerView;
    UIView *_accountView;
    TBLiveUserLevelPointsView *_userLevelPointsView;
    TBLiveOnlinePlayerView *_onlineUserView;
    TBLiveAnchorResponseView *_anchorResponseView;
    TBLiveLikeView *_likeView;
    UIButton *_moreBtn;
    UIButton *_shareBtn;
    TBLivePostManView *_postManView;
    TBLiveBrandADView *_brandADView;
    TBLiveCommentInputView *_comnentInputView;
    LiveRoomCommentTextFieldContainer *_commentContainer;
    UIImageView *_topBlurImageView;
    TBLiveNormalQuitView *_quitView;
    TBLiveInteractiveView *_interactiveView;
    TBLiveGoodsShowCaseView *_goodsShowCaseView;
    TBLiveWeexBaseView *_weexListView;
    UIView *_commentAreaView;
    TBLiveRoomNumView *_roomNumber;
    UIImageView *_tbtvLogoView;
    UIButton *_miniFollowButton;
    UIImageView *_followHintView;
    TBLiveLHSTimestampView *_returnLivingView;
    TBLiveBackLivingButton *_backLivingButton;
    TBLiveActionView *_actionView;
    TBLiveRoomContext *_roomContext;
    TBLiveAnchorTipView *_srGuideView;
    TBLiveAnchorTipView *_backLivingGuideView;
    TBLiveItemIntroduceTipView *_itemTipView;
}

+ (id)makeAccountAreaModel:(id)arg1 roomType:(unsigned long long)arg2;
@property(retain, nonatomic) TBLiveItemIntroduceTipView *itemTipView; // @synthesize itemTipView=_itemTipView;
@property(retain, nonatomic) TBLiveAnchorTipView *backLivingGuideView; // @synthesize backLivingGuideView=_backLivingGuideView;
@property(retain, nonatomic) TBLiveAnchorTipView *srGuideView; // @synthesize srGuideView=_srGuideView;
@property(retain, nonatomic) TBLiveRoomContext *roomContext; // @synthesize roomContext=_roomContext;
@property(retain, nonatomic) TBLiveActionView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) TBLiveBackLivingButton *backLivingButton; // @synthesize backLivingButton=_backLivingButton;
@property(retain, nonatomic) TBLiveLHSTimestampView *returnLivingView; // @synthesize returnLivingView=_returnLivingView;
@property(retain, nonatomic) UIImageView *followHintView; // @synthesize followHintView=_followHintView;
@property(retain, nonatomic) UIButton *miniFollowButton; // @synthesize miniFollowButton=_miniFollowButton;
@property(retain, nonatomic) UIImageView *tbtvLogoView; // @synthesize tbtvLogoView=_tbtvLogoView;
@property(retain, nonatomic) TBLiveRoomNumView *roomNumber; // @synthesize roomNumber=_roomNumber;
@property(retain, nonatomic) UIView *commentAreaView; // @synthesize commentAreaView=_commentAreaView;
@property(retain, nonatomic) TBLiveWeexBaseView *weexListView; // @synthesize weexListView=_weexListView;
@property(retain, nonatomic) TBLiveGoodsShowCaseView *goodsShowCaseView; // @synthesize goodsShowCaseView=_goodsShowCaseView;
@property(retain, nonatomic) TBLiveInteractiveView *interactiveView; // @synthesize interactiveView=_interactiveView;
@property(retain, nonatomic) TBLiveNormalQuitView *quitView; // @synthesize quitView=_quitView;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) UIImageView *topBlurImageView; // @synthesize topBlurImageView=_topBlurImageView;
@property(retain, nonatomic) LiveRoomCommentTextFieldContainer *commentContainer; // @synthesize commentContainer=_commentContainer;
@property(retain, nonatomic) TBLiveCommentInputView *comnentInputView; // @synthesize comnentInputView=_comnentInputView;
@property(retain, nonatomic) TBLiveBrandADView *brandADView; // @synthesize brandADView=_brandADView;
@property(retain, nonatomic) TBLivePostManView *postManView; // @synthesize postManView=_postManView;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) TBLiveLikeView *likeView; // @synthesize likeView=_likeView;
@property(retain, nonatomic) TBLiveAnchorResponseView *anchorResponseView; // @synthesize anchorResponseView=_anchorResponseView;
@property(retain, nonatomic) TBLiveOnlinePlayerView *onlineUserView; // @synthesize onlineUserView=_onlineUserView;
@property(retain, nonatomic) TBLiveUserLevelPointsView *userLevelPointsView; // @synthesize userLevelPointsView=_userLevelPointsView;
@property(retain, nonatomic) UIView *accountView; // @synthesize accountView=_accountView;
@property(retain, nonatomic) LiveRoomHeadBannerView *headBannerView; // @synthesize headBannerView=_headBannerView;
@property(retain, nonatomic) TBLiveGoodsPromptView *goodsPromptView; // @synthesize goodsPromptView=_goodsPromptView;
- (void).cxx_destruct;
- (double)rightOffset;
- (double)leftOffset;
- (double)bottomOffset;
- (double)topOffset;
- (void)hideScreenRecorderTipsView;
- (void)showScreenRecorderTipsView;
- (void)hideBackLivingTips;
- (void)showBackLivingTipsIfNeeded;
- (void)hideItemIntroduceTipView;
- (void)showItemIntroduceTipView;
- (void)refreshLandscapeViewLayout;
- (void)removeInteractiveView;
- (struct CGRect)interactiveViewFrame;
- (void)setupComnentInputView;
- (void)setupLikeView;
- (void)updateShareBtnPosition;
- (void)hideBackLivingButton;
- (void)setupReturnLivingView;
- (void)setupGoodsPromptView;
- (void)setupShareButton;
- (void)setupMoreButton;
- (void)addLiveHeadBannerView:(id)arg1;
- (void)addAnchorResposneView;
- (void)addUserLevelPointsView:(id)arg1 level:(id)arg2 item:(id)arg3;
- (void)setupLiveRoomLogo;
- (void)refreshLiveRoomLogo:(id)arg1 type:(unsigned long long)arg2;
- (void)setupOnlinePlayerView;
- (_Bool)showLiveMessInfo;
- (void)showNotice:(id)arg1;
- (void)closeCommentInputBox;
- (void)openCommentInputBoxWithItem:(id)arg1;
- (void)openCommentInputBoxWithText:(id)arg1;
- (void)openCommentInputBox;
- (void)openCommentInputBoxWithTextFromWebView:(id)arg1 superView:(id)arg2;
- (void)openCommentInputBoxFromWebView:(id)arg1;
- (void)addPushMessageListData:(id)arg1 nick:(id)arg2 userId:(id)arg3 params:(id)arg4;
- (void)broadCasterNomalQuitLivingWithQuitView:(_Bool)arg1;
- (void)hiddenOverlayAllElements:(_Bool)arg1;
- (void)handleNetworkNotReachableViewElements;
- (void)dispatchDetailModel;
- (_Bool)isCustomLiveRoomAndLivingStatus;
- (void)refreshWithData:(id)arg1;
- (void)hiddenFollowHintView;
- (void)layoutFollowHintView;
- (void)layoutFollowMiniButton:(id)arg1;
- (void)setupCommentAreaSubView;
- (void)loadCommentAreaView;
- (void)setupUserLevelPointsView;
- (void)setupSubViews:(_Bool)arg1;
- (id)liveDetailViewModel;
- (void)dealloc;
- (void)setupInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

