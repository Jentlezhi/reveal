//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSNumber, NSString, NSURLResponse;

@interface MMA_RequestCache : NSObject
{
    _Bool _isCached;
    NSString *_request_id;
    NSNumber *_retry_times;
    NSNumber *_time_point;
    NSString *_original_url;
    NSDictionary *_log_parameter;
    long long _trackType;
    NSError *_requestError;
    NSURLResponse *_requestResponse;
    NSString *_request_url;
    double _trackStartTime;
}

@property(nonatomic) double trackStartTime; // @synthesize trackStartTime=_trackStartTime;
@property(retain, nonatomic) NSString *request_url; // @synthesize request_url=_request_url;
@property(retain, nonatomic) NSURLResponse *requestResponse; // @synthesize requestResponse=_requestResponse;
@property(retain, nonatomic) NSError *requestError; // @synthesize requestError=_requestError;
@property(nonatomic) long long trackType; // @synthesize trackType=_trackType;
@property(copy, nonatomic) NSDictionary *log_parameter; // @synthesize log_parameter=_log_parameter;
@property(copy, nonatomic) NSString *original_url; // @synthesize original_url=_original_url;
@property(nonatomic) _Bool isCached; // @synthesize isCached=_isCached;
@property(retain, nonatomic) NSNumber *time_point; // @synthesize time_point=_time_point;
@property(retain, nonatomic) NSNumber *retry_times; // @synthesize retry_times=_retry_times;
@property(retain, nonatomic) NSString *request_id; // @synthesize request_id=_request_id;
- (void).cxx_destruct;
- (id)init:(id)arg1 withURL:(id)arg2 withRetryTimes:(id)arg3 withTimestamp:(id)arg4 log_parameter:(id)arg5 trackType:(long long)arg6 isCache:(_Bool)arg7;

@end

