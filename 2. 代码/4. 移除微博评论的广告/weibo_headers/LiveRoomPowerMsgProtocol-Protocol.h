//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol LiveRoomPowerMsgProtocol <NSObject>

@optional
- (void)requestTopicStatus:(long long)arg1 withTopic:(NSString *)arg2 context:(id)arg3 withCallback:(void (^)(id, NSError *, NSDictionary *))arg4;
- (void)requestTopicUserList:(long long)arg1 withTopic:(NSString *)arg2 withIndex:(long long)arg3 pageSize:(long long)arg4 context:(id)arg5 withCallback:(void (^)(id, NSError *, NSDictionary *))arg6;
- (void)requestHisMsgList:(long long)arg1 withTopic:(NSString *)arg2 withCount:(long long)arg3 context:(id)arg4 withCallback:(void (^)(id, NSError *, NSDictionary *))arg5;
- (void)requestMsgList:(long long)arg1 withTopic:(NSString *)arg2 withTime:(long long)arg3 context:(id)arg4 withCallback:(void (^)(id, NSError *, NSDictionary *))arg5;
- (void)sendMessage:(long long)arg1 withMsg:(id)arg2 context:(id)arg3 withCallback:(void (^)(id, NSError *, NSDictionary *))arg4;
- (void)sendTextMessage:(long long)arg1 withMsg:(id)arg2 context:(id)arg3 withCallback:(void (^)(id, NSError *, NSDictionary *))arg4;
- (void)count:(long long)arg1 withTopic:(NSString *)arg2 withAck:(_Bool)arg3 withParam:(NSDictionary *)arg4 context:(id)arg5 withCallback:(void (^)(id, NSError *, NSDictionary *))arg6;
- (void)unSubscribe:(long long)arg1 withTopic:(NSString *)arg2 from:(NSString *)arg3 bizKey:(NSString *)arg4 bizTag:(NSString *)arg5 context:(id)arg6 withCallback:(void (^)(id, NSError *, NSDictionary *))arg7;
- (void)unSubscribe:(long long)arg1 withTopic:(NSString *)arg2 from:(NSString *)arg3 bizTag:(NSString *)arg4 context:(id)arg5 withCallback:(void (^)(id, NSError *, NSDictionary *))arg6;
- (void)unSubscribe:(long long)arg1 withTopic:(NSString *)arg2 from:(NSString *)arg3 context:(id)arg4 withCallback:(void (^)(id, NSError *, NSDictionary *))arg5;
- (void)subscribe:(long long)arg1 withTopic:(NSString *)arg2 from:(NSString *)arg3 bizKey:(NSString *)arg4 bizTag:(NSString *)arg5 context:(id)arg6 withCallback:(void (^)(id, NSError *, NSDictionary *))arg7;
- (void)forceSubscribe:(long long)arg1 withTopic:(NSString *)arg2 from:(NSString *)arg3 bizTag:(NSString *)arg4 context:(id)arg5 withCallback:(void (^)(id, NSError *, NSDictionary *))arg6;
- (void)subscribe:(long long)arg1 withTopic:(NSString *)arg2 from:(NSString *)arg3 bizTag:(NSString *)arg4 context:(id)arg5 withCallback:(void (^)(id, NSError *, NSDictionary *))arg6;
- (void)subscribe:(long long)arg1 withTopic:(NSString *)arg2 from:(NSString *)arg3 context:(id)arg4 withCallback:(void (^)(id, NSError *, NSDictionary *))arg5;
- (void)report:(long long)arg1 code:(long long)arg2 msg:(id)arg3;
- (void)setMsgFetchMode:(long long)arg1 mode:(long long)arg2;
- (void)registeBiz:(long long)arg1 bizKey:(NSString *)arg2 callback:(void (^)(NSError *, NSDictionary *))arg3;
- (void)registeBiz:(long long)arg1 callback:(void (^)(NSError *, NSDictionary *))arg2;
- (long long)tbLiveMsgBizCode;
- (void)tBLiveMessageRegister;
- (_Bool)registerMessageKitConfig;
- (void)startAccsAfterDefaultBindAppWithAppleToken:(NSData *)arg1 callBack:(void (^)(NSError *, NSDictionary *))arg2;
- (void)startAccsInitByHost:(NSString *)arg1 afterDefaultBindAppWithAppleToken:(NSData *)arg2 callBack:(void (^)(NSError *, NSDictionary *))arg3;
@end

