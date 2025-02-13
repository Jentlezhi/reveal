//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBMediaPlaybackControlling-Protocol.h"

@class NSString, NSTimer, UIImageView, UILabel, UIView, WBContentImageView, WBSlideGradientColorView, WBSlidesImagePlaybackLog, WBUIControl, WBView;
@protocol WBMediaPlaybackItem, WBMediaPlaybackSourceView;

@interface WBSlidesImagePlaybackController : NSObject <WBMediaPlaybackControlling>
{
    NSTimer *_timer;
    _Bool _isPlaying;
    _Bool _containerViewHidden;
    _Bool _enlargeStyle;
    UIView<WBMediaPlaybackSourceView> *_sourceView;
    id <WBMediaPlaybackItem> _playbackItem;
    WBSlidesImagePlaybackLog *_playbackLog;
    WBView *_containerView;
    WBSlideGradientColorView *_maskView;
    WBContentImageView *_coverImageView;
    WBContentImageView *_slidesImageView;
    WBContentImageView *_iconView;
    UIImageView *_waterMarkImageView;
    UILabel *_titleLabel;
    WBUIControl *_maskButton;
}

@property(nonatomic) _Bool enlargeStyle; // @synthesize enlargeStyle=_enlargeStyle;
@property(nonatomic) _Bool containerViewHidden; // @synthesize containerViewHidden=_containerViewHidden;
@property(retain, nonatomic) WBUIControl *maskButton; // @synthesize maskButton=_maskButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *waterMarkImageView; // @synthesize waterMarkImageView=_waterMarkImageView;
@property(retain, nonatomic) WBContentImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WBContentImageView *slidesImageView; // @synthesize slidesImageView=_slidesImageView;
@property(retain, nonatomic) WBContentImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) WBSlideGradientColorView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) WBView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WBSlidesImagePlaybackLog *playbackLog; // @synthesize playbackLog=_playbackLog;
@property(retain, nonatomic) id <WBMediaPlaybackItem> playbackItem; // @synthesize playbackItem=_playbackItem;
@property(retain, nonatomic) UIView<WBMediaPlaybackSourceView> *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void).cxx_destruct;
- (void)playbackDidFinishWithError:(id)arg1;
- (void)playbackDidBeginWithPlayReason:(long long)arg1;
@property(readonly, nonatomic) id <WBMediaPlaybackItem> currentPlaybackItem;
@property(readonly, nonatomic) _Bool mediaPlaybackViewAttachedToSourceView;
@property(readonly, nonatomic) UIView *view;
- (_Bool)finishMediaPlayback;
- (_Bool)startMediaPlaybackWithPlaybackItem:(id)arg1 sourceView:(id)arg2 reason:(long long)arg3;
- (void)updateDisplayAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)validToPlayNext;
- (void)timerAction;
- (void)stopTimer;
- (void)startTimer;
- (void)viewWillLayoutSubViews;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool tableViewScrolling;

@end

