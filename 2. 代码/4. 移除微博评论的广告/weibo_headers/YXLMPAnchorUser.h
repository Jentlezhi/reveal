//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSString;

@interface YXLMPAnchorUser : YXModel
{
    _Bool _invited;
    long long _memberId;
    NSString *_avatar;
    NSString *_nickName;
    NSString *_scid;
    long long _level;
    long long _ytypevt;
    long long _liveStatus;
}

@property(nonatomic) _Bool invited; // @synthesize invited=_invited;
@property(nonatomic) long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(nonatomic) long long ytypevt; // @synthesize ytypevt=_ytypevt;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) long long memberId; // @synthesize memberId=_memberId;
- (void).cxx_destruct;

@end

