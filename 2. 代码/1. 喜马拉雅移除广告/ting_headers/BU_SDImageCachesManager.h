//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDImageCache-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_semaphore;

@interface BU_SDImageCachesManager : NSObject <SDImageCache>
{
    NSMutableArray *_imageCaches;
    unsigned long long _queryOperationPolicy;
    unsigned long long _storeOperationPolicy;
    unsigned long long _removeOperationPolicy;
    unsigned long long _containsOperationPolicy;
    unsigned long long _clearOperationPolicy;
    NSObject<OS_dispatch_semaphore> *_cachesLock;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *cachesLock; // @synthesize cachesLock=_cachesLock;
@property(nonatomic) unsigned long long clearOperationPolicy; // @synthesize clearOperationPolicy=_clearOperationPolicy;
@property(nonatomic) unsigned long long containsOperationPolicy; // @synthesize containsOperationPolicy=_containsOperationPolicy;
@property(nonatomic) unsigned long long removeOperationPolicy; // @synthesize removeOperationPolicy=_removeOperationPolicy;
@property(nonatomic) unsigned long long storeOperationPolicy; // @synthesize storeOperationPolicy=_storeOperationPolicy;
@property(nonatomic) unsigned long long queryOperationPolicy; // @synthesize queryOperationPolicy=_queryOperationPolicy;
- (void).cxx_destruct;
- (void)serialClearWithCacheType:(long long)arg1 completion:(CDUnknownBlockType)arg2 enumerator:(id)arg3;
- (void)serialContainsImageForKey:(id)arg1 cacheType:(long long)arg2 completion:(CDUnknownBlockType)arg3 enumerator:(id)arg4 operation:(id)arg5;
- (void)serialRemoveImageForKey:(id)arg1 cacheType:(long long)arg2 completion:(CDUnknownBlockType)arg3 enumerator:(id)arg4;
- (void)serialStoreImage:(id)arg1 imageData:(id)arg2 forKey:(id)arg3 cacheType:(long long)arg4 completion:(CDUnknownBlockType)arg5 enumerator:(id)arg6;
- (void)serialQueryImageForKey:(id)arg1 options:(unsigned long long)arg2 context:(struct NSDictionary *)arg3 completion:(CDUnknownBlockType)arg4 enumerator:(id)arg5 operation:(id)arg6;
- (void)concurrentClearWithCacheType:(long long)arg1 completion:(CDUnknownBlockType)arg2 enumerator:(id)arg3 operation:(id)arg4;
- (void)concurrentContainsImageForKey:(id)arg1 cacheType:(long long)arg2 completion:(CDUnknownBlockType)arg3 enumerator:(id)arg4 operation:(id)arg5;
- (void)concurrentRemoveImageForKey:(id)arg1 cacheType:(long long)arg2 completion:(CDUnknownBlockType)arg3 enumerator:(id)arg4 operation:(id)arg5;
- (void)concurrentStoreImage:(id)arg1 imageData:(id)arg2 forKey:(id)arg3 cacheType:(long long)arg4 completion:(CDUnknownBlockType)arg5 enumerator:(id)arg6 operation:(id)arg7;
- (void)concurrentQueryImageForKey:(id)arg1 options:(unsigned long long)arg2 context:(struct NSDictionary *)arg3 completion:(CDUnknownBlockType)arg4 enumerator:(id)arg5 operation:(id)arg6;
- (void)clearWithCacheType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)containsImageForKey:(id)arg1 cacheType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeImageForKey:(id)arg1 cacheType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)storeImage:(id)arg1 imageData:(id)arg2 forKey:(id)arg3 cacheType:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)queryImageForKey:(id)arg1 options:(unsigned long long)arg2 context:(struct NSDictionary *)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeCache:(id)arg1;
- (void)addCache:(id)arg1;
@property(copy, nonatomic) NSArray *caches;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

