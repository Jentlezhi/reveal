//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMLoadMessageUtility : NSObject
{
}

+ (void)replaceMessage:(id)arg1 withMessage:(id)arg2;
+ (void)appendLatestMessageForNewMessageReceived:(id)arg1 message:(id)arg2;
+ (_Bool)appendNewMessage:(id)arg1 lastmessage:(id)arg2;
+ (void)loadLocalRecentMessages:(id)arg1 limitCount:(int)arg2;
+ (void)loadNewMessages:(id)arg1 withFetchMessagesInfo:(id)arg2;
+ (void)loadMessages:(id)arg1 withFetchMessagesInfo:(id)arg2;
+ (_Bool)needRefreshNewMessage:(id)arg1 withFetchMessagesInfo:(id)arg2;
+ (_Bool)needRefreshMessage:(id)arg1 withFetchMessagesInfo:(id)arg2;
+ (void)loadMoreNewMessage:(id)arg1 limitCount:(int)arg2 afterMsgId:(long long)arg3;
+ (void)loadMoreNewMessage:(id)arg1 limitCount:(int)arg2;
+ (void)loadMoreMessage:(id)arg1 limitCount:(int)arg2 tabId:(int)arg3 requireTab:(int)arg4;
+ (void)loadMoreMessage:(id)arg1 limitCount:(int)arg2;
+ (void)loadMoreMessage:(id)arg1 tabId:(int)arg2 requireTab:(int)arg3;
+ (void)loadMoreMessage:(id)arg1;
+ (void)loadNewMessages:(id)arg1 withNewMessages:(id)arg2;
+ (void)loadMessages:(id)arg1 withMessage:(id)arg2;
+ (void)loadMessages:(id)arg1 withTabId:(int)arg2 requireTab:(int)arg3;
+ (void)loadMessages:(id)arg1;
+ (void)fetchMessages:(id)arg1 sinceId:(long long)arg2 maxMessageId:(long long)arg3 offset:(int)arg4 limit:(int)arg5 source:(id)arg6 extra:(id)arg7 userBlock:(CDUnknownBlockType)arg8 tabId:(int)arg9 requireTab:(int)arg10;
+ (void)fetchMessages:(id)arg1 sinceId:(long long)arg2 maxMessageId:(long long)arg3 offset:(int)arg4 limit:(int)arg5 source:(id)arg6 userBlock:(CDUnknownBlockType)arg7 tabId:(int)arg8 requireTab:(int)arg9;
+ (void)fetchMessages:(id)arg1 sinceId:(long long)arg2 maxMessageId:(long long)arg3 offset:(int)arg4 limit:(int)arg5 source:(id)arg6 userBlock:(CDUnknownBlockType)arg7;
+ (void)fetchMessages:(id)arg1 sinceId:(long long)arg2 maxMessageId:(long long)arg3 offset:(int)arg4 limit:(int)arg5 userBlock:(CDUnknownBlockType)arg6;
+ (void)fetchMessages:(id)arg1 sinceId:(long long)arg2 offset:(int)arg3 limit:(int)arg4 source:(id)arg5 userBlock:(CDUnknownBlockType)arg6;
+ (void)fetchMessages:(id)arg1 sinceId:(long long)arg2 offset:(int)arg3 limit:(int)arg4 userBlock:(CDUnknownBlockType)arg5;
+ (void)fetchMessages:(id)arg1 maxMessageId:(long long)arg2 offset:(int)arg3 limit:(int)arg4 source:(id)arg5 userBlock:(CDUnknownBlockType)arg6;
+ (void)fetchMessages:(id)arg1 maxMessageId:(long long)arg2 offset:(int)arg3 limit:(int)arg4 userBlock:(CDUnknownBlockType)arg5;
+ (void)loadLocalMessages:(id)arg1 messageCount:(long long)arg2;
+ (void)loadLocalMessages:(id)arg1 messageCount:(long long)arg2 customSinceId:(long long *)arg3;
+ (void)loadLocalMessages:(id)arg1 messageCount:(long long)arg2 customSinceId:(long long *)arg3 tabId:(int)arg4;

@end

