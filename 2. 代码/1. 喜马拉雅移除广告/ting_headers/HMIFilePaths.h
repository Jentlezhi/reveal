//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMIFilePaths : NSObject
{
    NSString *_hupUpdatePathAndFilename;
    NSString *_hupUpdateChecksum;
    NSString *_accessoryId;
    NSString *_rootPath;
    NSString *_aqPath;
    NSString *_appsPath;
    NSString *_homePath;
    NSString *_downloadPath;
    NSString *_hupUpdatePath;
    NSString *_plistPath;
    NSString *_policyPath;
    NSString *_appStartupInfoPath;
    NSString *_fileIoPath;
}

+ (void)clearFileSystem;
+ (id)fileIoPath;
+ (id)policyPath;
+ (id)plistPath;
+ (id)hupUpdatePath;
+ (id)downloadPath;
+ (id)homePath;
+ (id)appsPath;
+ (id)aqPath;
+ (id)rootPath;
+ (void)initHMIFilePathsWithAccessoryIdentifier:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *fileIoPath; // @synthesize fileIoPath=_fileIoPath;
@property(retain, nonatomic) NSString *appStartupInfoPath; // @synthesize appStartupInfoPath=_appStartupInfoPath;
@property(retain, nonatomic) NSString *policyPath; // @synthesize policyPath=_policyPath;
@property(retain, nonatomic) NSString *plistPath; // @synthesize plistPath=_plistPath;
@property(retain, nonatomic) NSString *hupUpdatePath; // @synthesize hupUpdatePath=_hupUpdatePath;
@property(retain, nonatomic) NSString *downloadPath; // @synthesize downloadPath=_downloadPath;
@property(retain, nonatomic) NSString *homePath; // @synthesize homePath=_homePath;
@property(retain, nonatomic) NSString *appsPath; // @synthesize appsPath=_appsPath;
@property(retain, nonatomic) NSString *aqPath; // @synthesize aqPath=_aqPath;
@property(retain, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(retain, nonatomic) NSString *accessoryId; // @synthesize accessoryId=_accessoryId;
@property(retain) NSString *hupUpdateChecksum; // @synthesize hupUpdateChecksum=_hupUpdateChecksum;
@property(retain) NSString *hupUpdatePathAndFilename; // @synthesize hupUpdatePathAndFilename=_hupUpdatePathAndFilename;
- (void).cxx_destruct;
- (void)createPathsUnderRootPath;
- (void)initializePathNames;
- (void)initializeAllPaths;

@end

