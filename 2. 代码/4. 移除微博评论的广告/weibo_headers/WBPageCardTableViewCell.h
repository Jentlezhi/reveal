//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

#import "WBMMAAutoMonitorDataProvider-Protocol.h"
#import "WBPageCardViewProtocol-Protocol.h"

@class NSString, UIImageView, WBPageCardBubbleView;
@protocol WBPageCardTableViewCellProtocol;

@interface WBPageCardTableViewCell : WBTableViewCell <WBMMAAutoMonitorDataProvider, WBPageCardViewProtocol>
{
    WBPageCardBubbleView *bubbleView;
    id <WBPageCardTableViewCellProtocol> delegate;
    UIImageView *separatorLineImageView;
    _Bool allowSeparatorLine;
    _Bool _defaultAnimationEnable;
    int _separatorLineStyle;
    float _willSetBubbleViewWidth;
    id <WBPageCardTableViewCellProtocol> _delegate;
}

+ (struct UIEdgeInsets)_cellEdgeInsetsForBubbleType:(unsigned long long)arg1 withPageCard:(id)arg2 isListPage:(_Bool)arg3;
+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2 bubbleType:(id)arg3 listPage:(_Bool)arg4;
+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2 bubbleType:(id)arg3 constraintWidth:(double)arg4 listPage:(_Bool)arg5;
@property(nonatomic) _Bool defaultAnimationEnable; // @synthesize defaultAnimationEnable=_defaultAnimationEnable;
@property(nonatomic) float willSetBubbleViewWidth; // @synthesize willSetBubbleViewWidth=_willSetBubbleViewWidth;
@property(nonatomic) int separatorLineStyle; // @synthesize separatorLineStyle=_separatorLineStyle;
@property(nonatomic) __weak id <WBPageCardTableViewCellProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didPressPhotoOfStatusWithStatus:(id)arg1 inView:(id)arg2;
- (void)didPressStoryCardWithPageInfo:(id)arg1;
- (void)didPressLargeCardWithPageInfo:(id)arg1;
- (void)didPressVideoCardWithPageInfo:(id)arg1;
- (void)willJumpToDetailStatusView;
- (_Bool)didPressResponder:(id)arg1 ofType:(unsigned long long)arg2 andCommonID:(id)arg3 inView:(id)arg4 userInfo:(id)arg5 withCard:(id)arg6;
- (_Bool)handleActionWithView:(id)arg1 actionType:(int)arg2 pageCard:(id)arg3 actionPara:(id)arg4 withButton:(id)arg5;
- (void)_setReused:(_Bool)arg1;
- (id)bubbleView;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBubbleType:(id)arg1;
- (struct CGRect)bubbleViewRectWithOriRect:(struct CGRect)arg1 pageCard:(id)arg2;
- (void)layoutSubviews;
- (void)setListPageByNumber:(id)arg1;
- (void)replaceTheOldBubbleViewUseTheNewCard:(id)arg1 currentIndexPath:(id)arg2;
- (void)resetPageCard:(id)arg1;
- (void)relayoutSubViewWithPageCard:(id)arg1;
- (id)cellPageCard;
- (id)imageWithSeparatorLineStyle:(int)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (id)mma_adMonitorModel;
- (id)mma_displayAdView;
- (void)resignBestProviderForMediaAutoPlayManager:(id)arg1;
- (void)becomeBestProviderForMediaAutoPlayManager:(id)arg1;
- (id)mediaAutoPlayContainedSourceViewProviders;
- (id)mediaAutoPlayDataModel;
- (id)mediaAutoPlaySourceViews;
- (unsigned long long)observerOptions;
- (id)viewWrappers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

