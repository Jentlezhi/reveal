//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface HMDModuleNetworkManager : NSObject
{
    NSMutableDictionary *_hostMap;
    NSLock *_lock;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *hostMap; // @synthesize hostMap=_hostMap;
- (void).cxx_destruct;
- (void)_uploadPath:(id)arg1 provider:(id)arg2 hosts:(id)arg3 hostIndex:(unsigned long long)arg4 maxRetryTimes:(unsigned long long)arg5 retryIndex:(unsigned long long)arg6 formData:(id)arg7 headerField:(id)arg8 callback:(CDUnknownBlockType)arg9;
- (void)uploadPath:(id)arg1 provider:(id)arg2 retry:(_Bool)arg3 header:(id)arg4 formData:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)_asyncRequestForPath:(id)arg1 provider:(id)arg2 hosts:(id)arg3 hostIndex:(unsigned long long)arg4 maxRetryTimes:(unsigned long long)arg5 retryIndex:(unsigned long long)arg6 method:(id)arg7 headerField:(id)arg8 jsonObjParams:(id)arg9 needEcrypt:(_Bool)arg10 callback:(CDUnknownBlockType)arg11;
- (id)hostWithList:(id)arg1 index:(unsigned long long)arg2;
- (id)urlWithHost:(id)arg1 path:(id)arg2;
- (void)requestForPath:(id)arg1 provider:(id)arg2 retry:(_Bool)arg3 method:(id)arg4 headerField:(id)arg5 jsonObjParams:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (id)urlWithPath:(id)arg1 provider:(id)arg2;
- (id)hostsWithProvider:(id)arg1;
- (void)postPath:(id)arg1 provider:(id)arg2 retry:(_Bool)arg3 header:(id)arg4 params:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)getPath:(id)arg1 provider:(id)arg2 retry:(_Bool)arg3 header:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)uploadPath:(id)arg1 provider:(id)arg2 header:(id)arg3 formData:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)postPath:(id)arg1 provider:(id)arg2 header:(id)arg3 params:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)getPath:(id)arg1 provider:(id)arg2 header:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)init;

@end

