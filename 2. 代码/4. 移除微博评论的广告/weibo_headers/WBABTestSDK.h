//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBABTestSDK : NSObject
{
}

+ (_Bool)isFeatureEnabled:(id)arg1;
+ (void)runFeature:(id)arg1 whenEnabled:(CDUnknownBlockType)arg2 whenDisabled:(CDUnknownBlockType)arg3;
+ (void)runFeature:(id)arg1 whenEnabled:(CDUnknownBlockType)arg2;
+ (void)fetchWBABTestFeaturesWithVersionNumber:(long long)arg1;
+ (void)runFeature:(id)arg1 withBaseline:(CDUnknownBlockType)arg2 withPlanBlock:(CDUnknownBlockType)arg3;
+ (id)getFeaturePlanName:(id)arg1;
+ (void)runFeature:(id)arg1 withPolicy:(long long)arg2 whenEnabled:(CDUnknownBlockType)arg3 whenDisabled:(CDUnknownBlockType)arg4;
+ (void)runFeature:(id)arg1 withPolicy:(long long)arg2 whenEnabled:(CDUnknownBlockType)arg3;
+ (_Bool)isFeatureEnabled:(id)arg1 withPolicy:(long long)arg2;

@end

