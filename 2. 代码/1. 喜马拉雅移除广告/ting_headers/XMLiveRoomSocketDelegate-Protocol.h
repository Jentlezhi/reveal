//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, XChatMessage, XMLiveRoomSocket;

@protocol XMLiveRoomSocketDelegate <NSObject>
- (void)liveRoomSocketCSUnreachable:(XMLiveRoomSocket *)arg1;
- (void)liveRoomSocket:(XMLiveRoomSocket *)arg1 recvHistoryMsgs:(NSArray *)arg2;
- (void)liveRoomSocket:(XMLiveRoomSocket *)arg1 recvNewMsg:(XChatMessage *)arg2;
- (void)liveRoomSocket:(XMLiveRoomSocket *)arg1 recvNewChatMsg:(XChatMessage *)arg2;
@end

