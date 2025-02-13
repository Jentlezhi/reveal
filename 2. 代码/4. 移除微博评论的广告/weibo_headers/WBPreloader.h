//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSRecursiveLock, WBPreloadTaskQueue;
@protocol OS_dispatch_queue;

@interface WBPreloader : NSObject
{
    NSDictionary *_inSourceTagMap;
    WBPreloadTaskQueue *_readyQueue;
    WBPreloadTaskQueue *_executingQueue;
    WBPreloadTaskQueue *_blockQueue;
    NSRecursiveLock *_recursiveLock;
    NSObject<OS_dispatch_queue> *_preloadQueue;
    NSObject<OS_dispatch_queue> *_waitQueue;
    NSMutableDictionary *_observerDic;
    NSMutableDictionary *_batchInfoDic;
}

+ (void)registerPreloadIdentifier:(id)arg1 sourceType:(long long)arg2;
+ (void)runRequest;
+ (id)threadForDispatch;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLoader;
+ (void)load;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_handle;
- (void)_wakeup;
- (void)_handleInterFilter:(id)arg1;
- (void)_handleBusinessFilter:(id)arg1;
- (id)generateRandomId;
- (void)_cancelPreloadTask:(id)arg1 wakeup:(_Bool)arg2;
- (void)_addTaskToBlockQueue:(id)arg1;
- (void)_addTaskToReadyQueue:(id)arg1;
- (id)_createTaskWithModel:(id)arg1 resourceType:(long long)arg2 needAsync:(_Bool)arg3;
- (void)savePreloadData:(id)arg1 withVersions:(id)arg2 byObserver:(id)arg3;
- (void)handleResourceTask:(id)arg1 completion:(id)arg2 error:(id)arg3 responseObj:(id)arg4 extraInfo:(id)arg5;
- (void)handleNormalTask:(id)arg1 completion:(id)arg2 error:(id)arg3 responseObj:(id)arg4 extraInfo:(id)arg5;
- (void)removeObserverForResourceType:(long long)arg1;
- (void)addObserver:(id)arg1 forResourceType:(long long)arg2;
- (void)cancelAllPreloadTask;
- (void)cancelPreloadTask:(id)arg1;
- (void)cancelBatchPreloadTask:(id)arg1;
- (id)preloadSourceFrom:(id)arg1 type:(long long)arg2 extraParam:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)preloadSourceFrom:(id)arg1 extraParam:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)preloadSourceFrom:(id)arg1 type:(long long)arg2 extraParam:(id)arg3;
- (id)preloadSourceFrom:(id)arg1 extraParam:(id)arg2;
- (id)preloadSourceFrom:(id)arg1 type:(long long)arg2;
- (id)preloadSourceFrom:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

