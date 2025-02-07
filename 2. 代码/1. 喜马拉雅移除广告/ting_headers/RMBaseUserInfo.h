//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSString, RMBaseFansCard;

@interface RMBaseUserInfo : GPBMessage
{
}

+ (id)descriptor;
- (id)convertToMsgModel;

// Remaining properties
@property(nonatomic) int bubbleType; // @dynamic bubbleType;
@property(retain, nonatomic) RMBaseFansCard *fansCard; // @dynamic fansCard;
@property(nonatomic) int hangerType; // @dynamic hangerType;
@property(nonatomic) _Bool hasBubbleType; // @dynamic hasBubbleType;
@property(nonatomic) _Bool hasFansCard; // @dynamic hasFansCard;
@property(nonatomic) _Bool hasHangerType; // @dynamic hasHangerType;
@property(nonatomic) _Bool hasLevel; // @dynamic hasLevel;
@property(nonatomic) _Bool hasNickName; // @dynamic hasNickName;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(nonatomic) int level; // @dynamic level;
@property(copy, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) GPBInt32Array *tagsArray; // @dynamic tagsArray;
@property(readonly, nonatomic) unsigned long long tagsArray_Count; // @dynamic tagsArray_Count;
@property(nonatomic) unsigned long long userId; // @dynamic userId;

@end

