//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, WBConversation;

@protocol MIMessageViewController <NSObject>
- (void)reloadDataAfterLoadLocalRecentMessages:(NSArray *)arg1;
- (void)reloadDataAfterLoadNewMessages:(NSArray *)arg1 isFirstLoad:(_Bool)arg2;
- (void)reloadDataAfterLoadMessages:(NSArray *)arg1 offset:(long long)arg2;
- (void)setHasNewMore:(_Bool)arg1;
- (void)setHasMore:(_Bool)arg1;
- (void)setLocalMessageCount:(long long)arg1;
- (void)setTotalCount:(long long)arg1;
- (void)setMessageCount:(long long)arg1;
- (void)setLocalMessages:(NSArray *)arg1;
- (void)setGroups:(NSMutableArray *)arg1;
- (_Bool)hasNewMore;
- (_Bool)hasMore;
- (long long)totalCount;
- (long long)localMessageCount;
- (long long)messageCount;
- (NSArray *)localMessages;
- (NSMutableArray *)groups;
- (NSMutableDictionary *)users;
- (WBConversation *)chat;

@optional
- (void)checkShowAddoneMessageForFetched:(NSArray *)arg1;
- (NSString *)extraString;
@end

