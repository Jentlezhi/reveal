//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WXPrerenderManager : NSObject
{
    NSMutableArray *_cachedUrlList;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_prerenderTasks;
    long long _maxCacheNumber;
}

+ (void)destroyTask:(id)arg1;
+ (id)getTaskKeyFromUrl:(id)arg1;
+ (void)excuteModuleTasksForUrl:(id)arg1;
+ (void)storePrerenderModuleTasks:(id)arg1 forUrl:(id)arg2;
+ (void)removePrerenderTaskforUrl:(id)arg1;
+ (id)instanceFromUrl:(id)arg1;
+ (id)errorFromUrl:(id)arg1;
+ (id)viewFromUrl:(id)arg1;
+ (void)renderFromCache:(id)arg1;
+ (_Bool)isTaskExist:(id)arg1;
+ (_Bool)isTaskReady:(id)arg1;
+ (void)addGlobalTask:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)addTask:(id)arg1 instanceId:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
@property(nonatomic) long long maxCacheNumber; // @synthesize maxCacheNumber=_maxCacheNumber;
@property(retain, nonatomic) NSMutableDictionary *prerenderTasks; // @synthesize prerenderTasks=_prerenderTasks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *cachedUrlList; // @synthesize cachedUrlList=_cachedUrlList;
- (void).cxx_destruct;
- (void)removeTask:(id)arg1;
- (_Bool)isTaskExist:(id)arg1;
- (_Bool)isTaskReady:(id)arg1;
- (void)prerender:(id)arg1 instanceId:(id)arg2 isCache:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (_Bool)isSwitchOn;
- (void)dealloc;
- (id)initPrivate;

@end

