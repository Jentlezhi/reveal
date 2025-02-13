//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface XMRecordBGMHistManager : NSObject
{
    double _lastVolume;
    NSMutableArray *_bgmHistory;
    unsigned long long _lastVolumeChangeStatus;
    NSMutableArray *_volumeHistory;
}

@property(retain, nonatomic) NSMutableArray *volumeHistory; // @synthesize volumeHistory=_volumeHistory;
@property(nonatomic) unsigned long long lastVolumeChangeStatus; // @synthesize lastVolumeChangeStatus=_lastVolumeChangeStatus;
@property(retain, nonatomic) NSMutableArray *bgmHistory; // @synthesize bgmHistory=_bgmHistory;
- (void).cxx_destruct;
- (void)reportUsedBGM;
- (id)volumeClipToTime:(double)arg1;
- (id)clipToCurrentTime;
- (void)clean;
- (void)BGMStopped;
- (void)addNewBGMHistoryWithSound:(id)arg1;
- (void)addBGMHistVolume:(double)arg1 type:(unsigned long long)arg2;
- (void)addNewBGMHistoryWithSound:(id)arg1 startAtTime:(double)arg2;
- (id)init;
- (void)dealloc;

@end

