//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSTimer, UIPanGestureRecognizer;
@protocol WBPageCardGradientAnimateItemViewDelegate;

@interface WBPageCardGradientAnimateItemView : UIView <UIGestureRecognizerDelegate>
{
    long long currentIndex;
    long long direction;
    _Bool isGradientAnimating;
    _Bool isPanGestureActionStart;
    id <WBPageCardGradientAnimateItemViewDelegate> _delegate;
    NSMutableArray *_cardviewsArray;
    NSArray *_animateItems;
    NSTimer *_timer;
    UIPanGestureRecognizer *_panGesture;
}

@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSArray *animateItems; // @synthesize animateItems=_animateItems;
@property(retain, nonatomic) NSMutableArray *cardviewsArray; // @synthesize cardviewsArray=_cardviewsArray;
@property(nonatomic) __weak id <WBPageCardGradientAnimateItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dealloc;
- (_Bool)enableAniamtion;
- (_Bool)isEqualDataSource1:(id)arg1 DataSource2:(id)arg2;
- (long long)determineCameraDirectionIfNeeded:(struct CGPoint)arg1;
- (void)logExposurePageCard:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)doAnimationWithCurrentBubble:(id)arg1 nextBubble:(id)arg2 direct:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)getIndexWithDirection:(long long)arg1;
- (void)gestureAnimationWithDirection:(long long)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)timeSelector:(id)arg1;
- (void)settimer;
- (void)pauseTimer;
- (void)setDataSourceAnimateItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

