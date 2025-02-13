//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSMutableDictionary, NSRecursiveLock, WBHTTPRequestOperationWrapper, WBStatusRequest;

@interface WBTimelineLoadOperation : NSOperation
{
    WBStatusRequest *currentRequest;
    WBHTTPRequestOperationWrapper *wrapper;
    _Bool isExecutingBlock;
    _Bool _executing;
    _Bool _finished;
    NSMutableDictionary *extraParams;
    CDUnknownBlockType loadStatusesCompletion;
    CDUnknownBlockType loadStatusesCompletion2;
    NSRecursiveLock *_lock;
}

+ (id)operationForStatusRequest:(id)arg1;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType loadStatusesCompletion2; // @synthesize loadStatusesCompletion2;
@property(copy, nonatomic) CDUnknownBlockType loadStatusesCompletion; // @synthesize loadStatusesCompletion;
@property(retain, nonatomic) NSMutableDictionary *extraParams; // @synthesize extraParams;
@property(retain, nonatomic) WBStatusRequest *currentRequest; // @synthesize currentRequest;
- (void).cxx_destruct;
- (_Bool)isConcurrent;
- (void)setExecuting:(_Bool)arg1;
- (void)setFinished:(_Bool)arg1;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void)setStatusTrendGroupIDWithCards:(id)arg1;
- (void)main;
- (void)start;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

@end

