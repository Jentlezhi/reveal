//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABQFileManager, ABQWebViewManager, AQHAP, NSOperationQueue, ProfileSyncConfiguration;
@protocol HUManagerDelegate;

@interface ABQSyncManager : NSObject
{
    id <HUManagerDelegate> _headUnitManagerDelegate;
    ABQWebViewManager *_webViewManager;
    AQHAP *_hap;
    ProfileSyncConfiguration *_profileSyncConfig;
    ABQFileManager *_fileManager;
    NSOperationQueue *_operationQueue;
}

+ (id)mostRecentHeadUnitInfoDictionary;
+ (id)mostRecentProfileResponseFromCache;
+ (void)clearLastSyncCache;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) ABQFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain) ProfileSyncConfiguration *profileSyncConfig; // @synthesize profileSyncConfig=_profileSyncConfig;
@property(retain) AQHAP *hap; // @synthesize hap=_hap;
@property(retain) ABQWebViewManager *webViewManager; // @synthesize webViewManager=_webViewManager;
@property(retain) id <HUManagerDelegate> headUnitManagerDelegate; // @synthesize headUnitManagerDelegate=_headUnitManagerDelegate;
- (void).cxx_destruct;
- (void)statusDidChangeTo:(_Bool)arg1 forAppWithName:(id)arg2;
- (void)enqueueFileUploadRetryOperation;
- (void)startProfileSync;
- (id)initWithHAP:(id)arg1 webViewManager:(id)arg2 profileSyncConfig:(id)arg3;

@end

