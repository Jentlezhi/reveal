//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import "UINavigationControllerDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, XMATAnimatedTransitioningProxy, XMATPercentDrivenInteractiveTransition;

@interface XMATAnimatedTransitioningDelegateProxy : NSProxy <UINavigationControllerDelegate, UITabBarControllerDelegate, UIViewControllerTransitioningDelegate>
{
    XMATAnimatedTransitioningProxy *_transition;
    XMATPercentDrivenInteractiveTransition *_interaction;
    CDUnknownBlockType _completion;
    id _delegate;
}

+ (void)setupTransition:(id)arg1 delegate:(id)arg2 reset:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)tabBarController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)tabBarController:(id)arg1 animationControllerForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)completion;
- (id)initWithTransition:(id)arg1 interaction:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

