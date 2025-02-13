//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext;
@protocol OS_dispatch_queue;

@interface WBGPUImageFilterContext : NSObject
{
    _Bool _isRenderQueueSuspended;
    EAGLContext *_context;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(nonatomic) _Bool isRenderQueueSuspended; // @synthesize isRenderQueueSuspended=_isRenderQueueSuspended;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)resumeRenderQueueIfNeeded;
- (void)suspendRenderQueueIfNeeded;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)asynchronouslyOnWorkQueue:(CDUnknownBlockType)arg1;
- (void)synchronouslyOnWorkQueue:(CDUnknownBlockType)arg1;
- (void)processWithGLContextFlush:(CDUnknownBlockType)arg1;
- (void)processWithGLContext:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

