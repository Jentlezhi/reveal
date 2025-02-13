//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBVideoPlaybackEventListener-Protocol.h"

@class NSString, WBVideoPlayerController;

@interface WBVideoPlayerControllerTraceLogManager : NSObject <WBVideoPlaybackEventListener>
{
    WBVideoPlayerController *_playerController;
}

@property(nonatomic) __weak WBVideoPlayerController *playerController; // @synthesize playerController=_playerController;
- (void).cxx_destruct;
- (void)videoPlayerController:(id)arg1 didRequestPlaybackForVideoItem:(id)arg2 reason:(long long)arg3;
- (id)initWithPlayerController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

