//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMModel.h"

@class NSError, NSString;

@interface MMSendMessageStat : MMModel
{
    _Bool _resend;
    _Bool _is_ssl;
    _Bool _socket_reuse;
    _Bool _is_unicom_proxy;
    int _retryTimes;
    int _messageClass;
    int _type;
    long long _messageId;
    long long _size;
    long long _startTime;
    long long _sendReturnTime;
    long long _processEndTime;
    long long _dbStartTime;
    long long _dbEndTime;
    long long _UIStartTime;
    long long _UIEndTime;
    long long _code;
    NSString *_error;
    long long _tid;
    NSString *_ip;
    long long _socket_alive_time;
    long long _port;
    long long _sliceFirst;
    long long _sliceLast;
    NSString *_sliceMsgUUID;
    NSString *_upload_image_id;
    long long _upload_image_time;
    NSString *_upload_image_error;
    unsigned long long _upload_image_errorcode;
    NSString *_retryError;
    NSString *_traceId;
    NSString *_spanId;
    id _traceRequestParams;
    NSError *_errorNS;
    long long _localId;
    long long _chatId;
}

+ (id)statWithMessage:(id)arg1;
@property(nonatomic) long long chatId; // @synthesize chatId=_chatId;
@property(nonatomic) long long localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSError *errorNS; // @synthesize errorNS=_errorNS;
@property(retain, nonatomic) id traceRequestParams; // @synthesize traceRequestParams=_traceRequestParams;
@property(copy, nonatomic) NSString *spanId; // @synthesize spanId=_spanId;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(copy, nonatomic) NSString *retryError; // @synthesize retryError=_retryError;
@property(nonatomic) unsigned long long upload_image_errorcode; // @synthesize upload_image_errorcode=_upload_image_errorcode;
@property(copy, nonatomic) NSString *upload_image_error; // @synthesize upload_image_error=_upload_image_error;
@property(nonatomic) long long upload_image_time; // @synthesize upload_image_time=_upload_image_time;
@property(copy, nonatomic) NSString *upload_image_id; // @synthesize upload_image_id=_upload_image_id;
@property(nonatomic) _Bool is_unicom_proxy; // @synthesize is_unicom_proxy=_is_unicom_proxy;
@property(copy, nonatomic) NSString *sliceMsgUUID; // @synthesize sliceMsgUUID=_sliceMsgUUID;
@property(nonatomic) long long sliceLast; // @synthesize sliceLast=_sliceLast;
@property(nonatomic) long long sliceFirst; // @synthesize sliceFirst=_sliceFirst;
@property(nonatomic) long long port; // @synthesize port=_port;
@property(nonatomic) long long socket_alive_time; // @synthesize socket_alive_time=_socket_alive_time;
@property(nonatomic) _Bool socket_reuse; // @synthesize socket_reuse=_socket_reuse;
@property(nonatomic) _Bool is_ssl; // @synthesize is_ssl=_is_ssl;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(nonatomic) long long tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *error; // @synthesize error=_error;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(nonatomic) long long UIEndTime; // @synthesize UIEndTime=_UIEndTime;
@property(nonatomic) long long UIStartTime; // @synthesize UIStartTime=_UIStartTime;
@property(nonatomic) long long dbEndTime; // @synthesize dbEndTime=_dbEndTime;
@property(nonatomic) long long dbStartTime; // @synthesize dbStartTime=_dbStartTime;
@property(nonatomic) long long processEndTime; // @synthesize processEndTime=_processEndTime;
@property(nonatomic) long long sendReturnTime; // @synthesize sendReturnTime=_sendReturnTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int messageClass; // @synthesize messageClass=_messageClass;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) _Bool resend; // @synthesize resend=_resend;
@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (void)traceLogMutiUploadOperation:(id)arg1;
- (_Bool)needRecoreParentSpan;
- (void)UIEnd;
- (void)UIStart;
- (void)dbEnd;
- (void)dbStart;
- (void)processEnd;
- (void)sendReturn;
- (void)start;
- (void)slicePostWithMessageLog:(id)arg1;
- (void)postUploadFailureWithError:(id)arg1;
- (void)postUploadSuccess;
- (void)postFailure;
- (void)post;
- (id)toFailureKeyValue;
- (id)toSuccessKeyValue;
- (id)generalMap;
- (id)init;
- (void)dealloc;

@end

