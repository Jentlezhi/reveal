//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FeedNavHandleProtocol-Protocol.h"

@class NSString;
@protocol FeedNavEventMangerProtocol;

@interface WBNavEventFindFriendsHandler : NSObject <FeedNavHandleProtocol>
{
    id <FeedNavEventMangerProtocol> _navManager;
}

@property(nonatomic) __weak id <FeedNavEventMangerProtocol> navManager; // @synthesize navManager=_navManager;
- (void).cxx_destruct;
- (_Bool)handleEventsAlone:(id)arg1;
- (_Bool)responseEvents:(id)arg1;
- (CDStruct_0a4d7299)buttonItemConfig;
- (void)findFriendButtonPressed;
- (id)buttonItemObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

