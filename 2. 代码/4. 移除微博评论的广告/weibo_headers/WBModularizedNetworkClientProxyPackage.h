//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WBTDAFHTTPClient;

@interface WBModularizedNetworkClientProxyPackage : NSObject
{
    WBTDAFHTTPClient *_client;
    NSMutableDictionary *_package;
    struct _opaque_pthread_mutex_t _mutex;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNetworkClient:(id)arg1;
- (id)proxyWithModule:(id)arg1;

@end

