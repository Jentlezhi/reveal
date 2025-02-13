//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface WVURLInterceptorRuleEngine : NSObject
{
    _Bool _initing;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSArray *_interceptorRule;
}

+ (id)convertURLInterceptorRuleFromArrayToDictionary:(id)arg1;
+ (id)convertURLInterceptorRuleFromDictionaryToArray:(id)arg1;
+ (_Bool)isOpenURLInterceptorFromRuleHandler;
+ (id)readURLInterceptorFromRuleHandler;
+ (id)instance;
@property(copy) NSArray *interceptorRule; // @synthesize interceptorRule=_interceptorRule;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property _Bool initing; // @synthesize initing=_initing;
- (void).cxx_destruct;
- (id)rule;
- (void)initRuleEngineFromRuleHandler;
- (_Bool)isOpenURLInterceptor;
- (void)updateRuleEngine;
- (void)doInitRuleEngine;
- (void)initRuleEngine;

@end

