//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class RMKtvModelWaitUser;

@interface RMKtvWaitUserUpdate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long appId; // @dynamic appId;
@property(nonatomic) _Bool hasAppId; // @dynamic hasAppId;
@property(nonatomic) _Bool hasIsJoin; // @dynamic hasIsJoin;
@property(nonatomic) _Bool hasRoomId; // @dynamic hasRoomId;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) _Bool hasUserType; // @dynamic hasUserType;
@property(nonatomic) _Bool hasWaitUser; // @dynamic hasWaitUser;
@property(nonatomic) _Bool isJoin; // @dynamic isJoin;
@property(nonatomic) unsigned long long roomId; // @dynamic roomId;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(nonatomic) int userType; // @dynamic userType;
@property(retain, nonatomic) RMKtvModelWaitUser *waitUser; // @dynamic waitUser;

@end

