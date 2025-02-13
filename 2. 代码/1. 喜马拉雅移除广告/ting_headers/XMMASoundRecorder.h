//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioRecorderDelegate-Protocol.h"

@class AVAudioRecorder, NSPointerArray, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface XMMASoundRecorder : NSObject <AVAudioRecorderDelegate>
{
    NSString *_audioFilePath;
    AVAudioRecorder *_recorder;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSPointerArray *_delegates;
    NSTimer *_countDownTimer;
    CDStruct_896004a1 _config;
}

+ (id)shared;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) NSPointerArray *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) AVAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) CDStruct_896004a1 config; // @synthesize config=_config;
@property(readonly, nonatomic) NSString *audioFilePath; // @synthesize audioFilePath=_audioFilePath;
- (void).cxx_destruct;
- (id)tmpAudioFilePath;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)timeUpdate:(id)arg1;
- (void)cancelTimer;
- (void)startTimer;
@property(readonly, nonatomic) double audioDuration;
- (_Bool)isRecording;
- (void)stop:(CDUnknownBlockType)arg1;
- (void)pause;
- (void)start;
- (id)init;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (_Bool)isConfigValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

