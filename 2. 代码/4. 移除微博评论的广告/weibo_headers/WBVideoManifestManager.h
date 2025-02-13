//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, WBVideoManifestCache;

@interface WBVideoManifestManager : NSObject
{
    struct {
        unsigned int scheduledPrefetch:1;
    } _flags;
    WBVideoManifestCache *_diskCache;
    NSMutableOrderedSet *_pendingPrefetchItems;
    NSSet *_currentPrefetchingItems;
    NSMutableArray *_currentPrefetchCompletionBlocks;
    NSMutableSet *_currentQueryItems;
    NSMutableDictionary *_successfullyPrefetchedMediaToTimeMap;
    NSMutableDictionary *_mediaIDToRemoteErrorDateMap;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)analysisTopViewController;
- (void)clearCache;
- (void)purgeCache;
- (void)videoItemDidUpdateNotification:(id)arg1;
- (void)_fetchManifestFromServerForMediaIDs:(id)arg1 protocol:(id)arg2 extraParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_serverSceneTypeFromExtraParameters:(id)arg1;
- (id)_manifestsFromResponseObject:(id)arg1 protocol:(id)arg2 variants:(id)arg3;
- (void)_queryManifestForMediaID:(id)arg1 protocol:(id)arg2 fromPrefetchComplete:(_Bool)arg3 extraParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchManifestForMediaID:(id)arg1 protocol:(id)arg2 extraParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_notifyCurrentPrefetchComplete;
- (void)_prefetchNextGroup;
- (_Bool)shouldPrefetchMediaID:(id)arg1 protocol:(id)arg2 now:(id)arg3;
- (_Bool)shouldRemoteFetchMediaID:(id)arg1 now:(id)arg2 error:(id *)arg3;
- (_Bool)shouldRemoteFetchMediaID:(id)arg1 error:(id *)arg2;
- (void)_updateSuccessfullyPrefetchedTime:(id)arg1 forMediaID:(id)arg2 protocol:(id)arg3;
- (id)_successfullyPrefetchedTimeForMediaID:(id)arg1 protocol:(id)arg2;
- (void)prefetchManifestForMediaID:(id)arg1 protocol:(id)arg2;
- (id)_cacheDirectory;
- (void)fetchCapabilityToken;
- (id)init;
- (void)dealloc;

@end

