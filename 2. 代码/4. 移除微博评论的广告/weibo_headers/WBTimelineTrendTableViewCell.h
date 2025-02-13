//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "WBAccessibilityContentProvider-Protocol.h"
#import "WBMMAAutoMonitorDataProvider-Protocol.h"
#import "WBPageCardViewProtocol-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIView, WBTimelineTrendItem, WBTimelineTrendTitleView, WBTrendItemViewModel;
@protocol WBTimelineTrendTableViewCellDelegate;

@interface WBTimelineTrendTableViewCell : WBTableViewCell <WBMMAAutoMonitorDataProvider, UIScrollViewDelegate, WBPageCardViewProtocol, WBAccessibilityContentProvider>
{
    WBTimelineTrendItem *prepareTimelineItem;
    WBTimelineTrendItem *timelineItem;
    id <WBTimelineTrendTableViewCellDelegate> delegate;
    UIView *mainContentView;
    UIImageView *titleBgImageView;
    UIButton *contentBgImageButton;
    UIButton *extraActionButton;
    UILabel *titleLabel;
    struct CGRect extraActionButtonFrame;
    WBTimelineTrendTitleView *titleView;
    _Bool hideAllPadding;
    WBTrendItemViewModel *_prepareViewModel;
    WBTrendItemViewModel *_viewModel;
}

+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2;
@property(retain, nonatomic) WBTrendItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WBTrendItemViewModel *prepareViewModel; // @synthesize prepareViewModel=_prepareViewModel;
@property(retain, nonatomic) UIButton *extraActionButton; // @synthesize extraActionButton;
@property(retain, nonatomic) WBTimelineTrendItem *timelineItem; // @synthesize timelineItem;
@property(nonatomic) __weak id <WBTimelineTrendTableViewCellDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)changeCard:(id)arg1;
- (void)insertTheNewPageCard:(id)arg1 ByIndex:(int)arg2;
- (void)refreshAllCardViewForIndex:(int)arg1;
- (void)cardDidChange:(id)arg1;
- (_Bool)wb_accessibilityPerformMagicTapWithAccessibilityElement:(id)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)accessibilityIsExtraActionButtonEnabled;
- (_Bool)canProvideAccessibilityContents;
- (void)currentSkinDidChangeNotification:(id)arg1;
- (void)resetColorAndImage;
- (_Bool)disableTitleBackgroundImage;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleUserSettingsUpdatedNotification:(id)arg1;
- (void)resetTextFont;
- (_Bool)didPressResponder:(id)arg1 ofType:(unsigned long long)arg2 andCommonID:(id)arg3 inView:(id)arg4 userInfo:(id)arg5 withCard:(id)arg6;
- (_Bool)handleActionWithView:(id)arg1 actionType:(int)arg2 pageCard:(id)arg3 actionPara:(id)arg4 withButton:(id)arg5;
- (void)didPressExtraActionButton:(id)arg1;
- (id)currentPageCard;
- (void)doSetTimelineItem:(id)arg1;
- (void)doSetViewModel:(id)arg1;
- (_Bool)hideTopPadding;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)mma_adMonitorModel;
- (id)mma_displayAdView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

