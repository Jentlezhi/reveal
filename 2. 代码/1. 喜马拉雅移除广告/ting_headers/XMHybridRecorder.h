//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class NSString, NSTimer, XMHCapRecorderMonitor, XMHybridViewController, XMRecordModelIndex, XMRecorderManager;

@interface XMHybridRecorder : NSObject <AVAudioPlayerDelegate>
{
    _Bool _recording;
    double _recordTime;
    double _playTime;
    XMHCapRecorderMonitor *_monitor;
    XMHybridViewController *_hybridViewController;
    unsigned long long _recordPlayState;
    XMRecorderManager *_recorderManger;
    XMRecordModelIndex *_recordIndex;
    NSTimer *_recordTimer;
    NSTimer *_playTimer;
    NSString *_status;
}

@property(nonatomic) _Bool recording; // @synthesize recording=_recording;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSTimer *playTimer; // @synthesize playTimer=_playTimer;
@property(retain, nonatomic) NSTimer *recordTimer; // @synthesize recordTimer=_recordTimer;
@property(retain, nonatomic) XMRecordModelIndex *recordIndex; // @synthesize recordIndex=_recordIndex;
@property(retain, nonatomic) XMRecorderManager *recorderManger; // @synthesize recorderManger=_recorderManger;
@property(nonatomic) unsigned long long recordPlayState; // @synthesize recordPlayState=_recordPlayState;
@property(nonatomic) __weak XMHybridViewController *hybridViewController; // @synthesize hybridViewController=_hybridViewController;
@property(retain, nonatomic) XMHCapRecorderMonitor *monitor; // @synthesize monitor=_monitor;
@property(readonly, nonatomic) double playTime; // @synthesize playTime=_playTime;
@property(readonly, nonatomic) double recordTime; // @synthesize recordTime=_recordTime;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updatePlayTime;
- (void)checkOverTime;
- (double)maxTime;
- (void)combineCallback:(CDUnknownBlockType)arg1;
- (void)combinRecordWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)setPlayTime:(double)arg1;
- (void)setRecordTime:(double)arg1;
- (void)invalidatePlayTimer;
- (void)invalidateRecordTimer;
- (void)_stopVoice;
- (void)_resumeVoice;
- (void)_pauseVoice;
- (void)_playVoice;
- (void)_resumeRecord;
- (void)_pauseRecord:(CDUnknownBlockType)arg1;
- (void)_startRecord;
- (void)playRecordVoiceFinished:(id)arg1;
- (void)playRecordFile;
- (void)startRecording;
- (void)startRecorder;
- (void)stopWorking;
- (id)recordIdFor:(id)arg1;
- (void)createNewRecordIndex;
- (void)resetRecordResource;
- (void)onPlayVoiceEnd;
- (void)onPlayVoiceResume;
- (void)onPlayVoicePause;
- (void)onPlayVoiceStateChange;
- (void)onPlayVoiceStart;
- (void)onRecordEnd;
- (void)onRecordResume;
- (void)onRecordPause;
- (void)onRecordStateChange;
- (void)onRecordStart;
- (void)recorderMonitorCallbackWithType:(id)arg1;
- (id)currentRecordInfo;
- (void)stopVoiceWithHybridCallback:(CDUnknownBlockType)arg1;
- (void)resumeVoiceWithHybridCallback:(CDUnknownBlockType)arg1;
- (void)pauseVoiceWithHybridCallback:(CDUnknownBlockType)arg1;
- (void)playVoiceWithHybridCallback:(CDUnknownBlockType)arg1;
- (void)stopRecordAndCombineWithFinishBlock:(CDUnknownBlockType)arg1;
- (double)fileSizeForRecord:(id)arg1;
- (void)stopRecordWithHybridCallback:(CDUnknownBlockType)arg1;
- (void)resumeRecordWithHybridCallback:(CDUnknownBlockType)arg1;
- (void)pauseRecordWithHybridCallback:(CDUnknownBlockType)arg1;
- (void)startRecordWithHybridCallback:(CDUnknownBlockType)arg1;
- (id)checkRecordPlayProcess:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

