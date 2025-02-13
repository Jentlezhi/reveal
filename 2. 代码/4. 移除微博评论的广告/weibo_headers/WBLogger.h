//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WBLogDeviceGroup, WBLogLevel, WBLogRule, WBLogRuleGroup;
@protocol OS_dispatch_queue;

@interface WBLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_safe_queue;
    WBLogDeviceGroup *_deviceGroup;
    WBLogRuleGroup *_ruleGroup;
    NSString *_identifier;
    WBLogLevel *_outputLevel;
}

+ (id)defaultLogger;
+ (void)setDefaultLogger:(id)arg1;
+ (id)loggerWithIdentifier:(id)arg1;
@property WBLogLevel *outputLevel; // @synthesize outputLevel=_outputLevel;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_logMessage:(id)arg1 date:(id)arg2 withLevel:(id)arg3 type:(id)arg4 uid:(id)arg5 extraParameters:(id)arg6;
- (void)removeDeviceWithIdentifier:(id)arg1;
- (void)removeDevice:(id)arg1;
- (id)deviceWithIdentifier:(id)arg1;
- (void)addDevice:(id)arg1;
@property(retain) WBLogRule *defaultRule;
- (id)ruleForLevel:(id)arg1;
- (void)registRule:(id)arg1 forLevel:(id)arg2;
- (void)recordMessageDict:(id)arg1 withLevel:(id)arg2 type:(id)arg3 uid:(id)arg4;
- (void)recordMessage:(id)arg1 withLevel:(id)arg2 type:(id)arg3 extraParameters:(id)arg4;
- (void)logMessage:(id)arg1 withLevel:(id)arg2 type:(id)arg3 extraParameters:(id)arg4;
- (void)logMessageDict:(id)arg1 withLevel:(id)arg2 type:(id)arg3 uid:(id)arg4;
- (id)initWithIdentifier:(id)arg1;

@end

