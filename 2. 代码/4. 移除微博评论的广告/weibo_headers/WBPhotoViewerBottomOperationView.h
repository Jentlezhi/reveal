//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBPhotoViewerBottomOperationCommentSubViewDelegate-Protocol.h"
#import "WBPhotoViewerBottomOperationFunctionSubViewDelegate-Protocol.h"
#import "WBPhotoViewerBottomOperationTagContainerSubViewDelegate-Protocol.h"
#import "WBPhotoViewerBottomOperationWeibuSubViewDelegate-Protocol.h"

@class NSString, UIButton, WBAdPicSuspensionButton, WBPhotoViewerBottomOperationBackgrundView, WBPhotoViewerBottomOperationCommentSubView, WBPhotoViewerBottomOperationContentView, WBPhotoViewerBottomOperationFunctionSubView, WBPhotoViewerBottomOperationShrinkButton, WBPhotoViewerBottomOperationTagContainerSubview, WBPhotoViewerBottomOperationWeibuSubView, WBPhotoViewerPromotionView;
@protocol WBPhotoViewerBottomOperationViewDelegate;

@interface WBPhotoViewerBottomOperationView : UIView <WBPhotoViewerBottomOperationCommentSubViewDelegate, WBPhotoViewerBottomOperationWeibuSubViewDelegate, WBPhotoViewerBottomOperationFunctionSubViewDelegate, WBPhotoViewerBottomOperationTagContainerSubViewDelegate>
{
    UIButton *_recommendGuideBt;
    _Bool _weiboEnable;
    _Bool _hasWeiboContent;
    _Bool _backgroundViewHidden;
    _Bool _addShareButton;
    _Bool _showingUIElement;
    _Bool _hasExtend;
    _Bool _weiboContentIsExpanded;
    _Bool _mentionsLogged;
    id <WBPhotoViewerBottomOperationViewDelegate> _delegate;
    NSString *_currentMid;
    double _backgroundViewHeight;
    double _contentViewHeight;
    WBPhotoViewerBottomOperationContentView *_contentView;
    WBPhotoViewerBottomOperationShrinkButton *_expendButton;
    WBPhotoViewerBottomOperationBackgrundView *_gradientBackgroundView;
    UIView *_transparentBackgroundView;
    WBPhotoViewerBottomOperationCommentSubView *_commentSubView;
    WBPhotoViewerBottomOperationWeibuSubView *_weiboSubView;
    WBPhotoViewerBottomOperationTagContainerSubview *_productSubView;
    WBPhotoViewerBottomOperationFunctionSubView *_funcSubView;
    WBPhotoViewerPromotionView *_promotionSubView;
    WBAdPicSuspensionButton *_adSuspensionButton;
    struct UIEdgeInsets _screenInsets;
}

+ (id)formatNum:(long long)arg1;
@property(nonatomic) _Bool mentionsLogged; // @synthesize mentionsLogged=_mentionsLogged;
@property(nonatomic) _Bool weiboContentIsExpanded; // @synthesize weiboContentIsExpanded=_weiboContentIsExpanded;
@property(nonatomic) struct UIEdgeInsets screenInsets; // @synthesize screenInsets=_screenInsets;
@property(retain, nonatomic) WBAdPicSuspensionButton *adSuspensionButton; // @synthesize adSuspensionButton=_adSuspensionButton;
@property(retain, nonatomic) WBPhotoViewerPromotionView *promotionSubView; // @synthesize promotionSubView=_promotionSubView;
@property(retain, nonatomic) WBPhotoViewerBottomOperationFunctionSubView *funcSubView; // @synthesize funcSubView=_funcSubView;
@property(retain, nonatomic) WBPhotoViewerBottomOperationTagContainerSubview *productSubView; // @synthesize productSubView=_productSubView;
@property(retain, nonatomic) WBPhotoViewerBottomOperationWeibuSubView *weiboSubView; // @synthesize weiboSubView=_weiboSubView;
@property(retain, nonatomic) WBPhotoViewerBottomOperationCommentSubView *commentSubView; // @synthesize commentSubView=_commentSubView;
@property(retain, nonatomic) UIView *transparentBackgroundView; // @synthesize transparentBackgroundView=_transparentBackgroundView;
@property(retain, nonatomic) WBPhotoViewerBottomOperationBackgrundView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
@property(retain, nonatomic) WBPhotoViewerBottomOperationShrinkButton *expendButton; // @synthesize expendButton=_expendButton;
@property(retain, nonatomic) WBPhotoViewerBottomOperationContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool hasExtend; // @synthesize hasExtend=_hasExtend;
@property(nonatomic) _Bool showingUIElement; // @synthesize showingUIElement=_showingUIElement;
@property(nonatomic) _Bool addShareButton; // @synthesize addShareButton=_addShareButton;
@property(nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(nonatomic) double backgroundViewHeight; // @synthesize backgroundViewHeight=_backgroundViewHeight;
@property(retain, nonatomic) NSString *currentMid; // @synthesize currentMid=_currentMid;
@property(nonatomic) _Bool backgroundViewHidden; // @synthesize backgroundViewHidden=_backgroundViewHidden;
@property(nonatomic) _Bool hasWeiboContent; // @synthesize hasWeiboContent=_hasWeiboContent;
@property(nonatomic) _Bool weiboEnable; // @synthesize weiboEnable=_weiboEnable;
@property(nonatomic) __weak id <WBPhotoViewerBottomOperationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateAdSuspensionButtonFrame;
- (void)updateAdSuspensionButtonWithData:(id)arg1;
- (void)didTapCommentLike:(id)arg1;
- (void)didTapCommentShare:(id)arg1;
- (void)didTapCommentRetweet:(id)arg1;
- (void)didTapCommentList:(id)arg1;
- (void)didTapWeiboView;
- (void)didTapWeiboContent;
- (void)contentLabelExpanded:(_Bool)arg1;
- (void)didTapProductViewWithSchema:(id)arg1;
- (void)didTapFunc:(id)arg1;
- (void)recommendGuideButtonAction;
- (void)removeRecommendGuideButton;
- (void)showRecommendGuideButton:(id)arg1;
- (void)resetExpendInfo;
- (void)contractWeiboContentLabel;
- (_Bool)isWeiboContentLabelExpanded;
- (void)expandWeiboContentLabel;
- (double)offsetWithLivephotoCenterTip;
- (void)layoutVerticalSpacing;
- (void)showRecommendArrow:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updateScreenInsetEdges:(struct UIEdgeInsets)arg1;
- (void)updateContentViewFrame;
- (void)setIsLike:(_Bool)arg1 animate:(_Bool)arg2;
- (void)setIsLike:(_Bool)arg1;
- (_Bool)checkPromotionViewShow;
- (void)setPromotionData:(id)arg1;
- (void)setProductContent:(id)arg1;
- (_Bool)hasCommentTool;
- (void)showCommentToolCommentButton:(_Bool)arg1;
- (void)setHasExtendButton:(_Bool)arg1;
- (_Bool)hasExtendButton;
- (void)showCommentTool:(_Bool)arg1;
- (void)dismissPromotionView;
- (void)showPromotionView:(_Bool)arg1;
- (void)showProductView:(_Bool)arg1;
- (void)logMentions;
- (void)setWeiboContent:(id)arg1;
- (void)showWeiboView:(_Bool)arg1;
- (void)setFuncTitle:(id)arg1;
- (void)showFuncView:(_Bool)arg1;
- (void)setLikeCount:(long long)arg1;
- (void)setRetweetCount:(long long)arg1;
- (long long)getCommentCount;
- (void)setCommentCount:(long long)arg1;
- (void)layoutRecommendArrowTipIfNeeded;
- (void)hideExpendTipIfNeeded;
- (void)showExpendTipIfNeeded;
- (void)setExpendButtonEnable:(_Bool)arg1;
- (void)hideUIElementWithAnimation:(_Bool)arg1;
- (void)showExpendButton:(_Bool)arg1 animation:(_Bool)arg2;
- (void)showExpendButton:(_Bool)arg1;
- (void)showUIElementWithAnimation:(_Bool)arg1 expendAnimation:(_Bool)arg2;
- (void)showUIElementWithAnimation:(_Bool)arg1;
- (void)setExpendButtonState:(_Bool)arg1;
- (void)dismissRecommendArrowTipIfNeeded;
- (void)expendButtonTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 needShareButton:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)getMid;
- (void)setMid:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

