//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue;
@protocol OS_dispatch_queue;

@interface XChatDatabaseUtil : NSObject
{
    FMDatabaseQueue *_dataBaseQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_databaseMessageQueue;
}

+ (id)dbFilePath;
+ (id)instance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *databaseMessageQueue; // @synthesize databaseMessageQueue=_databaseMessageQueue;
- (void).cxx_destruct;
- (void)loadMsgCenterSessionListBlock:(CDUnknownBlockType)arg1 withType:(long long)arg2;
- (void)insetPrivateSessions:(id)arg1 groupSessions:(id)arg2 comletion:(CDUnknownBlockType)arg3;
- (void)openCurrentUserDB;
- (id)init;
- (void)upgradeGroupDbTable:(id)arg1;
- (_Bool)createGroupVersionTableForDB:(id)arg1;
- (_Bool)updateVersion:(long long)arg1 groupId:(long long)arg2 database:(id)arg3;
- (long long)getVersionForGroupId:(long long)arg1 database:(id)arg2;
- (void)deleleGroupAllMembers:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadGroupMemberInfo:(unsigned long long)arg1 userId:(unsigned long long)arg2 db:(id)arg3;
- (void)loadGroupMemberInfo:(unsigned long long)arg1 userId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)groupMemberFromResult:(id)arg1;
- (_Bool)createGroupMemberTable:(unsigned long long)arg1 database:(id)arg2;
- (void)getVersionForGroupId:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)updateGroupNickname:(id)arg1 ofUser:(unsigned long long)arg2 groupId:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadGroupMembers:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertGroupMembers:(id)arg1 version:(long long)arg2 groupId:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)requestGroupUserInfo:(long long)arg1 forGroup:(unsigned long long)arg2;
- (void)updateLastContentForGroup:(id)arg1 item:(id)arg2 text:(id)arg3;
- (void)updateLatestContentForGroup:(id)arg1 fromItem:(id)arg2;
- (id)groupMessageFromResult:(id)arg1;
- (id)loadGroupMessages:(unsigned long long)arg1 unReadMsgCount:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 index:(long long)arg4 db:(id)arg5;
- (_Bool)recallGroupMsgId:(long long)arg1 content:(id)arg2 group:(unsigned long long)arg3 db:(id)arg4;
- (_Bool)updateGroupMsgId:(long long)arg1 newId:(long long)arg2 group:(unsigned long long)arg3 db:(id)arg4;
- (_Bool)createGroupMessageTable:(unsigned long long)arg1 database:(id)arg2;
- (_Bool)createGroupSessionTable:(id)arg1;
- (_Bool)insertGroupSessionInfo:(id)arg1 db:(id)arg2;
- (id)groupSessionFromResult:(id)arg1;
- (id)loadMsgCenterGroupSessions:(id)arg1;
- (void)deleteGroupMessage:(id)arg1 fromGroup:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)recallGroupMsgId:(long long)arg1 group:(unsigned long long)arg2;
- (void)updateGroupMsgId:(long long)arg1 newId:(long long)arg2 group:(unsigned long long)arg3;
- (void)insertGroupMessages:(id)arg1 groupId:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)loadGroupMessages:(unsigned long long)arg1 msgId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadGroupMessages:(unsigned long long)arg1 unReadMsgCount:(unsigned long long)arg2 pageSize:(unsigned long long)arg3 index:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)deleteGroupSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearGroupSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadRecentGroupSessions:(id)arg1;
- (void)updateSubscribeSessionUnreadCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSubscribeWithUid:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribeUid:(long long)arg1 toFollow:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)createSubscribeSessionTable:(id)arg1;
- (_Bool)insertSubScibeSessionsSync:(id)arg1;
- (void)insertSubScribeSessions:(id)arg1 ompletion:(CDUnknownBlockType)arg2;
- (_Bool)insertSubScribeSesionSync:(id)arg1 sessions:(id)arg2;
- (void)loadSubscribeSessions:(CDUnknownBlockType)arg1;
- (_Bool)checkIsExitTable:(id)arg1 db:(id)arg2;
- (void)upgradePrivateDbTable:(id)arg1;
- (void)updatetableForVersion2:(id)arg1;
- (_Bool)updatePrivateMsgId:(long long)arg1 newId:(long long)arg2 toUid:(unsigned long long)arg3 db:(id)arg4;
- (id)sessionFromResult:(id)arg1;
- (id)loadRecentPrivateSessions:(id)arg1;
- (_Bool)insertSessionInfo:(id)arg1 db:(id)arg2;
- (_Bool)createRecentSessionTable:(id)arg1;
- (id)messageFromResult:(id)arg1;
- (_Bool)createTableForChatMessagesWithUser:(long long)arg1 database:(id)arg2;
- (long long)countOfSendMessage:(long long)arg1 db:(id)arg2;
- (void)updateLatestContentForChat:(id)arg1 fromItem:(id)arg2;
- (id)loadPrivateChatMessagesFromUidList:(id)arg1 subUid:(long long)arg2 pageSize:(long long)arg3 index:(long long)arg4 db:(id)arg5;
- (id)loadPrivateChatMessages:(long long)arg1 subUid:(long long)arg2 pageSize:(long long)arg3 index:(long long)arg4 db:(id)arg5;
- (void)updatePMsgContent:(id)arg1 toUid:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadNoticePrivateSessionsBlock:(CDUnknownBlockType)arg1;
- (void)loadUnFollowPrivateSessionsBlock:(CDUnknownBlockType)arg1;
- (void)loadPrivateSessions:(CDUnknownBlockType)arg1 withBizType:(long long)arg2;
- (id)loadMsgCenterPrivateSessions:(id)arg1 withType:(long long)arg2;
- (void)deletePrivateSessions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearPrivateSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deletePrivateChatMessage:(id)arg1 toUid:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePrivateMsgId:(long long)arg1 newId:(long long)arg2 toUid:(unsigned long long)arg3;
- (void)insertPrivateChatMessages:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)loadPrivateChatMessages:(id)arg1 subUid:(long long)arg2 pageSize:(long long)arg3 index:(long long)arg4 completion:(CDUnknownBlockType)arg5;

@end

