//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMRankgroupModel : XMModel
{
    _Bool _selelctecd;
    long long _categoryId;
    NSString *_contentType;
    NSString *_displayName;
    long long _rankClusterId;
    long long _rankingListId;
    NSString *_rankingRule;
}

@property(nonatomic) _Bool selelctecd; // @synthesize selelctecd=_selelctecd;
@property(retain, nonatomic) NSString *rankingRule; // @synthesize rankingRule=_rankingRule;
@property(nonatomic) long long rankingListId; // @synthesize rankingListId=_rankingListId;
@property(nonatomic) long long rankClusterId; // @synthesize rankClusterId=_rankClusterId;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;

@end

