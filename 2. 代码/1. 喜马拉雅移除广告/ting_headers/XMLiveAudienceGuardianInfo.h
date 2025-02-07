//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSString, XMLiveGuardianFriendshipInfo, XMLiveGuardianTaskCompleteInfo;

@interface XMLiveAudienceGuardianInfo : XMModel
{
    _Bool _hasJoin;
    _Bool _hasGold;
    _Bool _onceJoinNormal;
    _Bool _onceJoinGold;
    _Bool _online;
    NSString *_anchorCoverPath;
    NSString *_anchorName;
    unsigned long long _anchorUid;
    unsigned long long _anchorRoomId;
    NSString *_clubName;
    NSString *_goldName;
    unsigned long long _totalMember;
    unsigned long long _totalGold;
    unsigned long long _totalNormal;
    unsigned long long _dailyFriendship;
    unsigned long long _amount;
    unsigned long long _anchorRank;
    unsigned long long _remainGoldMills;
    unsigned long long _remainNormalMills;
    long long _continueMills;
    XMLiveGuardianFriendshipInfo *_friendshipInfo;
    XMLiveGuardianTaskCompleteInfo *_taskCompleteInfo;
    NSArray *_rankList;
    NSString *_rewardWords;
}

+ (id)xmm_modelContainerPropertyGenericClass;
+ (id)xmm_modelCustomPropertyMapper;
- (void).cxx_destruct;
@property(nonatomic) _Bool online; // @synthesize online=_online;
@property(retain, nonatomic) NSString *rewardWords; // @synthesize rewardWords=_rewardWords;
@property(retain, nonatomic) NSArray *rankList; // @synthesize rankList=_rankList;
@property(retain, nonatomic) XMLiveGuardianTaskCompleteInfo *taskCompleteInfo; // @synthesize taskCompleteInfo=_taskCompleteInfo;
@property(retain, nonatomic) XMLiveGuardianFriendshipInfo *friendshipInfo; // @synthesize friendshipInfo=_friendshipInfo;
@property(nonatomic) long long continueMills; // @synthesize continueMills=_continueMills;
@property(nonatomic) unsigned long long remainNormalMills; // @synthesize remainNormalMills=_remainNormalMills;
@property(nonatomic) unsigned long long remainGoldMills; // @synthesize remainGoldMills=_remainGoldMills;
@property(nonatomic) unsigned long long anchorRank; // @synthesize anchorRank=_anchorRank;
@property(nonatomic) unsigned long long amount; // @synthesize amount=_amount;
@property(nonatomic) _Bool onceJoinGold; // @synthesize onceJoinGold=_onceJoinGold;
@property(nonatomic) _Bool onceJoinNormal; // @synthesize onceJoinNormal=_onceJoinNormal;
@property(nonatomic) _Bool hasGold; // @synthesize hasGold=_hasGold;
@property(nonatomic) _Bool hasJoin; // @synthesize hasJoin=_hasJoin;
@property(nonatomic) unsigned long long dailyFriendship; // @synthesize dailyFriendship=_dailyFriendship;
@property(nonatomic) unsigned long long totalNormal; // @synthesize totalNormal=_totalNormal;
@property(nonatomic) unsigned long long totalGold; // @synthesize totalGold=_totalGold;
@property(nonatomic) unsigned long long totalMember; // @synthesize totalMember=_totalMember;
@property(retain, nonatomic) NSString *goldName; // @synthesize goldName=_goldName;
@property(retain, nonatomic) NSString *clubName; // @synthesize clubName=_clubName;
@property(nonatomic) unsigned long long anchorRoomId; // @synthesize anchorRoomId=_anchorRoomId;
@property(nonatomic) unsigned long long anchorUid; // @synthesize anchorUid=_anchorUid;
@property(retain, nonatomic) NSString *anchorName; // @synthesize anchorName=_anchorName;
@property(retain, nonatomic) NSString *anchorCoverPath; // @synthesize anchorCoverPath=_anchorCoverPath;

@end

