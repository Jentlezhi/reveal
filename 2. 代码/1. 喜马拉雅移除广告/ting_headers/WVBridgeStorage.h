//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WVBridgeStorage : NSObject
{
    NSMutableDictionary *_viewBridgeInstances;
    NSMutableDictionary *_pageBridgeInstances;
}

+ (unsigned long long)getInstanceScope:(Class)arg1;
+ (id)staticBridgeInstances;
@property(retain, nonatomic) NSMutableDictionary *pageBridgeInstances; // @synthesize pageBridgeInstances=_pageBridgeInstances;
@property(retain, nonatomic) NSMutableDictionary *viewBridgeInstances; // @synthesize viewBridgeInstances=_viewBridgeInstances;
- (void).cxx_destruct;
- (void)removePageInstances;
- (id)getAllInstances;
- (void)releaseInstance:(id)arg1 withInfo:(id)arg2;
- (id)getInstance:(id)arg1;
- (id)init;

@end

