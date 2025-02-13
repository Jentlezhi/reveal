//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBStoryStateListener-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WBStoryStateAnnouncer : NSObject <WBStoryStateListener>
{
    NSMutableDictionary *_listenerDict;
}

@property(retain, nonatomic) NSMutableDictionary *listenerDict; // @synthesize listenerDict=_listenerDict;
- (void).cxx_destruct;
- (void)storyStateManager:(id)arg1 didUpdateState:(long long)arg2 forKey:(id)arg3;
- (void)removeListener:(id)arg1 forKey:(id)arg2;
- (void)addListener:(id)arg1 forKey:(id)arg2;
- (id)listenersForKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

