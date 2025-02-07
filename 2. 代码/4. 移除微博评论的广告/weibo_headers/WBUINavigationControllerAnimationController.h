//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UINavigationController, UIViewController;

@interface WBUINavigationControllerAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool isAnimating;
    UINavigationController *_navigationController;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
}

@property(nonatomic) __weak UIViewController *toViewController; // @synthesize toViewController=_toViewController;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (void)removeShadowForView:(id)arg1;
- (void)addShadowForView:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (_Bool)inAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

