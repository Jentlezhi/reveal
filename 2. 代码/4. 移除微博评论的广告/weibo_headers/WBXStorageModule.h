//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBXAbstractModule.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface WBXStorageModule : WBXAbstractModule
{
    NSObject<OS_dispatch_queue> *_cacheOperateQueue;
}

+ (id)wx_export_method_45;
+ (id)wx_export_method_sync_44;
+ (id)wx_export_method_sync_43;
+ (id)wx_export_method_42;
+ (id)wx_export_method_sync_41;
+ (id)wx_export_method_40;
+ (id)wx_export_method_sync_39;
+ (id)wx_export_method_38;
+ (id)wx_export_method_37;
+ (id)wx_export_method_sync_36;
+ (id)wx_export_method_35;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheOperateQueue; // @synthesize cacheOperateQueue=_cacheOperateQueue;
- (void).cxx_destruct;
- (id)getWeiboStorageSync:(id)arg1;
- (void)getWeiboStorage:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)setStorageSync:(id)arg1;
- (void)setStorage:(id)arg1;
- (_Bool)removeStorageSync:(id)arg1;
- (void)removeStorage:(id)arg1;
- (id)getStorageSync:(id)arg1;
- (void)getStorage:(id)arg1;
- (id)getStorageInfoSync;
- (void)getStorageInfo:(id)arg1;
- (_Bool)clearStorageSync;
- (void)clearStorage:(id)arg1;
- (void)removeIndexForKey:(id)arg1;
- (void)updateIndexForKey:(id)arg1;
- (long long)totalSize;
- (void)updateTimestampForKey:(id)arg1;
- (void)removeInfoForKey:(id)arg1;
- (void)setInfo:(id)arg1 ForKey:(id)arg2;
- (id)getInfoForKey:(id)arg1;
- (_Bool)checkInput:(id)arg1;
- (id)indexs;
- (id)info;
- (id)memory;
- (id)indexs:(id)arg1;
- (id)info:(id)arg1;
- (id)memory:(id)arg1;
- (id)storageQueue;
- (id)indexFilePath:(id)arg1;
- (id)infoFilePath:(id)arg1;
- (id)filePath:(id)arg1;
- (id)directory:(id)arg1;
- (void)setupDirectory:(id)arg1;
- (id)filePathForKey:(id)arg1 withAppId:(id)arg2;
- (void)write:(id)arg1 toFilePath:(id)arg2;
- (void)removeItemsBySize:(long long)arg1;
- (void)checkStorageLimit;
- (void)setObject:(id)arg1 forKey:(id)arg2 persistent:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (_Bool)executeRemoveItem:(id)arg1;
- (void)removeItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setItemPersistent:(id)arg1 value:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)setItem:(id)arg1 value:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getItem:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getAllKeys:(CDUnknownBlockType)arg1;
- (void)length:(CDUnknownBlockType)arg1;
- (id)targetExecuteQueue;
- (void)setApp:(id)arg1;

@end

