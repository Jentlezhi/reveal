//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMMessageRange : NSObject
{
    int _chatType;
    long long _chatId;
    long long _leftSide;
    long long _rightSide;
}

+ (id)createMessageRangeWithChat:(long long)arg1 chatType:(int)arg2;
@property(nonatomic) long long rightSide; // @synthesize rightSide=_rightSide;
@property(nonatomic) long long leftSide; // @synthesize leftSide=_leftSide;
@property(nonatomic) int chatType; // @synthesize chatType=_chatType;
@property(nonatomic) long long chatId; // @synthesize chatId=_chatId;

@end

