//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

#import "WBMusicControlDelegate-Protocol.h"

@class NSString, UIButton, UILabel, WBContentImageView, WBMusicControl, WBPageSquarePhotoCardOverlayLabel, WBTimelineAttributedTextView, WBVideoControl, WBVideoGradientColorView;

@interface WBPageCardVideoView : WBPageCardViewBase <WBMusicControlDelegate>
{
    WBMusicControl *musicControl;
    WBVideoControl *videoControl;
    WBContentImageView *imageView;
    WBPageSquarePhotoCardOverlayLabel *_overlayTextLabel;
    UIButton *_playLiveButton;
    WBTimelineAttributedTextView *_videoTitleLabel;
    WBVideoGradientColorView *_topGradientView;
    WBVideoGradientColorView *_bottomGradientView;
    UILabel *_sourceLabel;
}

+ (struct UIEdgeInsets)edgeInsetsTrendBubbleOffset;
+ (struct UIEdgeInsets)edgeInsetsViewOutside:(id)arg1;
+ (_Bool)allowBubble;
+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) WBVideoGradientColorView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) WBVideoGradientColorView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) WBTimelineAttributedTextView *videoTitleLabel; // @synthesize videoTitleLabel=_videoTitleLabel;
@property(retain, nonatomic) UIButton *playLiveButton; // @synthesize playLiveButton=_playLiveButton;
@property(retain, nonatomic) WBPageSquarePhotoCardOverlayLabel *overlayTextLabel; // @synthesize overlayTextLabel=_overlayTextLabel;
@property(retain, nonatomic) WBContentImageView *imageView; // @synthesize imageView;
- (void).cxx_destruct;
- (void)reloadUIElements;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)dealloc;
- (void)updateVideoSubviews:(id)arg1;
- (void)playButtonPressed:(id)arg1;
- (void)setPageCard:(id)arg1;
- (id)musicControlIdentifier:(id)arg1;
- (void)didForbiddenMusic:(id)arg1;
- (_Bool)shouldForbidMusic:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

