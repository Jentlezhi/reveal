//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, NSString, UITapGestureRecognizer;

@interface XMVCBaseGuideView : UIView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_tapGesture;
    UIView *_ctxContentView;
    UIView *_ctxView;
    CDUnknownBlockType _ctxViewAction;
    CAShapeLayer *_bgcLayer;
}

@property(readonly, nonatomic) UIView *ctxContentView; // @synthesize ctxContentView=_ctxContentView;
- (void).cxx_destruct;
- (void)didHide;
- (void)hideAnimations;
- (void)willHide;
- (void)didShow;
- (void)showAnimations;
- (void)willShow;
- (_Bool)shouldHide;
- (void)onTapEvent;
- (_Bool)shouldTap;
- (void)showInView:(id)arg1;
- (void)setCtxView:(id)arg1 action:(CDUnknownBlockType)arg2;
- (struct CGRect)ctxFrame;
- (id)piercedPathWithCtxFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)cleanCtxContentView;
- (void)tapHandler:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)baseCustomInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

