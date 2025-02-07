//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface HMDInjectedInfo : NSObject
{
    struct _opaque_pthread_rwlock_t rwlock;
    _Bool _ignorePIPESignalCrash;
    NSDictionary *_commonParams;
    NSString *_allUploadHost;
    NSString *_appID;
    NSString *_appName;
    NSString *_channel;
    NSString *_deviceID;
    NSString *_installID;
    NSString *_userID;
    NSString *_userName;
    NSString *_email;
    NSString *_sessionID;
    CDUnknownBlockType _commonParamsBlock;
    NSDictionary *_customContext;
    CDUnknownBlockType _networkParamsBlock;
    NSString *_crashUploadHost;
    NSString *_exceptionUploadHost;
    NSString *_userExceptionUploadHost;
    NSString *_performanceUploadHost;
    NSString *_fileUploadHost;
    NSArray *_configHostArray;
    NSString *_business;
    NSDictionary *_filters;
    NSString *_buildInfo;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultInfo;
@property(copy, nonatomic) NSString *buildInfo; // @synthesize buildInfo=_buildInfo;
@property(copy) NSDictionary *filters; // @synthesize filters=_filters;
@property(copy) NSString *business; // @synthesize business=_business;
@property(copy) NSArray *configHostArray; // @synthesize configHostArray=_configHostArray;
@property(copy) NSString *fileUploadHost; // @synthesize fileUploadHost=_fileUploadHost;
@property(copy) NSString *performanceUploadHost; // @synthesize performanceUploadHost=_performanceUploadHost;
@property(copy) NSString *userExceptionUploadHost; // @synthesize userExceptionUploadHost=_userExceptionUploadHost;
@property(copy) NSString *exceptionUploadHost; // @synthesize exceptionUploadHost=_exceptionUploadHost;
@property(copy) NSString *crashUploadHost; // @synthesize crashUploadHost=_crashUploadHost;
@property(copy) CDUnknownBlockType networkParamsBlock; // @synthesize networkParamsBlock=_networkParamsBlock;
@property(copy) NSDictionary *customContext; // @synthesize customContext=_customContext;
@property(nonatomic) _Bool ignorePIPESignalCrash; // @synthesize ignorePIPESignalCrash=_ignorePIPESignalCrash;
@property(copy) CDUnknownBlockType commonParamsBlock; // @synthesize commonParamsBlock=_commonParamsBlock;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) NSString *email; // @synthesize email=_email;
@property(copy) NSString *userName; // @synthesize userName=_userName;
@property(copy) NSString *userID; // @synthesize userID=_userID;
@property(copy) NSString *installID; // @synthesize installID=_installID;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy) NSString *allUploadHost; // @synthesize allUploadHost=_allUploadHost;
- (void).cxx_destruct;
- (void)removeCustomFilterKey:(id)arg1;
- (void)setCustomFilterValue:(id)arg1 forKey:(id)arg2;
- (void)removeCustomContextKey:(id)arg1;
- (void)setCustomContextValue:(id)arg1 forKey:(id)arg2;
- (id)ssAppID;
- (id)getCurrentChannel;
- (id)defaultAppName;
@property(copy) NSDictionary *commonParams; // @synthesize commonParams=_commonParams;
- (id)getTTNetParamsIfAvailable;
- (id)init;
@property(retain, nonatomic) NSNumber *disableNetworkRequest;
- (void)confUniqueKeyForData:(id)arg1 timestamp:(long long)arg2 eventType:(id)arg3;

@end

