//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMAdAnimationViewDelegate-Protocol.h"
#import "XMShakeLottoryResultDelegate-Protocol.h"
#import "XMShakeLottoryTipViewDelegate-Protocol.h"

@class NSString, NSTimer, XMADAudioItem, XMShakeRewardItem;

@interface XMShakeLottoryManager : NSObject <XMShakeLottoryTipViewDelegate, XMShakeLottoryResultDelegate, XMAdAnimationViewDelegate>
{
    _Bool _canShakeLottory;
    _Bool _needSyncMyLottory;
    XMADAudioItem *_audioAdItem;
    XMShakeRewardItem *_recentLottoryItem;
    NSTimer *_shakeLottoryTimer;
    long long _shakeLottoryTimeLeft;
    CDUnknownBlockType _countDown;
    id _shakeOwner;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(nonatomic) __weak id shakeOwner; // @synthesize shakeOwner=_shakeOwner;
@property(copy, nonatomic) CDUnknownBlockType countDown; // @synthesize countDown=_countDown;
@property(nonatomic) long long shakeLottoryTimeLeft; // @synthesize shakeLottoryTimeLeft=_shakeLottoryTimeLeft;
@property(retain, nonatomic) NSTimer *shakeLottoryTimer; // @synthesize shakeLottoryTimer=_shakeLottoryTimer;
@property(retain, nonatomic) XMShakeRewardItem *recentLottoryItem; // @synthesize recentLottoryItem=_recentLottoryItem;
@property(retain, nonatomic) XMADAudioItem *audioAdItem; // @synthesize audioAdItem=_audioAdItem;
@property(nonatomic) _Bool needSyncMyLottory; // @synthesize needSyncMyLottory=_needSyncMyLottory;
@property(readonly, nonatomic) _Bool canShakeLottory; // @synthesize canShakeLottory=_canShakeLottory;
- (void).cxx_destruct;
- (void)showLoginView;
- (void)requestShakeAdRewardFailed:(id)arg1;
- (void)requestShakeAdRewardFinished:(id)arg1;
- (void)requestShakeAdReward;
- (void)cleanRecentLottoryItem;
- (void)showMyLottoryWhenLogin;
- (void)syncMyLottoryWhenLogin;
- (void)onShakeTimerExpired;
- (void)checkToShowLottory;
- (_Bool)currentAdCanShake;
- (void)handleShakeLottoryForAd;
- (void)disconnectedToOwner:(id)arg1;
- (void)connectedToOwner:(id)arg1 andAdAudioItem:(id)arg2 withCountDown:(CDUnknownBlockType)arg3;
- (long long)getTimeRemain;
- (double)getCurrentCountDownProgress;
- (void)stopShakeLottoryTimer;
- (void)startShakeLottoryTimer:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

