//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableURLRequest;
@protocol WBUploadURLSessionTask;

@protocol WBUploadURLSession <NSObject>
@property(readonly, nonatomic) _Bool reachable;
- (id <WBUploadURLSessionTask>)uploadTaskWithStreamedRequest:(NSMutableURLRequest *)arg1 progress:(void (^)(NSProgress *))arg2 completionHandler:(void (^)(id <WBUploadURLSessionTask>, id, NSError *))arg3;
- (id <WBUploadURLSessionTask>)dataTaskWithRequest:(NSMutableURLRequest *)arg1 completionHandler:(void (^)(id <WBUploadURLSessionTask>, id, NSError *))arg2;
@end

