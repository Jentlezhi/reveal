//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PlayBadNetModel;

@interface XMNetWorkMonitor : NSObject
{
    PlayBadNetModel *_badNetModel;
    NSMutableDictionary *_connectTimeDict;
    NSMutableDictionary *_lastTranferTimeDict;
    NSString *_currentReqId;
}

+ (double)getCurrentTimeSec;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSString *currentReqId; // @synthesize currentReqId=_currentReqId;
@property(retain, nonatomic) NSMutableDictionary *lastTranferTimeDict; // @synthesize lastTranferTimeDict=_lastTranferTimeDict;
@property(retain, nonatomic) NSMutableDictionary *connectTimeDict; // @synthesize connectTimeDict=_connectTimeDict;
@property(retain, nonatomic) PlayBadNetModel *badNetModel; // @synthesize badNetModel=_badNetModel;
- (void).cxx_destruct;
- (void)saveRequestId:(id)arg1;
- (id)getBadNetDicForNyx;
- (id)getPostBadNetDic;
- (void)checkAndPostPlayForBadNetwork;
- (void)updatePlayForBadNetworkRealPlayDuration;
- (void)updatePlayForBadNetwork:(int)arg1 withPlayId:(unsigned long long)arg2 withPlaySrc:(id)arg3;
- (void)resumePlayFromBadNetwork:(_Bool)arg1;
- (void)pausePlayForBadNetwork;
- (void)resetBadNetworkStaticData;
- (double)getOutLineDownloadSpeed;
- (double)getOutLineConnectTime;
- (_Bool)isDownloadSpeedExceptional:(id)arg1;
- (_Bool)isConnectedTimeOut:(id)arg1;
- (_Bool)checkAndPostDownloadSpeedExceptional:(id)arg1;
- (_Bool)checkAndPostConnectionTimeOutExceptional:(id)arg1;
- (void)checkAndPostExceptionWithType:(int)arg1 statusCode:(id)arg2 audioUrl:(id)arg3 viaInfo:(id)arg4 connectTime:(double)arg5 downloadSpeed:(double)arg6 cdnDomain:(id)arg7;
- (void)checkAndPostExceptionWithType:(int)arg1 connectTime:(double)arg2 downloadSpeed:(double)arg3 connection:(id)arg4;
- (void)postCDNErrorWithType:(int)arg1 exceptionReason:(id)arg2 newConnection:(id)arg3;
- (void)postCDNErrorWithType:(int)arg1 exceptionReason:(id)arg2 connection:(id)arg3;
- (void)postCDNError:(id)arg1;
- (void)postCDNExceptionWithType:(int)arg1 statusCode:(id)arg2 audioUrl:(id)arg3 respHeader:(id)arg4 connectTime:(double)arg5 downloadSpeed:(double)arg6 cdnDomain:(id)arg7 reqId:(id)arg8;
- (void)postCDNErrorWithType:(int)arg1 exceptionReason:(id)arg2 audioUrl:(id)arg3 respHeader:(id)arg4 errorCode:(long long)arg5 cdnDomain:(id)arg6 reqId:(id)arg7;
- (void)postCDNErrorWithType:(int)arg1 exceptionReason:(id)arg2 request:(id)arg3;
- (void)didFailedRequestTransferDataWithType:(int)arg1 exceptionReson:(id)arg2 requestId:(id)arg3 statusCode:(id)arg4 audioUrl:(id)arg5 viaInfo:(id)arg6 errorCode:(long long)arg7;
- (void)didSucceedRequestTransferDataWithType:(int)arg1 requestId:(id)arg2;
- (void)didRequestTransferDataWithType:(int)arg1 withDataLen:(unsigned long long)arg2 requestId:(id)arg3 audioUrl:(id)arg4 respHeader:(id)arg5 cdnDomain:(id)arg6;
- (void)didFailedRequestConnectWithType:(int)arg1 exceptionReson:(id)arg2 requestId:(id)arg3 audioUrl:(id)arg4 respHeader:(id)arg5 errorCode:(long long)arg6 cdnDomain:(id)arg7;
- (void)didSucceedRequestConnectWithType:(int)arg1 requestId:(id)arg2 statusCode:(id)arg3 audioUrl:(id)arg4 respHeader:(id)arg5 cdnDomain:(id)arg6;
- (void)startRequestConnectWithType:(int)arg1 withRequestID:(id)arg2;
- (id)getRequestConnectID;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

