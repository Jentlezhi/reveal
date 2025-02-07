//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSArray, UIColor;

@interface XMRecordSoundWaveView : UIView
{
    unsigned long long _maxWaveCount;
    double _columnWidth;
    NSArray *_values;
    double _waveWidth;
    UIColor *_color;
    unsigned long long _index;
    UIView *_container;
    CADisplayLink *_displayLink;
    NSArray *_waveViews;
}

@property(retain, nonatomic) NSArray *waveViews; // @synthesize waveViews=_waveViews;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double waveWidth; // @synthesize waveWidth=_waveWidth;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property(nonatomic) unsigned long long maxWaveCount; // @synthesize maxWaveCount=_maxWaveCount;
- (void).cxx_destruct;
- (void)reset;
- (double)rollingOffset;
- (void)updateHeights:(id)arg1;
- (void)nextFrame;
- (void)pause;
- (void)start;
- (void)setupWaves;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2;
- (void)dealloc;

@end

