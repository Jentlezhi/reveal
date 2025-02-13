//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

#import "WBPageCardBubbleViewDelegate-Protocol.h"
#import "WBPageCardViewProtocol-Protocol.h"
#import "WBTimeLineTrendScrollViewDelegate-Protocol.h"

@class NSHashTable, NSString, UIView, WBPageSideSlipCard, WBTimelineTrendScrollView;

@interface WBPageCardSideSlipView : WBPageCardViewBase <WBTimeLineTrendScrollViewDelegate, WBPageCardBubbleViewDelegate, WBPageCardViewProtocol>
{
    WBTimelineTrendScrollView *_scrollView;
    WBPageSideSlipCard *_sideSlipCard;
    UIView *_bootomLineView;
    NSHashTable *_visibleViews;
}

+ (struct UIEdgeInsets)edgeInsetsViewOutside:(id)arg1;
+ (struct UIEdgeInsets)edgeInsetsViewOutside;
+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) NSHashTable *visibleViews; // @synthesize visibleViews=_visibleViews;
@property(retain, nonatomic) UIView *bootomLineView; // @synthesize bootomLineView=_bootomLineView;
@property(retain, nonatomic) WBPageSideSlipCard *sideSlipCard; // @synthesize sideSlipCard=_sideSlipCard;
@property(retain, nonatomic) WBTimelineTrendScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)contactEngineDidFollowContactNotification:(id)arg1;
- (void)scrollView:(id)arg1 removeSubView:(id)arg2;
- (void)bubbleView:(id)arg1 mainView:(id)arg2 hasClick:(_Bool)arg3;
- (void)removeRecommondView;
- (void)bubbleView:(id)arg1 mainView:(id)arg2 extraAction:(int)arg3 actionLog:(id)arg4;
- (_Bool)handleActionWithView:(id)arg1 actionType:(int)arg2 pageCard:(id)arg3 actionPara:(id)arg4 withButton:(id)arg5;
- (id)viewWrappers;
- (void)layoutSubviews;
- (long long)numberOfItemToLoadWhenFirstShowInScrollView:(id)arg1;
- (void)configureItemView:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)willPrepareItemView:(id)arg1 forReuseInScrollView:(id)arg2;
- (struct CGSize)scrollView:(id)arg1 sizeOfItemAtIndex:(unsigned long long)arg2;
- (id)scrollView:(id)arg1 classPairOfItemViewAndContentAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInScrollView:(id)arg1;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (void)setPageCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

