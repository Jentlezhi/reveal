//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveJSONModel.h"

@class NSDictionary;

@interface TBLiveMessageJoinNotifyWithProtobuf : TBLiveJSONModel
{
    long long _totalCount;
    long long _onlineCount;
    NSDictionary *_addUsers;
    unsigned long long _addUsers_Count;
    long long _pageViewCount;
}

+ (id)parseFromData:(id)arg1 error:(id *)arg2;
@property(nonatomic) long long pageViewCount; // @synthesize pageViewCount=_pageViewCount;
@property(nonatomic) unsigned long long addUsers_Count; // @synthesize addUsers_Count=_addUsers_Count;
@property(retain, nonatomic) NSDictionary *addUsers; // @synthesize addUsers=_addUsers;
@property(nonatomic) long long onlineCount; // @synthesize onlineCount=_onlineCount;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
- (void).cxx_destruct;

@end

