//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMNoReadItem : NSObject
{
    _Bool _favAlbumUpdate;
    _Bool _hasMutedMessages;
    _Bool _showNewUserGiftMessage;
    _Bool _isShowCommunityRed;
    int _events;
    int _messages;
    int _leters;
    int _contents;
    int _trackFeedUnreadCount;
    int _noReadFollowers;
    int _friends;
    int _newZoneCommentCount;
    int _newComments;
    int _squareTabUnreadItemCount;
    int _noReadAskAndAnswerMsgs;
    int _albumNewCommentCount;
    long long _unreadSysMsgCount;
    long long _communityType;
    NSString *_communityDetail;
    long long _tingFriendMessageCount;
    long long _soundChatMessageCount;
}

@property(nonatomic) long long soundChatMessageCount; // @synthesize soundChatMessageCount=_soundChatMessageCount;
@property(nonatomic) long long tingFriendMessageCount; // @synthesize tingFriendMessageCount=_tingFriendMessageCount;
@property(nonatomic) _Bool isShowCommunityRed; // @synthesize isShowCommunityRed=_isShowCommunityRed;
@property(copy, nonatomic) NSString *communityDetail; // @synthesize communityDetail=_communityDetail;
@property(nonatomic) long long communityType; // @synthesize communityType=_communityType;
@property(nonatomic) long long unreadSysMsgCount; // @synthesize unreadSysMsgCount=_unreadSysMsgCount;
@property(nonatomic) _Bool showNewUserGiftMessage; // @synthesize showNewUserGiftMessage=_showNewUserGiftMessage;
@property(nonatomic) _Bool hasMutedMessages; // @synthesize hasMutedMessages=_hasMutedMessages;
@property(nonatomic) int albumNewCommentCount; // @synthesize albumNewCommentCount=_albumNewCommentCount;
@property(nonatomic) int noReadAskAndAnswerMsgs; // @synthesize noReadAskAndAnswerMsgs=_noReadAskAndAnswerMsgs;
@property(nonatomic) int squareTabUnreadItemCount; // @synthesize squareTabUnreadItemCount=_squareTabUnreadItemCount;
@property(nonatomic) int newComments; // @synthesize newComments=_newComments;
@property(nonatomic) _Bool favAlbumUpdate; // @synthesize favAlbumUpdate=_favAlbumUpdate;
@property(nonatomic) int newZoneCommentCount; // @synthesize newZoneCommentCount=_newZoneCommentCount;
@property(nonatomic) int friends; // @synthesize friends=_friends;
@property(nonatomic) int noReadFollowers; // @synthesize noReadFollowers=_noReadFollowers;
@property(nonatomic) int trackFeedUnreadCount; // @synthesize trackFeedUnreadCount=_trackFeedUnreadCount;
@property(nonatomic) int contents; // @synthesize contents=_contents;
@property(nonatomic) int leters; // @synthesize leters=_leters;
@property(nonatomic) int messages; // @synthesize messages=_messages;
@property(nonatomic) int events; // @synthesize events=_events;
- (void).cxx_destruct;
- (void)updatePropertiesFromDictionary:(id)arg1;

@end

