//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryPopUpOverlayBaseView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UILabel, UITapGestureRecognizer, UIVisualEffectView, WBStoryVolumeSlider;
@protocol WBStoryPublishVolumeOverlayViewDelegate;

@interface WBStoryPublishVolumeOverlayView : WBStoryPopUpOverlayBaseView <UIGestureRecognizerDelegate>
{
    _Bool _musicSliderEnabled;
    _Bool _videoSliderEnabled;
    id <WBStoryPublishVolumeOverlayViewDelegate> _delegate;
    UIVisualEffectView *_blurView;
    UILabel *_titleLabel;
    UITapGestureRecognizer *_tapGesture;
    WBStoryVolumeSlider *_videoSlider;
    WBStoryVolumeSlider *_musicSlider;
}

@property(retain, nonatomic) WBStoryVolumeSlider *musicSlider; // @synthesize musicSlider=_musicSlider;
@property(retain, nonatomic) WBStoryVolumeSlider *videoSlider; // @synthesize videoSlider=_videoSlider;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic, getter=isVideoSliderEnabled) _Bool videoSliderEnabled; // @synthesize videoSliderEnabled=_videoSliderEnabled;
@property(nonatomic, getter=isMusicSliderEnabled) _Bool musicSliderEnabled; // @synthesize musicSliderEnabled=_musicSliderEnabled;
@property(nonatomic) __weak id <WBStoryPublishVolumeOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateVideoVolume:(double)arg1;
- (void)updateMusicVolume:(double)arg1;
- (void)musicSliderChange:(id)arg1;
- (void)musicSliderTouchDown:(id)arg1;
- (void)videoSliderChange:(id)arg1;
- (void)videoSliderTouchDown:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tapAction;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

