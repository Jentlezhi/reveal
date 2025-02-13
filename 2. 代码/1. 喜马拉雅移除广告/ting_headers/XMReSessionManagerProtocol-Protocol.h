//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSObject, NSURLRequest, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;

@protocol XMReSessionManagerProtocol <NSObject>
- (void)connectionDidFinishLoading:(NSObject *)arg1;
- (void)connection:(NSObject *)arg1 didReceiveData:(NSData *)arg2;
- (void)connection:(NSObject *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)connection:(NSObject *)arg1 didFailWithError:(NSError *)arg2;
- (NSURLRequest *)connection:(NSObject *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)didStartDoRequest;
- (_Bool)isRequestCanceled;
- (NSURLRequest *)getRequest;

@optional
- (void)sessionWillStartSendRequest:(NSURLSessionTask *)arg1;
- (void)connection:(NSObject *)arg1 didFinishCollectionMetrics:(NSURLSessionTaskMetrics *)arg2;
- (void)connection:(NSObject *)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
@end

