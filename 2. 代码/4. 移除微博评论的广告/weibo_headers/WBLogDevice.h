//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WBLogLevel;

@interface WBLogDevice : NSObject
{
    NSMutableDictionary *_ruleDict;
    struct _opaque_pthread_rwlock_t _rule_rwlock;
    NSString *_identifier;
    WBLogLevel *_outputLevel;
}

+ (id)deviceWithIdentifier:(id)arg1;
@property WBLogLevel *outputLevel; // @synthesize outputLevel=_outputLevel;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_logStringWithLogger:(id)arg1 info:(id)arg2 andInternalFlag:(_Bool)arg3;
- (id)ruleForLevel:(id)arg1;
- (void)registRule:(id)arg1 forLevel:(id)arg2;
- (_Bool)isEnableForLevel:(id)arg1;
- (void)outputString:(id)arg1 withInfo:(id)arg2;
- (void)processLogger:(id)arg1 withInternalInfo:(id)arg2;
- (void)processLogger:(id)arg1 withInfo:(id)arg2;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

