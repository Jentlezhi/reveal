//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCoroutine.h"

@class COActorChan;

@interface COActor : COCoroutine
{
    COActorChan *_messageChan;
    CDUnknownBlockType _exector;
}

+ (id)actorWithBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType exector; // @synthesize exector=_exector;
- (void).cxx_destruct;
- (void)execute;
- (id)sendMessage:(id)arg1;
@property(readonly, nonatomic) COActorChan *messageChan; // @synthesize messageChan=_messageChan;

@end

