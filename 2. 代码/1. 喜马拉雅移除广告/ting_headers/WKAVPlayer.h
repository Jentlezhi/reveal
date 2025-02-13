//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKAudioPlayerProtocol-Protocol.h"

@class AVPlayer, AVPlayerItem, NSString;
@protocol WKAudioPlayerDelegate;

@interface WKAVPlayer : NSObject <WKAudioPlayerProtocol>
{
    _Bool _readyToPlay;
    _Bool _playWhenReadyToPlay;
    _Bool _isSeeking;
    double _seekingTime;
    _Bool _didStartToPlay;
    _Bool _smoothSeeking;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    double _cachedProcess;
    double _smoothTime;
    id <WKAudioPlayerDelegate> _delegate;
}

@property(nonatomic) __weak id <WKAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double smoothTime; // @synthesize smoothTime=_smoothTime;
@property(nonatomic) _Bool smoothSeeking; // @synthesize smoothSeeking=_smoothSeeking;
@property(nonatomic) double cachedProcess; // @synthesize cachedProcess=_cachedProcess;
@property(readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)setPlayRate:(double)arg1;
- (double)currentTime;
- (double)duration;
- (void)stop;
- (void)resumeAtTime:(double)arg1;
- (void)resume;
- (void)pause;
- (void)seekToTime:(double)arg1;
- (void)playAtTime:(double)arg1;
- (void)replay;
- (void)play;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerItemFailedToPlayToEndTime:(id)arg1;
- (void)playerItemDidPlayToEndTime:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

