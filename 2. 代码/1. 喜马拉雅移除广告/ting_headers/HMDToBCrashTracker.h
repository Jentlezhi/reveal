//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDToBCrashUploader, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HMDToBCrashTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_uploadQueue;
    NSString *_crashPath;
    HMDToBCrashUploader *_uploader;
}

+ (id)sharedTracker;
@property(retain, nonatomic) HMDToBCrashUploader *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) NSString *crashPath; // @synthesize crashPath=_crashPath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *filters;
@property(copy, nonatomic) NSString *business;
@property(copy, nonatomic) CDUnknownBlockType commonQueryParamsBlock;
- (void)removeCustomFilterKey:(id)arg1;
- (void)removeCustomContextKey:(id)arg1;
@property(copy, nonatomic) NSDictionary *customContext;
- (void)uploadCrashLogIfNeeded;
- (id)heimdallrRootPath;
- (void)start;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)lastSenceDidChangeNotification:(id)arg1;
- (void)observeApplicationWillEnterForeground:(id)arg1;
- (void)observeApplicationDidEnterBackground:(id)arg1;
- (void)appReachStateChanged:(id)arg1;
- (void)environmentInfoUpdate;

@end

