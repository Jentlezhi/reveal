//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, NSArray, NSMutableArray, NSString, UIButton, UIImageView, UILabel, WBContentImageView, WBGuideView, WBPageCard, WBUIControl, WBVideoTipView;

@interface WBVideoSearchView : UIView
{
    _Bool isSearchTextFieldSelected;
    _Bool _isVideoTipEnable;
    WBPageCard *_pageCard;
    NSArray *_channelModels;
    long long _curretIndex;
    UIImageView *_searchBackgroudView;
    WBUIControl *_tapControl;
    UIImageView *_searchFieldBackgroudView;
    UIImageView *_searchBarView;
    UILabel *_textLabel;
    WBContentImageView *_rightImageView;
    UIButton *_rightBtn;
    NSMutableArray *_videoRightBtns;
    NSString *_cardScheme;
    UIView *_bottomLine;
    WBGuideView *_historyGuide;
    UIImageView *_myVideoGuide;
    WBVideoTipView *_videoTipView;
    LOTAnimationView *_lottieAnimationView;
}

+ (id)updateHotWordTranceModel:(id)arg1;
+ (_Bool)allowBubble;
+ (struct UIEdgeInsets)edgeInsetsBubbleOutside;
+ (struct UIEdgeInsets)edgeInsetsViewOutside:(id)arg1;
+ (_Bool)abtestShowEnable;
+ (double)heightOfDataObject:(id)arg1;
+ (id)sharedVideoSearchView;
@property(retain, nonatomic) LOTAnimationView *lottieAnimationView; // @synthesize lottieAnimationView=_lottieAnimationView;
@property(nonatomic) _Bool isVideoTipEnable; // @synthesize isVideoTipEnable=_isVideoTipEnable;
@property(retain, nonatomic) WBVideoTipView *videoTipView; // @synthesize videoTipView=_videoTipView;
@property(retain, nonatomic) UIImageView *myVideoGuide; // @synthesize myVideoGuide=_myVideoGuide;
@property(retain, nonatomic) WBGuideView *historyGuide; // @synthesize historyGuide=_historyGuide;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(copy, nonatomic) NSString *cardScheme; // @synthesize cardScheme=_cardScheme;
@property(retain, nonatomic) NSMutableArray *videoRightBtns; // @synthesize videoRightBtns=_videoRightBtns;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) WBContentImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *searchBarView; // @synthesize searchBarView=_searchBarView;
@property(retain, nonatomic) UIImageView *searchFieldBackgroudView; // @synthesize searchFieldBackgroudView=_searchFieldBackgroudView;
@property(retain, nonatomic) WBUIControl *tapControl; // @synthesize tapControl=_tapControl;
@property(retain, nonatomic) UIImageView *searchBackgroudView; // @synthesize searchBackgroudView=_searchBackgroudView;
@property(nonatomic) long long curretIndex; // @synthesize curretIndex=_curretIndex;
@property(retain, nonatomic) NSArray *channelModels; // @synthesize channelModels=_channelModels;
@property(retain, nonatomic) WBPageCard *pageCard; // @synthesize pageCard=_pageCard;
- (void).cxx_destruct;
- (void)playOrPauseAnaimal;
- (void)stateChangeCachingItemNotification:(id)arg1;
- (void)enterbackground;
- (void)enterForeground;
- (void)deleteCachingItemNotification:(id)arg1;
- (void)itemCacheCompleteNotification:(id)arg1;
- (void)viewControllerStateChangeNotification:(id)arg1;
- (_Bool)isVideoTipDispaly;
- (void)hideVideoTipIfNeed;
- (void)displayVideoTipIfNeed;
- (void)dismissVideoTips;
- (void)openVideoManager;
- (id)displayTextWith:(id)arg1 keyword:(id)arg2;
- (_Bool)hasHistoryBtn;
- (void)tapCard;
- (void)rightTapAction:(id)arg1;
- (void)setSearchFieldBackgroundByFieldIsSelected:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reloadUIElements;
- (void)pauseAnimal;
- (void)playAnimal;
- (void)didMoveToWindow;
- (id)getMyVideoButton;
- (void)layoutSubviews;
- (void)configSubViews;
- (void)videoSearchViewPushNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)searchCardStateChanged:(id)arg1;
- (void)hideMyVideoGuidIfNeed;
- (void)hideHistoryGuidIfNeed;
- (void)tapMyVideoGuideView;
- (void)tapGuideView;
- (void)showMyvideoIfNeed;
- (void)showHistoryGuidIfNeed;
- (double)getViewHeight;

@end

