//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GDTPlayer, GDTPlayerControlView, GDTVideoConfig, NSString, NSURL;
@protocol GDTVideoPlayerViewDelegate;

@interface GDTVideoPlayerView : UIView
{
    _Bool _hiddenLogoButton;
    _Bool _hasDirectVideoTypeExposed;
    id <GDTVideoPlayerViewDelegate> _delegate;
    GDTPlayer *_playerController;
    NSURL *_assetURL;
    NSString *_coverImageUrlString;
    GDTVideoConfig *_videoConfig;
    GDTPlayerControlView *_playerControlView;
    unsigned long long _oldMediaPlayerStatus;
    UIView *_videoPlayerContainer;
}

@property(retain, nonatomic) UIView *videoPlayerContainer; // @synthesize videoPlayerContainer=_videoPlayerContainer;
@property(nonatomic) _Bool hasDirectVideoTypeExposed; // @synthesize hasDirectVideoTypeExposed=_hasDirectVideoTypeExposed;
@property(nonatomic) unsigned long long oldMediaPlayerStatus; // @synthesize oldMediaPlayerStatus=_oldMediaPlayerStatus;
@property(retain, nonatomic) GDTPlayerControlView *playerControlView; // @synthesize playerControlView=_playerControlView;
@property(retain, nonatomic) GDTVideoConfig *videoConfig; // @synthesize videoConfig=_videoConfig;
@property(nonatomic) _Bool hiddenLogoButton; // @synthesize hiddenLogoButton=_hiddenLogoButton;
@property(retain, nonatomic) NSString *coverImageUrlString; // @synthesize coverImageUrlString=_coverImageUrlString;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) GDTPlayer *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) __weak id <GDTVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned long long sceneType;
@property(nonatomic) _Bool videoMuted;
@property(readonly, nonatomic) double videoPlayTime;
@property(readonly, nonatomic) double videoDuration;
@property(readonly, nonatomic, getter=isFullScreen) _Bool fullScreen;
@property(readonly, nonatomic) double totalTime;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) unsigned long long playState;
- (void)showControls;
- (void)hideControls;
- (void)seekToTime:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setPlayButtonImage:(id)arg1 size:(struct CGSize)arg2;
- (void)stop;
- (void)reset;
- (void)pause;
- (void)play;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

