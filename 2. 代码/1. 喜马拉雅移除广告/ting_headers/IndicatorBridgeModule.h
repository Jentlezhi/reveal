//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface IndicatorBridgeModule : NSObject <RCTBridgeModule>
{
    RCTBridge *bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__502;
+ (const struct RCTMethodInfo *)__rct_export__431;
+ (const struct RCTMethodInfo *)__rct_export__350;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge;
- (void).cxx_destruct;
- (void)showError:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (id)rnBrowserViewController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

