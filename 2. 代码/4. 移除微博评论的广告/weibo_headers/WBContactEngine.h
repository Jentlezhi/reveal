//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, SNHTTPRequestOperationWrapper, WBResultSet;
@protocol WBContactEngineDelegate;

@interface WBContactEngine : NSObject
{
    id <WBContactEngineDelegate> delegate;
    WBResultSet *followersResultSet;
    WBResultSet *searchFollowersResultSet;
    WBResultSet *searchUsersResultSet;
    WBResultSet *meyouGuideAddResultSet;
    WBResultSet *meyouGuideRecomResultSet;
    _Bool _shouldReturnAddMeyou;
    _Bool _meyouPageCount;
    SNHTTPRequestOperationWrapper *requestOperationWrapper;
    SNHTTPRequestOperationWrapper *refreshContactsOperationWrapper;
    NSMutableDictionary *_operationWrappers;
    NSMutableArray *_userinfos;
}

+ (void)guestFollowingsCountWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (long long)readGuestFollowersCount;
+ (void)saveGuestFollowingCount:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *userinfos; // @synthesize userinfos=_userinfos;
@property(retain, nonatomic) WBResultSet *meyouGuideAddResultSet; // @synthesize meyouGuideAddResultSet;
@property(retain, nonatomic) WBResultSet *meyouGuideRecomResultSet; // @synthesize meyouGuideRecomResultSet;
@property(retain, nonatomic) NSMutableDictionary *operationWrappers; // @synthesize operationWrappers=_operationWrappers;
@property(nonatomic) __weak id <WBContactEngineDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)getUserListGroupsWithExtraParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMoreMeyouGuideListWithExtraParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMeyouGuideListWithAddMeyou:(_Bool)arg1 pageCount:(int)arg2 extraParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)getRidOfExistItemInResult:(id)arg1 withNewArray:(id)arg2;
- (void)_getMeyouGuideListWithAddMeyou:(_Bool)arg1 pageCount:(int)arg2 extraParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendBatchMeyouInvitation:(id)arg1 descriptionContent:(id)arg2 extraParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cancelRequest;
- (_Bool)isLoadingRequest;
- (void)cancelMeyouInviteForContact:(id)arg1 extraParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeContactFromMeyou:(id)arg1 extraParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)meyouGroupID;
- (void)sendMeyouInviteToContact:(id)arg1 extraParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeContact:(id)arg1 fromGroup:(id)arg2 extraParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addContact:(id)arg1 toGroup:(id)arg2 extraParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)postCurrentSelectedGroupIDs:(id)arg1 fromBeforeSelectedGroupIDs:(id)arg2 groupNames:(id)arg3 forContact:(id)arg4 extraParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)loadGroupSelectionForContact:(id)arg1 extraParameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)groupSelectionsResponse:(id)arg1 fromV4API:(_Bool)arg2 forContact:(id)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)unblockContact:(id)arg1 extraParameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unblockContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)blockContact:(id)arg1 extraParameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)blockContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeFollower:(id)arg1 extraParameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeFollower:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unfollowContact:(id)arg1 extraParameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unfollowContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)followContact:(id)arg1 extraParameters:(id)arg2 startBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 completionHandlerRecommend:(CDUnknownBlockType)arg5;
- (void)followContact:(id)arg1 extraParameters:(id)arg2 startBlock:(CDUnknownBlockType)arg3 completionHandlerRecommend:(CDUnknownBlockType)arg4;
- (void)followContact:(id)arg1 extraParameters:(id)arg2 startBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)followContactWithRecommendInfo:(id)arg1 extraParameters:(id)arg2 startBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)followContact:(id)arg1 extraParameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)followContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unfollowWithCount:(long long)arg1;
- (void)followWithCount:(long long)arg1;
- (void)cancelRefreshingContacts;
- (id)refreshContactsWithExtraParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processSearchedUsers:(id)arg1;
- (void)searchMoreUsersByCurrentKeyword;
- (void)searchMoreUsersByCurrentKeywordWithExtraParameters:(id)arg1;
- (void)searchUsersByKeyword:(id)arg1 withPageSize:(unsigned long long)arg2;
- (void)searchUsersByKeyword:(id)arg1;
- (void)searchUsersByKeyword:(id)arg1 withPageSize:(unsigned long long)arg2 withExtraParameters:(id)arg3;
- (void)searchUsersByKeyword:(id)arg1 withExtraParameters:(id)arg2;
- (void)searchUsersFromServerWithExtraParameters:(id)arg1;
- (void)quickSearchByKeyword:(id)arg1;
- (void)cancelPreviousQuickSearchRequest;
- (void)followerDidRemove:(id)arg1;
- (void)processServerFollowers:(id)arg1;
- (void)cancelRemovingFollower:(id)arg1;
- (void)removeFollower:(id)arg1 extraParameters:(id)arg2;
- (void)removeFollower:(id)arg1;
- (_Bool)cancelLoadingFollowers;
- (id)loadFollowersForUserID:(id)arg1 page:(long long)arg2 parameters:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)networkClient;
- (long long)defaultPageSize;
- (void)dealloc;
- (id)init;

@end

