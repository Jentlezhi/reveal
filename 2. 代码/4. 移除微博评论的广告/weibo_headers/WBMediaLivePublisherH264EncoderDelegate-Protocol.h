//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, WBMediaLivePacket, WBMediaLivePublisherH264Encoder;

@protocol WBMediaLivePublisherH264EncoderDelegate <NSObject>
- (void)videoEncoder:(WBMediaLivePublisherH264Encoder *)arg1 sps:(NSData *)arg2 pps:(NSData *)arg3;
- (void)videoEncoder:(WBMediaLivePublisherH264Encoder *)arg1 videoPacket:(WBMediaLivePacket *)arg2;
@end

