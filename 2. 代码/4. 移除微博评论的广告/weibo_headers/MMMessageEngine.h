//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseEngine.h"

#import "MIMessageEngine-Protocol.h"

@class MMAudioMessageEngine, MMGeneralFileMessageEngine, MMGroupEngine, MMUnifyFileMessageEngine, MMVideoMessageEngine, NSOperationQueue, NSString;

@interface MMMessageEngine : MMBaseEngine <MIMessageEngine>
{
    MMAudioMessageEngine *_audioEngine;
    MMGeneralFileMessageEngine *_fileEngine;
    MMGroupEngine *_groupEngine;
    MMUnifyFileMessageEngine *_unifyFileEngine;
    MMVideoMessageEngine *_videoEngine;
    NSOperationQueue *_handleStickerQueue;
}

@property(retain, nonatomic) NSOperationQueue *handleStickerQueue; // @synthesize handleStickerQueue=_handleStickerQueue;
@property(retain, nonatomic) MMVideoMessageEngine *videoEngine; // @synthesize videoEngine=_videoEngine;
@property(retain, nonatomic) MMUnifyFileMessageEngine *unifyFileEngine; // @synthesize unifyFileEngine=_unifyFileEngine;
@property(retain, nonatomic) MMGroupEngine *groupEngine; // @synthesize groupEngine=_groupEngine;
@property(retain, nonatomic) MMGeneralFileMessageEngine *fileEngine; // @synthesize fileEngine=_fileEngine;
@property(retain, nonatomic) MMAudioMessageEngine *audioEngine; // @synthesize audioEngine=_audioEngine;
- (void).cxx_destruct;
- (void)commonMessageType:(int)arg1 andDataJson:(id)arg2 completedBlock:(CDUnknownBlockType)arg3;
- (id)queryTrashUserConversationsWithType:(int)arg1 chatIds:(id)arg2;
- (id)queryTrashUserConversationsWithType:(int)arg1;
- (id)queryTrashUserUidsWithType:(int)arg1;
- (void)updateNotTrashUserWithUID:(long long)arg1 completedBlock:(CDUnknownBlockType)arg2;
- (id)queryMessages:(int)arg1 inChat:(long long)arg2 chatType:(int)arg3 beforetime:(long long)arg4 beforemsg:(long long)arg5 aftertime:(long long)arg6 aftermsg:(long long)arg7 limit:(int)arg8;
- (void)sendClearUnreadInfoWithParameter:(id)arg1 completedBlock:(CDUnknownBlockType)arg2;
- (void)deleteGroupMessages;
- (void)deleteSingleMessages;
- (void)deleteAllChatAndMessages;
- (int)fetchCodeFromReponse:(id)arg1 error:(id)arg2;
- (id)fetchErrorDescFromReponse:(id)arg1 error:(id)arg2;
- (void)resendVideoMessage:(id)arg1;
- (void)cancelAllVideoMessages;
- (void)cancelVideoMessage:(id)arg1;
- (void)sendVideoMessage:(id)arg1;
- (void)setUnfollowUnreadCount:(unsigned long long)arg1 time:(long long)arg2 inChat:(long long)arg3 chatType:(int)arg4 completeBlock:(CDUnknownBlockType)arg5;
- (id)getAllStickerResource;
- (id)queryLocalPathOfEasterEggForText:(id)arg1;
- (void)updateStickerLocalPath:(id)arg1;
- (void)saveStickerResource:(id)arg1;
- (void)clearStickerTable;
- (void)updateZanMessageStatus:(_Bool)arg1 forMessage:(id)arg2 inChat:(long long)arg3;
- (_Bool)clearContacts;
- (_Bool)saveContacts:(id)arg1;
- (id)queryRecentContacts:(int)arg1;
- (id)subChatIdsInMessageBoxList;
- (void)blockAllUnfollowPrivateMessage:(_Bool)arg1 completedBlock:(CDUnknownBlockType)arg2;
- (void)recallMessage:(id)arg1 completedBlock:(CDUnknownBlockType)arg2;
- (void)updateFollowStatus:(unsigned long long)arg1 message:(id)arg2;
- (void)immediatelyFollowWithMessage:(id)arg1 completedBlock:(CDUnknownBlockType)arg2;
- (void)postStatusChangedNotificationWithMessage:(id)arg1;
- (void)sendMediaStatusWithMessage:(id)arg1;
- (void)topWithChatsData:(id)arg1 completedBlock:(CDUnknownBlockType)arg2;
- (void)cancelTopWithChatId:(long long)arg1 chatType:(int)arg2 completedBlock:(CDUnknownBlockType)arg3;
- (void)topWithChatId:(long long)arg1 chatType:(int)arg2 completedBlock:(CDUnknownBlockType)arg3;
- (void)sendTopWithRequestBody:(id)arg1 actionType:(_Bool)arg2 completedBlock:(CDUnknownBlockType)arg3;
- (void)didUpdateMessage:(id)arg1 likeState:(long long)arg2;
- (_Bool)deleteMessagesWithMessageArray:(id)arg1;
- (void)deleteServerMessages:(id)arg1 userId:(long long)arg2 messageDeleteType:(unsigned long long)arg3 sendType:(unsigned long long)arg4 keepEntrance:(_Bool)arg5 completedBlcok:(CDUnknownBlockType)arg6;
- (void)screenShotEventNotifyTo:(long long)arg1 completedBlock:(CDUnknownBlockType)arg2;
- (void)notifyMessageReadWithUid:(long long)arg1 messageType:(int)arg2 messageIds:(id)arg3 completedBlock:(CDUnknownBlockType)arg4;
- (_Bool)updateGroupToFansGroup:(id)arg1 completedBlcok:(CDUnknownBlockType)arg2;
- (_Bool)updateFansGroupParentID:(id)arg1 completedBlcok:(CDUnknownBlockType)arg2;
- (_Bool)updateMessages:(id)arg1 readState:(unsigned long long)arg2;
- (void)deleteFansGroupChat:(long long)arg1;
- (void)deleteAllFansGroupChat;
- (_Bool)deleteAllMessageBoxChildConversationsWithParentChatId:(long long)arg1 parentChatType:(int)arg2;
- (_Bool)deleteAllChildConversationsWithParentChatId:(long long)arg1 parentChatType:(int)arg2;
- (void)loadMessageBoxChildConversationFromServerWithUid:(long long)arg1 loginUid:(long long)arg2 cursor:(int)arg3 count:(int)arg4 vp:(int)arg5 tabId:(int)arg6 completBlock:(CDUnknownBlockType)arg7;
- (void)loadSubscriptionChildConversationFromServerWithUid:(long long)arg1 loginUid:(long long)arg2 cursor:(int)arg3 count:(int)arg4 vp:(int)arg5 completBlock:(CDUnknownBlockType)arg6;
- (_Bool)updateParentChatLatestMessageWithChatType:(int)arg1 parentChatId:(long long)arg2 parentChatType:(int)arg3;
- (_Bool)updateUnreadCountForChat:(long long)arg1 chatType:(int)arg2 countToClear:(long long)arg3;
- (void)refreshSecurityCodeForMessage:(id)arg1;
- (void)cancelSecurityForPhotoMessage:(id)arg1;
- (void)cancelSecurityForAudioMessage:(id)arg1;
- (void)resendMessage:(id)arg1 forSecurity:(id)arg2;
- (void)resendAllAudioReadStatus;
- (void)sendAudioReadStatusForGroupMessage:(id)arg1;
- (void)sendAudioReadStatusForMessage:(id)arg1;
- (void)cancelCurrentAudioMessage;
- (void)cancelSecurityForMessage:(id)arg1;
- (void)resendFileMessage:(id)arg1;
- (void)forwardFileMessage:(id)arg1;
- (void)unifyResendFileMessage:(id)arg1;
- (void)cancelUnifyAllUploadFileOperation;
- (void)cancelUploadFileMessage:(id)arg1;
- (void)unifySendFileMessage:(id)arg1;
- (void)sendFileMessage:(id)arg1;
- (void)sendAudioSliceMessage:(id)arg1;
- (void)sendReadStatusForGroupMessages:(id)arg1 group:(long long)arg2;
- (void)sendReadStatusForFansGroup:(id)arg1;
- (void)sendReadStatusForConversation:(id)arg1;
- (void)sendReadStatusForMessage:(id)arg1;
- (void)savePhoto:(id)arg1 message:(id)arg2;
- (id)convertPicInfoJSONString:(id)arg1;
- (void)forwardPageInfoMessage:(id)arg1 chatKey:(id)arg2;
- (void)forwardPageInfoMessageIfNoExtrId:(id)arg1;
- (id)createMessageFromPageInfoMessage:(id)arg1;
- (void)forwardMessage:(id)arg1 fromShare:(id)arg2;
- (void)forwardMessage:(id)arg1;
- (void)resendMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 forward:(_Bool)arg2 security:(id)arg3;
- (void)sendMessage:(id)arg1 forward:(_Bool)arg2 security:(id)arg3 resend:(_Bool)arg4 fromShare:(id)arg5;
- (_Bool)openChatFromMessageBox:(long long)arg1;
- (_Bool)closeChatFromMessageBox:(long long)arg1;
- (_Bool)deleteChatWithoutTop:(long long)arg1 chatType:(int)arg2;
- (_Bool)deleteChatWithoutTop:(long long)arg1;
- (_Bool)deleteChat:(long long)arg1 chatType:(int)arg2;
- (_Bool)deleteChat:(long long)arg1;
- (_Bool)clearUnreadCountForAllChat;
- (_Bool)clearUnreadCountForChat:(long long)arg1 chatType:(int)arg2;
- (_Bool)clearUnreadCountForChat:(long long)arg1;
- (_Bool)updateAttachmentThumbnailUrl:(id)arg1 forMessage:(id)arg2;
- (_Bool)updateAttachmentFileName:(id)arg1 forMessage:(id)arg2;
- (id)queryAllTopChatIds;
- (void)queryAllTopChatInfos:(CDUnknownBlockType)arg1;
- (id)queryAllTopChatInfos;
- (_Bool)updateMarkTime:(long long)arg1 forChat:(long long)arg2 chatType:(int)arg3;
- (_Bool)updateMarkTime:(long long)arg1 forChat:(long long)arg2;
- (_Bool)updateMessageAudioState:(int)arg1 forMessage:(long long)arg2 chatType:(int)arg3;
- (_Bool)updateMessageAudioState:(int)arg1 forMessage:(long long)arg2;
- (_Bool)updateMessageAudioUnread:(_Bool)arg1 forMessage:(long long)arg2 chatId:(long long)arg3 chatType:(int)arg4;
- (_Bool)updateMessageAudioUnread:(_Bool)arg1 forMessage:(long long)arg2;
- (_Bool)updateMessagePageInfo:(id)arg1 forMessage:(long long)arg2 chatId:(long long)arg3 chatType:(int)arg4;
- (_Bool)updateMessagePageInfo:(id)arg1 forMessage:(long long)arg2;
- (void)deleteGroupMessages:(id)arg1 group:(long long)arg2 uiUserInfo:(id)arg3 keepEntrance:(_Bool)arg4;
- (void)deleteGroupChat:(long long)arg1 uiUserInfo:(id)arg2 keepEntrance:(_Bool)arg3;
- (_Bool)deleteDraftInChat:(long long)arg1 chatType:(int)arg2;
- (_Bool)deleteDraftInChat:(long long)arg1;
- (void)deleteMessageBoxMessages:(long long)arg1;
- (_Bool)deleteAllMessages;
- (void)deleteMessages:(long long)arg1 chatType:(int)arg2 keepEntrance:(_Bool)arg3;
- (void)deleteMessages:(long long)arg1 chatType:(int)arg2;
- (void)deleteMessages:(long long)arg1;
- (void)deleteMessage:(id)arg1;
- (_Bool)updateChatOpenedCount:(int)arg1 forChat:(long long)arg2 chatType:(int)arg3;
- (_Bool)updateChatOpenedCount:(int)arg1 forChat:(long long)arg2;
- (_Bool)saveOrUpdateDraft:(id)arg1 inChat:(long long)arg2 chatType:(int)arg3;
- (_Bool)saveOrUpdateDraft:(id)arg1 inChat:(long long)arg2;
- (void)saveOrUpdateChats:(id)arg1 isApi:(_Bool)arg2 isFirstPage:(_Bool)arg3 maxChatTime:(long long)arg4 minChatTime:(long long)arg5;
- (void)saveOrUpdateFansGroupMessageChats:(id)arg1 isApi:(_Bool)arg2 maxChatTime:(long long)arg3 minChatTime:(long long)arg4;
- (void)saveOrUpdateMessageUnfollowChats:(id)arg1 isApi:(_Bool)arg2 maxChatTime:(long long)arg3 minChatTime:(long long)arg4 currentTabId:(int)arg5 page:(int)arg6;
- (void)saveOrUpdateMessageGroupSendChats:(id)arg1 isApi:(_Bool)arg2 maxChatTime:(long long)arg3 minChatTime:(long long)arg4;
- (void)correctionChats:(id)arg1 dbManager:(id)arg2 maxChatTime:(long long)arg3 minChatTime:(long long)arg4;
- (void)correcFansGroupMessageChats:(id)arg1 dbManager:(id)arg2 maxChatTime:(long long)arg3 minChatTime:(long long)arg4;
- (void)updateMessageUnfollowChats:(id)arg1 dbManager:(id)arg2 maxChatTime:(long long)arg3 minChatTime:(long long)arg4 currentTabId:(int)arg5;
- (void)correcMessageGroupSendChats:(id)arg1 dbManager:(id)arg2 maxChatTime:(long long)arg3 minChatTime:(long long)arg4;
- (void)saveOrUpdateChats:(id)arg1 isApi:(_Bool)arg2;
- (void)saveOrUpdateChat:(id)arg1 isApi:(_Bool)arg2;
- (_Bool)updateServerCheckInChat:(id)arg1 oldGlobalId:(long long)arg2 newGlobalId:(long long)arg3;
- (void)saveMessages:(id)arg1;
- (void)saveMessage:(id)arg1;
- (void)savePicInfoWithMessages:(id)arg1;
- (unsigned long long)querySpecialCountWithMaxChatTime:(long long)arg1 minChatTime:(long long)arg2;
- (unsigned long long)querySpecialCountAfterChatTime:(long long)arg1;
- (unsigned long long)queryStickCountWithMaxChatTime:(long long)arg1 minChatTime:(long long)arg2;
- (unsigned long long)queryStickCountAfterChatTime:(long long)arg1;
- (void)correctionAllStickChat:(id)arg1 dbManager:(id)arg2;
- (id)queryNeedCorrectionSpecialChats:(id)arg1 dbManager:(id)arg2;
- (id)queryNeedCorrectionNormalChats:(id)arg1 dbManager:(id)arg2 maxChatTime:(long long)arg3 minChatTime:(long long)arg4;
- (void)deleteNeedCorrectionChats:(id)arg1 dbManager:(id)arg2;
- (void)correctionChatLastMessage:(id)arg1 dbManager:(id)arg2;
- (_Bool)queryServerCheckInChat:(long long)arg1 chatType:(int)arg2 oldGlobalId:(long long)arg3 newGlobalId:(long long)arg4;
- (_Bool)resetSendingMessageAfterLaunch;
- (_Bool)messageBoxExistsMessagesWhithUserId:(long long)arg1;
- (_Bool)messageBoxExistsUser:(long long)arg1;
- (int)unreadStrangersMessageCount;
- (int)apiUnreadStrangersMessageCount;
- (int)unreadMessageCount;
- (int)apiUnreadMessageCount;
- (long long)querySinceIdForChat:(id)arg1;
- (id)queryDraftInChat:(long long)arg1 chatType:(int)arg2;
- (id)queryDraftInChat:(long long)arg1;
- (id)queryChat:(long long)arg1 chatType:(int)arg2;
- (id)queryChat:(long long)arg1;
- (id)queryChatsWithOffset:(int)arg1 limit:(int)arg2 memberLimit:(int)arg3;
- (id)queryChatsWithOffset:(int)arg1 limit:(int)arg2;
- (id)queryChatsWithOffset:(int)arg1 limit:(int)arg2 parentType:(int)arg3;
- (id)queryUnfollowChatsWithOffset:(int)arg1 limit:(int)arg2 tabId:(int)arg3;
- (id)queryChatsWithOffset:(int)arg1 limit:(int)arg2 chatType:(int)arg3;
- (long long)queryKickedGroupCountWithMaxChatTime:(long long)arg1 minChatTime:(long long)arg2;
- (void)fetchMessagesForChat:(id)arg1 maxMessageId:(long long)arg2 offset:(int)arg3 limit:(int)arg4 userBlock:(CDUnknownBlockType)arg5;
- (void)fetchMessagesForChat:(id)arg1 customSinceId:(long long)arg2 maxMessageId:(long long)arg3 offset:(int)arg4 limit:(int)arg5 source:(id)arg6 extra:(id)arg7 userBlock:(CDUnknownBlockType)arg8;
- (void)fetchMessagesForChat:(id)arg1 customSinceId:(long long)arg2 maxMessageId:(long long)arg3 offset:(int)arg4 limit:(int)arg5 source:(id)arg6 userBlock:(CDUnknownBlockType)arg7;
- (void)fetchMessagesForChat:(id)arg1 customSinceId:(long long)arg2 maxMessageId:(long long)arg3 offset:(int)arg4 limit:(int)arg5 userBlock:(CDUnknownBlockType)arg6;
- (id)queryMessagesInChat:(id)arg1 afterMsgId:(long long)arg2 offset:(int)arg3 limit:(int)arg4 userBlock:(CDUnknownBlockType)arg5 senders:(id)arg6;
- (id)queryMessagesInChat:(id)arg1 beforeMsgId:(long long)arg2 offset:(int)arg3 limit:(int)arg4 userBlock:(CDUnknownBlockType)arg5 senders:(id)arg6;
- (void)updateServerCheckInChat:(id)arg1 messages:(id)arg2 sinceId:(long long)arg3 maxMessageId:(long long)arg4 limit:(int)arg5 hasMore:(_Bool)arg6 isFetchNewHistoryMsg:(_Bool)arg7;
- (id)saveMessagesInChat:(id)arg1 respMessages:(id)arg2 userBlock:(CDUnknownBlockType)arg3 senders:(id)arg4;
- (void)fetchChatsWithOffset:(int)arg1 limit:(int)arg2 needCorrection:(_Bool)arg3 userInfo:(id)arg4;
- (id)queryMessages:(id)arg1 afterMsgId:(long long)arg2 offset:(int)arg3 limit:(int)arg4 userBlock:(CDUnknownBlockType)arg5;
- (id)queryMessages:(id)arg1 beforeMsgId:(long long)arg2 offset:(int)arg3 limit:(int)arg4 userBlock:(CDUnknownBlockType)arg5;
- (id)queryMessages:(id)arg1 offset:(int)arg2 limit:(int)arg3 userBlock:(CDUnknownBlockType)arg4;
- (id)initWithCoreProvider:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

