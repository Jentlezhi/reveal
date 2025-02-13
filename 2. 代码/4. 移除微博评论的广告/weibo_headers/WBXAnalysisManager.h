//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface WBXAnalysisManager : NSObject
{
    NSMutableArray *_analysisLogs;
    NSMutableArray *_tracingLogs;
    NSMutableDictionary *_tracingTasks;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *tracingTasks; // @synthesize tracingTasks=_tracingTasks;
@property(retain, nonatomic) NSMutableArray *tracingLogs; // @synthesize tracingLogs=_tracingLogs;
@property(retain, nonatomic) NSMutableArray *analysisLogs; // @synthesize analysisLogs=_analysisLogs;
- (void).cxx_destruct;
- (id)allTracingLogs;
- (void)logTracingLogsToDebugger:(id)arg1;
- (void)sendTracingToWeibo:(id)arg1;
- (void)logTracing:(id)arg1 type:(unsigned long long)arg2 bundleType:(id)arg3 enter:(id)arg4 reason:(id)arg5 versionCode:(id)arg6 params:(id)arg7;
- (void)logTracing:(id)arg1 pageId:(id)arg2 pageName:(id)arg3 type:(unsigned long long)arg4 params:(id)arg5;
- (void)logTracing:(id)arg1 pageId:(id)arg2 pageName:(id)arg3 type:(unsigned long long)arg4 session:(id)arg5 params:(id)arg6;
- (void)finishedTracing:(id)arg1 pageId:(id)arg2 pageName:(id)arg3 type:(unsigned long long)arg4 session:(id)arg5;
- (void)finishedTracing:(id)arg1 pageId:(id)arg2 pageName:(id)arg3 type:(unsigned long long)arg4;
- (void)endTracing:(id)arg1 pageId:(id)arg2 pageName:(id)arg3 type:(unsigned long long)arg4 subType:(id)arg5 session:(id)arg6;
- (void)endTracing:(id)arg1 pageId:(id)arg2 pageName:(id)arg3 type:(unsigned long long)arg4 subType:(id)arg5;
- (void)startTracing:(id)arg1 pageId:(id)arg2 pageName:(id)arg3 type:(unsigned long long)arg4 subType:(id)arg5 session:(id)arg6 params:(id)arg7;
- (void)startTracing:(id)arg1 pageId:(id)arg2 pageName:(id)arg3 type:(unsigned long long)arg4 subType:(id)arg5 params:(id)arg6;
- (void)cleanLogs;
- (id)allLogs;
- (void)logErrorActionWithAppId:(id)arg1 pageName:(id)arg2 subType:(id)arg3 params:(id)arg4;
- (void)sendErrorActionLogToWeibo:(id)arg1;
- (void)sendJSExceptionToWeibo:(id)arg1;
- (void)log:(id)arg1;
- (void)allPageEndShowing:(id)arg1;
- (void)anyPageShowing:(id)arg1;
- (id)init;
- (void)allPageEndShowing:(id)arg1;
- (void)anyPageShowing:(id)arg1;
- (id)baseTracingData:(id)arg1;
- (id)baseAnalysisData:(id)arg1;
- (void)logWBoxLaunchActLog:(id)arg1;
- (void)sendToWeiboActionLog:(id)arg1;
- (void)sendToWeiboPerformance:(id)arg1;
- (void)sendErrorActionLogToWeibo:(id)arg1;
- (void)sendJSExceptionToWeibo:(id)arg1;
- (void)sendTracingToWeibo:(id)arg1;

@end

