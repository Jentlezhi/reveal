//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMNowPlayingCellModel.h"

@class NSMutableArray, NSString;

@interface XMNPSponsorCellModel : XMNowPlayingCellModel
{
    long long _totalCount;
    unsigned long long _uid;
    NSString *_nickname;
    NSString *_smallLogo;
    long long _rank;
    NSMutableArray *_sponsorMArr;
}

@property(retain, nonatomic) NSMutableArray *sponsorMArr; // @synthesize sponsorMArr=_sponsorMArr;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(copy, nonatomic) NSString *smallLogo; // @synthesize smallLogo=_smallLogo;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;
- (void)changeCurrentUserIndex;
- (void)updateDateWithDic:(id)arg1;
- (id)init;
- (void)dealloc;

@end

