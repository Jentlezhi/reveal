//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMLiveRoomUserInfo : NSObject
{
    _Bool _isVerify;
    NSString *_avatar;
    NSString *_nickname;
    long long _uid;
}

+ (id)modelCustomPropertyMapper;
- (void).cxx_destruct;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) _Bool isVerify; // @synthesize isVerify=_isVerify;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;

@end

