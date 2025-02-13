//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;
@protocol AQRecorderDelegate;

@interface AQRecorder : NSObject
{
    id <AQRecorderDelegate> delegate;
    NSString *mFileName;
    NSString *mPath;
    struct OpaqueAudioQueue *mQueue;
    struct AudioQueueBuffer *mBuffers[3];
    struct OpaqueAudioFileID *mRecordFile;
    long long mRecordPacket;
    struct AudioStreamBasicDescription mRecordFormat;
    _Bool mIsRunning;
    void *mAmr;
    NSMutableData *mData;
    int mOffset;
    NSMutableData *mEncodedData;
    int mEncodedOffset;
    _Bool meteringEnabled;
}

@property(copy, nonatomic) NSString *mFileName; // @synthesize mFileName;
@property(copy, nonatomic) NSString *mPath; // @synthesize mPath;
@property(retain, nonatomic) NSMutableData *mData; // @synthesize mData;
@property(nonatomic) id <AQRecorderDelegate> delegate; // @synthesize delegate;
@property(nonatomic) long long mRecordPacket; // @synthesize mRecordPacket;
@property(nonatomic) _Bool mIsRunning; // @synthesize mIsRunning;
@property(nonatomic) _Bool meteringEnabled; // @synthesize meteringEnabled;
- (float)currentTime;
- (float)peakPower;
- (float)averagePower;
- (void)prepareToRecord;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (void)ProcessData;
- (void)didRecordPartialData:(id)arg1;
- (void)postStop;
- (void)stop;
- (void)record;
- (void)SetupAudioFormat:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (int)ComputeRecordBufferSize:(const struct AudioStreamBasicDescription *)arg1 duration:(float)arg2;

@end

