//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "XMAppAudioAction-Protocol.h"

@class AVAudioPlayer, NSString, NSTimer, XMADAVView, XMADAudioItem, XMAVPlayer, XMAVPlayerView;
@protocol XMADPlayerVideoViewProtocol;

@interface XMADAudioPlayer : NSObject <AVAudioPlayerDelegate, XMAppAudioAction>
{
    _Bool isSoundPlay;
    long long playStatus;
    _Bool isBuffering;
    _Bool _isRunningAnchorAudioItemOnTheEndOfTrack;
    float timerInterval;
    float volumeChangingTimeLong;
    float minVolume;
    float maxVolume;
    XMADAVView *_videoView;
    _Bool _downloadFailed;
    CDUnknownBlockType _playDoneBlock;
    XMADAudioItem *_audioItem;
    unsigned long long _sourceType;
    CDUnknownBlockType _adAudioPlayerCountDown;
    CDUnknownBlockType _adAudioPlayerPrepared;
    AVAudioPlayer *_audioPlayer;
    long long _soundId;
    NSTimer *_volumeTimer;
    NSTimer *_countDownTimer;
    XMAVPlayer *_avPlayer;
}

+ (void)setAdAudioPlayerToBufferingStatus;
+ (_Bool)createDirectoryAtPath:(id)arg1;
+ (_Bool)directoryExists:(id)arg1;
+ (void)deleteFile:(id)arg1;
+ (id)fileCreationDate:(id)arg1;
+ (id)preloadVideoWithUrl:(id)arg1 andComplete:(CDUnknownBlockType)arg2;
+ (_Bool)preloadSoundWithUrl:(id)arg1 andComplete:(CDUnknownBlockType)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedPlayer;
@property(retain, nonatomic) XMAVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) NSTimer *volumeTimer; // @synthesize volumeTimer=_volumeTimer;
@property(nonatomic) long long soundId; // @synthesize soundId=_soundId;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(readonly, nonatomic) _Bool downloadFailed; // @synthesize downloadFailed=_downloadFailed;
@property(copy, nonatomic) CDUnknownBlockType adAudioPlayerPrepared; // @synthesize adAudioPlayerPrepared=_adAudioPlayerPrepared;
@property(copy, nonatomic) CDUnknownBlockType adAudioPlayerCountDown; // @synthesize adAudioPlayerCountDown=_adAudioPlayerCountDown;
@property(readonly, nonatomic) XMAVPlayerView<XMADPlayerVideoViewProtocol> *videoView; // @synthesize videoView=_videoView;
@property(readonly, nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) XMADAudioItem *audioItem; // @synthesize audioItem=_audioItem;
@property(copy, nonatomic) CDUnknownBlockType playDoneBlock; // @synthesize playDoneBlock=_playDoneBlock;
- (void).cxx_destruct;
- (_Bool)playSourceIsExistWithUrlStr:(id)arg1 andType:(unsigned long long)arg2;
- (void)appSessionOnInterruptted:(unsigned long long)arg1;
- (void)appSessionOnRouteChange:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (_Bool)appSessionWasPreemptedByOther;
- (void)pauseAdWhenInterrupt;
- (void)enterBackground;
- (void)playVideoWithUrl:(id)arg1;
- (void)endAudioPlayerInAdvance;
- (void)resetAudioPlayer;
- (void)didSoundTrackStart;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)playerWillPlaying:(id)arg1;
- (void)onSleepTimerExpired;
- (void)countDown:(id)arg1;
@property(readonly, nonatomic) long long countDown;
- (void)playAudio:(id)arg1;
- (id)adAudioDirectory;
- (void)checkAndRemoveAudioCache;
- (_Bool)isRunningAnchorAudioItemOnTheEndOfTrack;
- (_Bool)isPlayerRunningSound:(id)arg1;
- (_Bool)isRunningSoundLogo;
- (_Bool)isBuffering;
- (_Bool)isPlayerRunning;
- (_Bool)isPlaying;
- (void)pause;
- (void)playAdSound:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

