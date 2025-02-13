//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStatusSubView.h"

#import "WBTimelineActionButtonsViewDelegate-Protocol.h"

@class NSString, UIView, WBColorImageView, WBRollingUnionAreaTableView, WBStatusFooterViewModel, WBTimelineActionButtonsView;

@interface WBStatusFooterView : WBStatusSubView <WBTimelineActionButtonsViewDelegate>
{
    WBStatusFooterViewModel *_footerViewModel;
    WBTimelineActionButtonsView *_actionButtonsView;
    UIView *_actionButtonBottomLine;
    WBRollingUnionAreaTableView *_rollingUnionAreaTabelView;
    WBColorImageView *_actionButtonTopLine;
}

@property(retain, nonatomic) WBColorImageView *actionButtonTopLine; // @synthesize actionButtonTopLine=_actionButtonTopLine;
@property(retain, nonatomic) WBRollingUnionAreaTableView *rollingUnionAreaTabelView; // @synthesize rollingUnionAreaTabelView=_rollingUnionAreaTabelView;
@property(retain, nonatomic) UIView *actionButtonBottomLine; // @synthesize actionButtonBottomLine=_actionButtonBottomLine;
@property(retain, nonatomic) WBTimelineActionButtonsView *actionButtonsView; // @synthesize actionButtonsView=_actionButtonsView;
@property(retain, nonatomic) WBStatusFooterViewModel *footerViewModel; // @synthesize footerViewModel=_footerViewModel;
- (void).cxx_destruct;
- (void)dealloc;
- (Class)textContentViewClass;
- (void)popCommentLikeToast:(unsigned long long)arg1;
- (_Bool)touchesInsideActionButtonsArea:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)subTextView:(id)arg1 didPressSingleCommentInUnionArea:(id)arg2 params:(id)arg3;
- (id)editCommentTextStyle:(id)arg1;
- (void)commentLikeButtonResponseHandler:(id)arg1;
- (_Bool)actionButtonsView:(id)arg1 didPressResponder:(id)arg2 ofType:(unsigned long long)arg3 andCommonID:(id)arg4 userInfo:(id)arg5;
- (struct CGRect)visableFrameInWindow;
- (void)showRollingUnionArea:(id)arg1;
- (void)showComponentsAfterTextContntViewFinishDrawingAsynchronously:(_Bool)arg1;
- (void)setViewModel:(id)arg1 extraInfo:(id)arg2;
- (void)reloadUIElements;
- (void)setSelectionColor:(_Bool)arg1;
- (id)initWithWidth:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

