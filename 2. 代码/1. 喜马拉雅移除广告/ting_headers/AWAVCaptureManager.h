//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWAVCapture, AWAudioConfig, AWGPUImageAVCapture, AWSystemAVCapture, AWVideoConfig;

@interface AWAVCaptureManager : NSObject
{
    long long _captureType;
    AWAVCapture *_avCapture;
    unsigned long long _audioEncoderType;
    unsigned long long _videoEncoderType;
    AWAudioConfig *_audioConfig;
    AWVideoConfig *_videoConfig;
    AWGPUImageAVCapture *_gpuImageAvCapture;
    AWSystemAVCapture *_systemAvCapture;
    struct CGRect _cameraRect;
}

@property(nonatomic) struct CGRect cameraRect; // @synthesize cameraRect=_cameraRect;
@property(retain, nonatomic) AWSystemAVCapture *systemAvCapture; // @synthesize systemAvCapture=_systemAvCapture;
@property(retain, nonatomic) AWGPUImageAVCapture *gpuImageAvCapture; // @synthesize gpuImageAvCapture=_gpuImageAvCapture;
@property(retain, nonatomic) AWVideoConfig *videoConfig; // @synthesize videoConfig=_videoConfig;
@property(retain, nonatomic) AWAudioConfig *audioConfig; // @synthesize audioConfig=_audioConfig;
@property(nonatomic) unsigned long long videoEncoderType; // @synthesize videoEncoderType=_videoEncoderType;
@property(nonatomic) unsigned long long audioEncoderType; // @synthesize audioEncoderType=_audioEncoderType;
@property(nonatomic) __weak AWAVCapture *avCapture; // @synthesize avCapture=_avCapture;
@property(nonatomic) long long captureType; // @synthesize captureType=_captureType;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

