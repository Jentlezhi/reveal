//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUAppStorePreloadItem, BUAppStorePreloadList;

@interface BUAppStoreManager : NSObject
{
    _Bool _preloadOnlyWIFI;
    _Bool _isReusePreload;
    _Bool _isPresentAnimated;
    _Bool _presenting;
    unsigned long long _maxPreloadCount;
    BUAppStorePreloadList *_preloadList;
    BUAppStorePreloadItem *_presentingItem;
}

+ (_Bool)isAppStoreURL:(id)arg1;
+ (id)appIDInURL:(id)arg1;
+ (id)duplicatedControllerWithAppID:(id)arg1 dismiassAnimated:(_Bool)arg2;
+ (void)clearAllPreloadCache;
+ (void)clearPreloadCacheBySKController:(id)arg1;
+ (void)clearPreloadCacheByAppID:(id)arg1;
+ (_Bool)hasControllerPreloadedByAppID:(id)arg1;
+ (id)controllerPreloadedByAppID:(id)arg1;
+ (void)openAppStoreControllerWithAppID:(id)arg1 adID:(id)arg2 logExtra:(id)arg3 byController:(id)arg4 presentCompletion:(CDUnknownBlockType)arg5 dismissCompletion:(CDUnknownBlockType)arg6;
+ (void)openAppStoreControllerWithAppID:(id)arg1 downloadUrl:(id)arg2 adID:(id)arg3 logExtra:(id)arg4 byController:(id)arg5 presentCompletion:(CDUnknownBlockType)arg6 dismissCompletion:(CDUnknownBlockType)arg7;
+ (void)openAppStoreControllerWithAppID:(id)arg1 byController:(id)arg2 presentCompletion:(CDUnknownBlockType)arg3 dismissCompletion:(CDUnknownBlockType)arg4;
+ (void)openAppStoreControllerWithAppID:(id)arg1 byController:(id)arg2;
+ (void)preloadAppStoreControllerWithAppID:(id)arg1 adID:(id)arg2 logExtra:(id)arg3 isDuplicate:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)preloadAppStoreControllerWithAppID:(id)arg1 adID:(id)arg2 logExtra:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)preloadAppStoreControllerWithAppID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)preloadAppStoreControllerWithAppID:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) BUAppStorePreloadItem *presentingItem; // @synthesize presentingItem=_presentingItem;
@property(retain, nonatomic) BUAppStorePreloadList *preloadList; // @synthesize preloadList=_preloadList;
@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic) _Bool isPresentAnimated; // @synthesize isPresentAnimated=_isPresentAnimated;
@property(nonatomic) _Bool isReusePreload; // @synthesize isReusePreload=_isReusePreload;
@property(nonatomic) unsigned long long maxPreloadCount; // @synthesize maxPreloadCount=_maxPreloadCount;
@property(nonatomic) _Bool preloadOnlyWIFI; // @synthesize preloadOnlyWIFI=_preloadOnlyWIFI;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long supportPreloadType;
- (void)clearPreloadCache;
- (void)clearPreloadCacheBySKController:(id)arg1;
- (void)clearPreloadCacheByAppID:(id)arg1;
- (void)openAppStoreControllerWithAppID:(id)arg1 downloadUrl:(id)arg2 adID:(id)arg3 logExtra:(id)arg4 byController:(id)arg5 presentCompletion:(CDUnknownBlockType)arg6 dismissCompletion:(CDUnknownBlockType)arg7;
- (void)openAppStoreControllerWithAppID:(id)arg1 adID:(id)arg2 logExtra:(id)arg3 byController:(id)arg4 presentCompletion:(CDUnknownBlockType)arg5 dismissCompletion:(CDUnknownBlockType)arg6;
- (_Bool)hasControllerPreloadedByAppID:(id)arg1;
- (id)controllerPreloadedByAppID:(id)arg1;
- (void)preloadAppStoreControllerWithAppID:(id)arg1 adID:(id)arg2 logExtra:(id)arg3 isDuplicate:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)preloadAppStoreControllerWithAppID:(id)arg1 adID:(id)arg2 logExtra:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)duplicatedControllerPreloadedByAppID:(id)arg1 dismiassAnimated:(_Bool)arg2;
- (id)init;

@end

