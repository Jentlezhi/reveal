//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBFeedHomeNavEvent : NSObject
{
    unsigned long long _eventType;
    NSString *_eventID;
    id _directMessageOwner;
}

+ (id)eventWithEnventType:(unsigned long long)arg1 andDirectMessageOwner:(id)arg2;
+ (id)eventWithEnventType:(unsigned long long)arg1;
@property(nonatomic) __weak id directMessageOwner; // @synthesize directMessageOwner=_directMessageOwner;
@property(readonly, copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)eventTypeKey;
- (id)initWithEventType:(unsigned long long)arg1 andDirectMessageOwner:(id)arg2;

@end

