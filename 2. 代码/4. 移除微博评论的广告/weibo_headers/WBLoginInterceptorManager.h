//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WeiboCubeLoginInterceptManager-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WBLoginInterceptorManager : NSObject <WeiboCubeLoginInterceptManager>
{
    _Bool _isLaunchFromRemotePush;
    _Bool _isLaunchFromNormalTap;
    _Bool _hasOpened;
    _Bool _hasOpenedFromNormalTap;
    NSMutableDictionary *_callerDict;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *callerDict; // @synthesize callerDict=_callerDict;
@property(nonatomic) _Bool hasOpenedFromNormalTap; // @synthesize hasOpenedFromNormalTap=_hasOpenedFromNormalTap;
@property(nonatomic) _Bool hasOpened; // @synthesize hasOpened=_hasOpened;
@property(nonatomic) _Bool isLaunchFromNormalTap; // @synthesize isLaunchFromNormalTap=_isLaunchFromNormalTap;
@property(nonatomic) _Bool isLaunchFromRemotePush; // @synthesize isLaunchFromRemotePush=_isLaunchFromRemotePush;
- (void).cxx_destruct;
- (void)openLoginInterceptVC;
- (void)loginInterceptor:(long long)arg1;
- (void)notifyUserAction:(id)arg1 isHotGroup:(_Bool)arg2 caller:(id)arg3 launchType:(unsigned long long)arg4;
- (void)pushSchemeFinish:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

