//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

#import "WBFAVAsset-Protocol.h"

@class NSArray, NSString;

@interface AVAsset (WBFAdditions) <WBFAVAsset>
@property(readonly, nonatomic) struct CGSize wbf_naturalSize;
@property(readonly, nonatomic) float wbf_estimatedDataRate;

// Remaining properties
@property(readonly, nonatomic) NSArray *availableMediaCharacteristicsWithMediaSelectionOptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

