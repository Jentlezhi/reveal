//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, WBMediaLivePublisherVideoConfiguration;
@protocol WBMediaLivePublisherH264EncoderDelegate;

@interface WBMediaLivePublisherH264Encoder : NSObject
{
    id <WBMediaLivePublisherH264EncoderDelegate> _delegate;
    WBMediaLivePublisherVideoConfiguration *_configuration;
    struct OpaqueVTCompressionSession *_compressionSession;
    long long _frameCount;
    NSData *_sps;
    NSData *_pps;
}

@property(retain, nonatomic) NSData *pps; // @synthesize pps=_pps;
@property(retain, nonatomic) NSData *sps; // @synthesize sps=_sps;
@property(nonatomic) long long frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) struct OpaqueVTCompressionSession *compressionSession; // @synthesize compressionSession=_compressionSession;
@property(retain, nonatomic) WBMediaLivePublisherVideoConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <WBMediaLivePublisherH264EncoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cleanCompressionSession;
- (void)setupCompressionSession;
- (void)encodeVideoData:(struct opaqueCMSampleBuffer *)arg1;
- (void)resetVideoConfiguration:(id)arg1;
- (id)initWithVideoConfiguration:(id)arg1;
- (void)dealloc;

@end

