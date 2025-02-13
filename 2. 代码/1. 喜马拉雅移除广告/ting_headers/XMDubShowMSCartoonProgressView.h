//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UISlider;

@interface XMDubShowMSCartoonProgressView : UIView
{
    double _duration;
    CDUnknownBlockType _progressChanged;
    UISlider *_sliderView;
    UILabel *_beginLabel;
    UILabel *_endLabel;
}

@property(retain, nonatomic) UILabel *endLabel; // @synthesize endLabel=_endLabel;
@property(retain, nonatomic) UILabel *beginLabel; // @synthesize beginLabel=_beginLabel;
@property(retain, nonatomic) UISlider *sliderView; // @synthesize sliderView=_sliderView;
@property(copy, nonatomic) CDUnknownBlockType progressChanged; // @synthesize progressChanged=_progressChanged;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (_Bool)isTracking;
- (void)onSliderValChanged:(id)arg1 forEvent:(id)arg2;
- (void)setProgress:(double)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

