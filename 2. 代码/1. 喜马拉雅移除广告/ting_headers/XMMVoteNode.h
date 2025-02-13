//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseNode.h"

@class NSArray, NSDate, NSString;

@interface XMMVoteNode : XMMBaseNode
{
    _Bool _isExpired;
    _Bool _isFolded;
    NSString *_title;
    long long _maxSelectedNum;
    double _endTs;
    NSArray *_options;
    unsigned long long _voteId;
    long long _voterCount;
    double _createdTs;
    NSArray *_selectedVoteItemArray;
    NSDate *_endDate;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSArray *selectedVoteItemArray; // @synthesize selectedVoteItemArray=_selectedVoteItemArray;
@property(nonatomic) _Bool isFolded; // @synthesize isFolded=_isFolded;
@property(nonatomic) double createdTs; // @synthesize createdTs=_createdTs;
@property(nonatomic) long long voterCount; // @synthesize voterCount=_voterCount;
@property(nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
@property(nonatomic) unsigned long long voteId; // @synthesize voteId=_voteId;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(nonatomic) double endTs; // @synthesize endTs=_endTs;
@property(nonatomic) long long maxSelectedNum; // @synthesize maxSelectedNum=_maxSelectedNum;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)BBSRequestDictionary;
- (void)copyVariableInfoFrom:(id)arg1;
- (_Bool)canVote;
- (_Bool)hasVoted;
- (long long)maximumVoteCount;
- (long long)totalVoteCount;
- (unsigned long long)resourceId;
- (void)didInitialize;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

