//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ALiMsgBus : NSObject
{
    NSObject<OS_dispatch_queue> *_proccessQueue;
    struct _opaque_pthread_rwlock_t _propertyRWLock;
    NSMutableDictionary *_eventPool;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)fireEventWithItem:(id)arg1 item:(id)arg2 data:(id)arg3 data:(id)arg4 data:(id)arg5 count:(unsigned long long)arg6;
- (_Bool)inerFireEventNotify:(id)arg1 data:(id)arg2 data:(id)arg3 data:(id)arg4 count:(unsigned long long)arg5;
- (_Bool)fireEventNotify:(id)arg1 data1:(id)arg2 data2:(id)arg3 data3:(id)arg4;
- (_Bool)fireEventNotify:(id)arg1 data1:(id)arg2 data2:(id)arg3;
- (_Bool)fireEventNotify:(id)arg1 data:(id)arg2;
- (void)unregisterEventNotifyByTarget:(id)arg1 target:(id)arg2;
- (void)addNotifyToList:(id)arg1 target:(id)arg2 action:(SEL)arg3 dataType:(Class)arg4 dataType:(Class)arg5 dataType:(Class)arg6 mainThread:(_Bool)arg7 type:(long long)arg8;
- (void)registerNotify:(id)arg1 target:(id)arg2 action:(SEL)arg3 dataType:(Class)arg4 dataType:(Class)arg5 dataType:(Class)arg6 mainThread:(_Bool)arg7 type:(long long)arg8;
- (void)registerNotify:(id)arg1 target:(id)arg2 action:(SEL)arg3 dataType:(Class)arg4 dataType:(Class)arg5 mainThread:(_Bool)arg6 type:(long long)arg7;
- (void)registerNotify:(id)arg1 target:(id)arg2 action:(SEL)arg3 dataType:(Class)arg4 mainThread:(_Bool)arg5 type:(long long)arg6;
- (void)dealloc;
- (id)init;

@end

