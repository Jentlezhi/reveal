//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMResponseInfo, NSDictionary, NSMutableArray;

@interface MMChatsInfo : NSObject
{
    int _totalCount;
    MMResponseInfo *_responseInfo;
    NSMutableArray *_chats;
    NSDictionary *_userInfo;
}

@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSMutableArray *chats; // @synthesize chats=_chats;
@property(retain, nonatomic) MMResponseInfo *responseInfo; // @synthesize responseInfo=_responseInfo;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

