//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMModel.h"

@class NSError, NSString;

@interface MMReceiveMessageStat : MMModel
{
    int _messageClass;
    int _type;
    long long _startTime;
    long long _responseTime;
    long long _tid;
    long long _code;
    long long _chatId;
    NSString *_errorMsg;
    NSString *_traceId;
    NSError *_errorNS;
}

+ (id)statWithChat:(id)arg1;
@property(retain, nonatomic) NSError *errorNS; // @synthesize errorNS=_errorNS;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) long long chatId; // @synthesize chatId=_chatId;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(nonatomic) long long tid; // @synthesize tid=_tid;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int messageClass; // @synthesize messageClass=_messageClass;
@property(nonatomic) long long responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)ua;
- (void)respond;
- (void)start;
- (id)generalMap;
- (id)toFailureKeyValue;
- (id)toSuccessKeyValue;
- (void)postFailure;
- (void)post;

@end

