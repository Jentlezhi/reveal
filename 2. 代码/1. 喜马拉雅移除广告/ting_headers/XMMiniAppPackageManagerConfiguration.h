//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMMiniAppPackageManagerConfiguration : NSObject
{
    NSString *_hostAppBundleName;
    NSString *_hostAppVersion;
    NSString *_deviceId;
    NSString *_cacheRootPath;
    NSString *_packageListFetchURL;
}

@property(copy, nonatomic) NSString *packageListFetchURL; // @synthesize packageListFetchURL=_packageListFetchURL;
@property(copy, nonatomic) NSString *cacheRootPath; // @synthesize cacheRootPath=_cacheRootPath;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *hostAppVersion; // @synthesize hostAppVersion=_hostAppVersion;
@property(copy, nonatomic) NSString *hostAppBundleName; // @synthesize hostAppBundleName=_hostAppBundleName;
- (void).cxx_destruct;
- (id)init;

@end

