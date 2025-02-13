//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBUploadURLSessionTask-Protocol.h"

@class NSError, NSString, NSURLRequest, NSURLResponse, NSURLSessionTask;

@interface WBUploadURLSessionTask : NSObject <WBUploadURLSessionTask>
{
    NSURLSessionTask *_task;
    NSString *_responseString;
}

@property(readonly, copy) NSString *responseString; // @synthesize responseString=_responseString;
- (void).cxx_destruct;
- (void)resume;
- (void)cancel;
@property(readonly, copy) NSError *error;
@property(readonly) long long state;
@property(readonly, copy) NSURLResponse *response;
@property(readonly, copy) NSURLRequest *currentRequest;
@property(readonly, copy) NSURLRequest *originalRequest;
- (void)didReceiveData:(id)arg1;
- (id)initWithTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

