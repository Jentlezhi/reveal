//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, SNHTTPRequestOperationWrapper, WBHCOlympicBgData, WBHCRankData;

@interface WBHealthDailyRankDataEngine : NSObject
{
    long long _currenPage;
    unsigned long long _type;
    SNHTTPRequestOperationWrapper *_request;
    struct {
        unsigned int loading:1;
        unsigned int hasmore:1;
    } _flags;
    NSMutableArray *_rankList;
    NSMutableArray *_inviteList;
    NSMutableArray *_recommendList;
    NSMutableArray *_olympicRankList;
    NSDate *_createDate;
    SNHTTPRequestOperationWrapper *_request_olympic_invite;
    SNHTTPRequestOperationWrapper *_request_olympic_sendmedal;
    NSDate *_date;
    WBHCRankData *_myRankData;
    WBHCOlympicBgData *_bg_data;
}

+ (id)engineWithType:(unsigned long long)arg1 date:(id)arg2;
@property(retain, nonatomic) WBHCOlympicBgData *bg_data; // @synthesize bg_data=_bg_data;
@property(retain, nonatomic) WBHCRankData *myRankData; // @synthesize myRankData=_myRankData;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)olympic_AwardMedalWithUserId:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)olympic_InviteWithCompletion:(CDUnknownBlockType)arg1;
- (void)userHasInvited:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)follow:(id)arg1 extra:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didFollowContactNotification:(id)arg1;
- (void)loadDailyRankingCachesForAccount:(id)arg1;
- (void)saveDailyRankingJSONToFile:(id)arg1 account:(id)arg2;
- (id)dailyRankingCacheFilePathForAccount:(id)arg1;
- (id)dailyRankingCacheFolderPath;
- (void)resetRankForRankList;
- (unsigned long long)addSafeRankData:(id)arg1;
- (void)addSafeRankList:(id)arg1;
- (void)cancelLoad;
- (id)fakeInviteCandidateList;
- (id)fakeRecommendationListDict;
- (void)loadRankingDataExtra:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithType:(unsigned long long)arg1 date:(id)arg2;
- (id)init;
- (void)dealloc;
@property(nonatomic) long long currentPage;
- (id)olympicRankList;
- (id)inviteList;
- (id)recommondList;
- (id)rankList;
- (_Bool)isToday;
@property(readonly, nonatomic) _Bool loading;

@end

