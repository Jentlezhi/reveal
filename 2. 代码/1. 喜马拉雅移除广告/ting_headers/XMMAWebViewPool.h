//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, XMMAWebViewPoolConfiguration;
@protocol OS_dispatch_queue;

@interface XMMAWebViewPool : NSObject
{
    XMMAWebViewPoolConfiguration *_configuration;
    long long _currentWebViewIndex;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableSet *_masterPreloadWebViews;
    NSMutableSet *_slavePreloadWebViews;
}

+ (id)defaultPool;
@property(retain, nonatomic) NSMutableSet *slavePreloadWebViews; // @synthesize slavePreloadWebViews=_slavePreloadWebViews;
@property(retain, nonatomic) NSMutableSet *masterPreloadWebViews; // @synthesize masterPreloadWebViews=_masterPreloadWebViews;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) long long currentWebViewIndex; // @synthesize currentWebViewIndex=_currentWebViewIndex;
@property(readonly, nonatomic) XMMAWebViewPoolConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)executeBlockInWorkQueue:(CDUnknownBlockType)arg1;
- (void)takeSlaveWebView:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)takeSlaveWebView:(CDUnknownBlockType)arg1;
- (void)takeMasterWebView:(CDUnknownBlockType)arg1;
- (void)preloadWebView:(id)arg1 into:(id)arg2 isMaster:(_Bool)arg3;
- (id)createWebView:(id)arg1 wvId:(id)arg2;
- (void)clear;
- (void)preload;
- (void)config:(id)arg1;

@end

