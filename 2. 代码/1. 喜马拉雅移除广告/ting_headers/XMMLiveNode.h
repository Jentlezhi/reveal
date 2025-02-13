//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseNode.h"

@class NSString;

@interface XMMLiveNode : XMMBaseNode
{
    NSString *_liveCoverUrl;
    NSString *_title;
    long long _roomId;
    long long _uid;
    NSString *_name;
    long long _liveType;
    long long _liveRecordId;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) long long liveRecordId; // @synthesize liveRecordId=_liveRecordId;
@property(nonatomic) long long liveType; // @synthesize liveType=_liveType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *liveCoverUrl; // @synthesize liveCoverUrl=_liveCoverUrl;
- (void).cxx_destruct;
- (id)BBSRequestDictionary;
- (void)didInitialize;
- (unsigned long long)resourceId;

@end

