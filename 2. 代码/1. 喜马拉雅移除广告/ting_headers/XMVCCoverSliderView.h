//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMVCImageSliderDelegate-Protocol.h"

@class NSString, NvsMultiThumbnailSequenceView, UIImageView, UILabel, XMVCImageSlider;
@protocol XMVCCoverSliderViewDelegate;

@interface XMVCCoverSliderView : UIView <XMVCImageSliderDelegate>
{
    long long _duration;
    long long _current;
    id <XMVCCoverSliderViewDelegate> _delegate;
    UIImageView *_imageView;
    XMVCImageSlider *_sliderView;
    NvsMultiThumbnailSequenceView *_sequenceView;
    UILabel *_titleLabel;
    UIView *_lineView;
    UILabel *_tipLabel;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NvsMultiThumbnailSequenceView *sequenceView; // @synthesize sequenceView=_sequenceView;
@property(retain, nonatomic) XMVCImageSlider *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <XMVCCoverSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long current; // @synthesize current=_current;
- (void).cxx_destruct;
- (void)updateImageView;
- (void)setTimeline:(id)arg1;
- (id)thumbnailSequenceDescArrayWithTimeline:(id)arg1;
- (void)imageSliderDidEndChange:(id)arg1;
- (void)imageSlider:(id)arg1 didChange:(double)arg2;
- (void)confSlider;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

