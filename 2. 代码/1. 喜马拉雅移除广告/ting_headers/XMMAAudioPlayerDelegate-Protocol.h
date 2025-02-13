//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError;

@protocol XMMAAudioPlayerDelegate <NSObject>

@optional
- (void)playerFailedWithError:(NSError *)arg1 track:(NSDictionary *)arg2;
- (void)playerDidEndSeeking;
- (void)playerDidBeginSeeking;
- (void)playerDidEndBuffering;
- (void)playerDidBeginBuffering;
- (void)playerDidEnd;
- (void)playerDidStopped;
- (void)playerDidPaused;
- (void)playerDidStart;
- (void)playerWillPlaying;
- (void)playlistDidEnd;
- (void)playProcess:(float)arg1 currentSecond:(unsigned long long)arg2;
@end

