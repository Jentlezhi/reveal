//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayer.h>

#import "WBFAVPlayer-Protocol.h"

@class NSString;
@protocol WBFAVPlayerItem;

@interface AVPlayer (WBFAdditions) <WBFAVPlayer>
+ (Class)playerItemClass;
@property(readonly, nonatomic) double pauseTimestamp;
- (void)resetPropertiesWithPlayer:(id)arg1;
- (_Bool)supportsPropertiesResettingFromOtherPlayer;

// Remaining properties
@property(readonly, nonatomic) id <WBFAVPlayerItem> currentItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) float rate;
@property(readonly, nonatomic) long long status;
@property(readonly) Class superclass;
@property(nonatomic) float volume;
@end

