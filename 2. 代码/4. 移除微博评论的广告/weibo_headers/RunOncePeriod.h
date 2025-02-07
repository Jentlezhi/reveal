//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

@interface RunOncePeriod : NSObject
{
    NSLock *lock_day_;
    NSLock *lock_hour_;
    NSLock *lock_life_cycle_;
}

+ (id)sharedSinglton;
- (void).cxx_destruct;
- (void)runOncePerAppLifeCycleKey:(id)arg1 asyncBlock:(CDUnknownBlockType)arg2;
- (void)runOncePerAppLifeCycleKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)runOncePerHourKey:(id)arg1 asyncBlock:(CDUnknownBlockType)arg2;
- (void)runOncePerHourKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)runOncePerDayKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end

