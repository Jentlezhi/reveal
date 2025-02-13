//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCommonButtonAction.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString, WBContactEngine;

@interface WBCommonFollowButtonContext : WBCommonButtonAction <CAAnimationDelegate>
{
    id responseObj;
    WBContactEngine *engine;
    NSString *uid;
    NSString *typeStr;
}

- (void).cxx_destruct;
- (void)showRecommendUserAlertWithInfo:(id)arg1 withBaseViewController:(id)arg2;
- (void)groupSelectControlClosedWithUserID:(id)arg1;
- (void)actionFinished:(id)arg1 withRecommendInfo:(id)arg2 andBaseViewController:(id)arg3;
- (void)actionFinished:(id)arg1 responseObject:(id)arg2 andBaseViewController:(id)arg3;
- (void)actionFinished:(id)arg1;
- (void)refreshCachesWithError:(id)arg1;
- (void)doAction;
- (id)getResponse;
- (void)startThrowAnimationFrom:(id)arg1 toView:(id)arg2 withContentView:(id)arg3 withStopAnim:(CDUnknownBlockType)arg4;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)throwView:(id)arg1;
- (id)throwToTargetView;
- (void)getThrowTargetViewNotification:(id)arg1;
- (void)dealloc;
- (id)initWithButton:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

