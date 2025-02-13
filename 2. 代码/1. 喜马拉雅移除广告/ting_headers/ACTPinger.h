//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableData, NSURLConnection, NSURLRequest, NSURLResponse;
@protocol ACTPingerDelegate;

@interface ACTPinger : NSObject <NSURLConnectionDelegate>
{
    id <ACTPingerDelegate> _delegate;
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSMutableData *_receivedData;
}

@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) id <ACTPingerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dealloc;
- (void)ping;
- (id)initWithRequest:(id)arg1;

@end

