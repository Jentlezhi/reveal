//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMCommentUserInfo.h"

@interface XMMUserInfo : XMCommentUserInfo
{
    _Bool _isVerified;
    _Bool _isBanned;
    _Bool _isAdmin;
    long long _anchorGrade;
    double _bannedEndTime;
    unsigned long long _memberType;
}

+ (id)fromPerson:(id)arg1;
+ (id)modelCustomPropertyMapper;
@property(nonatomic) unsigned long long memberType; // @synthesize memberType=_memberType;
@property(nonatomic) _Bool isAdmin; // @synthesize isAdmin=_isAdmin;
@property(nonatomic) double bannedEndTime; // @synthesize bannedEndTime=_bannedEndTime;
@property(nonatomic) _Bool isBanned; // @synthesize isBanned=_isBanned;
@property(nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(nonatomic) long long anchorGrade; // @synthesize anchorGrade=_anchorGrade;
- (id)attributedNicknameStringWithFont:(id)arg1 textColor:(id)arg2 theme:(id)arg3;
- (id)attributedNicknameStringWithFont:(id)arg1 textColor:(id)arg2 communityType:(long long)arg3;
- (id)attributedNicknameStringWithFont:(id)arg1 textColor:(id)arg2;
- (id)attributedNicknameString;
@property(nonatomic) unsigned long long type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isManager;
- (_Bool)hasJoined;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;
- (id)toPerson;

@end

