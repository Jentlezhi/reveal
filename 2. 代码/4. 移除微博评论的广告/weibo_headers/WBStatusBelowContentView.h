//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStatusSubView.h"

#import "WBMiniCardGroupViewDelegate-Protocol.h"
#import "WBTimelineExtendPageViewDelegate-Protocol.h"
#import "WBTimelineImageContentViewDelegate-Protocol.h"
#import "WBTimelineMapImageViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, WBMiniCardGroupView, WBStatusBelowContentViewModel, WBTimelineExtendPageView, WBTimelineImageContentView, WBTimelineLargeCardView, WBTimelineLargePicturePageInfo, WBTimelineMapImageView, WBTimelineQuotedButton, WBTimelineVideoView;

@interface WBStatusBelowContentView : WBStatusSubView <WBTimelineExtendPageViewDelegate, WBTimelineImageContentViewDelegate, WBMiniCardGroupViewDelegate, WBTimelineMapImageViewDelegate>
{
    _Bool _trackingQuotedItemBorder;
    WBStatusBelowContentViewModel *_belowContentViewModel;
    UIButton *_quotedItemBorderButton;
    WBTimelineImageContentView *_photoImageView;
    WBTimelineExtendPageView *_productsView;
    UIButton *_quotedImageTag;
    WBMiniCardGroupView *_miniCardGroupView;
    WBMiniCardGroupView *_likelistTagGroupView;
    WBTimelineMapImageView *_mapImageView;
    WBTimelineLargePicturePageInfo *_largePicturePageInfo;
    WBTimelineQuotedButton *_quotedCommentButton;
    WBTimelineQuotedButton *_quotedForwardButton;
    WBTimelineQuotedButton *_quotedLikeButton;
    WBTimelineVideoView *_videoView;
    WBTimelineVideoView *_quotedVideoView;
    WBTimelineLargeCardView *_largeCardView;
    UILabel *_videoExtLabel;
    UILabel *_quotedEditFlagLabel;
    UIButton *_attitudeButton;
}

@property(nonatomic) _Bool trackingQuotedItemBorder; // @synthesize trackingQuotedItemBorder=_trackingQuotedItemBorder;
@property(retain, nonatomic) UIButton *attitudeButton; // @synthesize attitudeButton=_attitudeButton;
@property(retain, nonatomic) UILabel *quotedEditFlagLabel; // @synthesize quotedEditFlagLabel=_quotedEditFlagLabel;
@property(retain, nonatomic) UILabel *videoExtLabel; // @synthesize videoExtLabel=_videoExtLabel;
@property(retain, nonatomic) WBTimelineLargeCardView *largeCardView; // @synthesize largeCardView=_largeCardView;
@property(retain, nonatomic) WBTimelineVideoView *quotedVideoView; // @synthesize quotedVideoView=_quotedVideoView;
@property(retain, nonatomic) WBTimelineVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) WBTimelineQuotedButton *quotedLikeButton; // @synthesize quotedLikeButton=_quotedLikeButton;
@property(retain, nonatomic) WBTimelineQuotedButton *quotedForwardButton; // @synthesize quotedForwardButton=_quotedForwardButton;
@property(retain, nonatomic) WBTimelineQuotedButton *quotedCommentButton; // @synthesize quotedCommentButton=_quotedCommentButton;
@property(retain, nonatomic) WBTimelineLargePicturePageInfo *largePicturePageInfo; // @synthesize largePicturePageInfo=_largePicturePageInfo;
@property(retain, nonatomic) WBTimelineMapImageView *mapImageView; // @synthesize mapImageView=_mapImageView;
@property(retain, nonatomic) WBMiniCardGroupView *likelistTagGroupView; // @synthesize likelistTagGroupView=_likelistTagGroupView;
@property(retain, nonatomic) WBMiniCardGroupView *miniCardGroupView; // @synthesize miniCardGroupView=_miniCardGroupView;
@property(retain, nonatomic) UIButton *quotedImageTag; // @synthesize quotedImageTag=_quotedImageTag;
@property(retain, nonatomic) WBTimelineExtendPageView *productsView; // @synthesize productsView=_productsView;
@property(readonly, nonatomic) WBTimelineImageContentView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) UIButton *quotedItemBorderButton; // @synthesize quotedItemBorderButton=_quotedItemBorderButton;
@property(retain, nonatomic) WBStatusBelowContentViewModel *belowContentViewModel; // @synthesize belowContentViewModel=_belowContentViewModel;
- (void).cxx_destruct;
- (void)dealloc;
- (Class)textContentViewClass;
- (id)mediaAutoPlaySourceViews;
- (void)adClickeStatisticsWithActionCode:(id)arg1 actionEvent:(unsigned long long)arg2;
- (_Bool)quotedItemBorderButtonEnabled;
- (_Bool)touchesInsideQuotedItemBorder:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)statusDidChangeNotification:(id)arg1;
- (void)refreshVideoExt;
- (void)didPressedQuotedLikeButton:(id)arg1;
- (void)didPressedQuotedCommentButton:(id)arg1;
- (void)didPressedQuotedForwardButton:(id)arg1;
- (void)refreshRetweetedStatusActionButtons;
- (void)initQuotedActionButton;
- (void)showQuotedImages:(id)arg1;
- (void)showQuotedImageTag;
- (void)quotedItemBorderButtonPressed:(id)arg1;
- (void)didSelectedBackgroundInView:(id)arg1;
- (void)didSelectedProduct:(id)arg1 inView:(id)arg2;
- (void)didClickedCommonButton:(id)arg1 inView:(id)arg2;
- (void)didPressedBubbleWithStatus:(id)arg1;
- (void)refreshMapImage:(_Bool)arg1;
- (void)showMapView;
- (void)didPressedMapView:(id)arg1 withStauts:(id)arg2;
- (void)showMapImageView;
- (void)showVideoView;
- (void)showProductsView:(id)arg1;
- (id)timelineImageContentView:(id)arg1 peekingViewControllerForPicture:(id)arg2 index:(id)arg3;
- (id)timelineImageContentView:(id)arg1 peekingViewControllerForPicture:(id)arg2;
- (void)timelineImageContentView:(id)arg1 pictureSizeDidChange:(id)arg2;
- (void)didTappedOnView:(id)arg1 withPicture:(id)arg2 index:(id)arg3;
- (void)didTappedOnView:(id)arg1 withPicture:(id)arg2;
- (void)timelineImageContentView:(id)arg1 didSelectPicture:(id)arg2 index:(id)arg3;
- (void)timelineImageContentView:(id)arg1 didSelectPicture:(id)arg2;
- (id)imageViews;
- (void)showPhotoImageView:(id)arg1;
- (void)showQuotedItemActionButtons;
- (void)showComponentsAfterTextContntViewFinishDrawingAsynchronously:(_Bool)arg1;
- (id)fixedSchemeURL:(id)arg1;
- (void)miniCardGroupViewDidSelectTag:(id)arg1 fromButton:(id)arg2;
- (void)showPicturesFromView:(id)arg1;
- (void)refreshUIWithNoResizeChanges;
- (void)reloadQuotedActionButtonUI;
- (void)reloadUIElements;
- (void)layoutSubviews;
- (void)didPressVideoCard:(id)arg1;
- (_Bool)checkCanEnterPageInfo:(id)arg1 withScheme:(id)arg2;
- (void)didPressLargeCard:(id)arg1;
- (void)largeCardPressed:(id)arg1;
- (id)pageInfoIdentifier;
- (void)likeStateDidChangeNotification:(id)arg1;
- (void)attitudeButtonDidTouch:(id)arg1;
- (void)layoutButtonImageOnTheRightWithButton:(id)arg1 space:(double)arg2;
- (void)refreshAttitudeButton;
- (void)showAttitudeButtonIfNeed;
- (void)showLargeCardIfNeed;
- (void)setViewModel:(id)arg1 extraInfo:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

