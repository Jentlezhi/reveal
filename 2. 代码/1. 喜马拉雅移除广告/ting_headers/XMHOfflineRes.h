//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMHOfflineResOperationDelegate-Protocol.h"

@class NSLock, NSOperationQueue, NSString, XMHOfflineResUnit;

@interface XMHOfflineRes : NSObject <XMHOfflineResOperationDelegate>
{
    unsigned long long _matchType;
    NSOperationQueue *_operationQueue;
    XMHOfflineResUnit *_resUnit;
    NSLock *_coreLock;
}

@property(retain, nonatomic) NSLock *coreLock; // @synthesize coreLock=_coreLock;
@property(retain, nonatomic) XMHOfflineResUnit *resUnit; // @synthesize resUnit=_resUnit;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) unsigned long long matchType; // @synthesize matchType=_matchType;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (id)offlineResItemForUrl:(id)arg1;
- (id)offlineResResponseForUrl:(id)arg1;
- (id)offlineResPathForUrl:(id)arg1;
- (_Bool)offlineResOperation:(id)arg1 updateResources:(id)arg2;
- (void)installOnlineComponent:(id)arg1;
- (void)checkNeedDownloadOfflineResources:(id)arg1;
- (void)requestOfflineResourcesConfigWithBlock:(CDUnknownBlockType)arg1;
- (void)checkOfflineResourcesConfig;
- (id)initWithOperationQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

