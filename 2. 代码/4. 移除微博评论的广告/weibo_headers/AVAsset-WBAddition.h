//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@interface AVAsset (WBAddition)
+ (id)wb_videoInfoWithPath:(id)arg1;
- (_Bool)wb_needsCompressWithTargetBitrate:(long long)arg1 targetResolution:(long long)arg2;
- (unsigned long long)wb_videoEstimatedFileBytes;
- (id)wb_videoInfo;
- (_Bool)wb_isVertial;
- (struct CGSize)wb_realSize;
@end

