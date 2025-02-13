//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPhcStatisticModel.h"

@class NSString;

@interface XMPhcChaosVideoStatisticModel : XMPhcStatisticModel
{
    _Bool _screenPlay;
    _Bool _playbackProgress;
    long long _videoId;
    long long _feedId;
    long long _startedAt;
    long long _endedAt;
    double _duration;
    long long _pointcutSecond;
    long long _breakSecond;
    NSString *_playType;
    double _videoDuration;
    long long _sendDataTime;
    long long _loadingMillisecond;
    NSString *_playUrl;
    long long _blockCount;
    long long _blockDuration;
    long long _playSource;
    long long _playMode;
    NSString *_recSrc;
    NSString *_recTrack;
    long long _listenedDuration;
}

@property(nonatomic) long long listenedDuration; // @synthesize listenedDuration=_listenedDuration;
@property(retain, nonatomic) NSString *recTrack; // @synthesize recTrack=_recTrack;
@property(retain, nonatomic) NSString *recSrc; // @synthesize recSrc=_recSrc;
@property(nonatomic) long long playMode; // @synthesize playMode=_playMode;
@property(nonatomic) long long playSource; // @synthesize playSource=_playSource;
@property(nonatomic) long long blockDuration; // @synthesize blockDuration=_blockDuration;
@property(nonatomic) long long blockCount; // @synthesize blockCount=_blockCount;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(nonatomic) long long loadingMillisecond; // @synthesize loadingMillisecond=_loadingMillisecond;
@property(nonatomic) long long sendDataTime; // @synthesize sendDataTime=_sendDataTime;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) _Bool playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property(nonatomic) _Bool screenPlay; // @synthesize screenPlay=_screenPlay;
@property(retain, nonatomic) NSString *playType; // @synthesize playType=_playType;
@property(nonatomic) long long breakSecond; // @synthesize breakSecond=_breakSecond;
@property(nonatomic) long long pointcutSecond; // @synthesize pointcutSecond=_pointcutSecond;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long endedAt; // @synthesize endedAt=_endedAt;
@property(nonatomic) long long startedAt; // @synthesize startedAt=_startedAt;
@property(nonatomic) long long feedId; // @synthesize feedId=_feedId;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (id)path;

@end

