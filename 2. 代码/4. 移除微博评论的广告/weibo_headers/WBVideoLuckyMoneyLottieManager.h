//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WBVideoLuckyMoneyLottieManager : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableDictionary *_map;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)compositionWithNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)compositionWithNamed:(id)arg1;
- (void)setup;
- (id)init;
- (void)dealloc;

@end

