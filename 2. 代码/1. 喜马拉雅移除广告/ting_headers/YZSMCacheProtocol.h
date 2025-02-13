//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

@class NSURLSessionDataTask;

@interface YZSMCacheProtocol : NSURLProtocol
{
    NSURLSessionDataTask *_task;
}

+ (void)applyPreloadConfig:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
+ (void)synchronizePreloadCachesWithURLs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)addPreloadCachesInZipFile:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)setMaxScriptCacheSize:(unsigned long long)arg1;
+ (unsigned long long)maxScriptCacheSize;
+ (void)setMaxImageCacheSize:(unsigned long long)arg1;
+ (unsigned long long)maxImageCacheSize;
+ (void)setSupportedHosts:(id)arg1;
+ (id)supportedHosts;
+ (void)setSupportedResourceExtentions:(id)arg1;
+ (id)supportedResourceExtentions;
+ (void)setSupportedSchemes:(id)arg1;
+ (id)supportedSchemes;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithTask:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;

@end

