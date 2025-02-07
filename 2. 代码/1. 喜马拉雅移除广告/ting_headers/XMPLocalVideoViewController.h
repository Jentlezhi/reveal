//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPlantBaseViewController.h"

@class AVPlayer, UIButton, UILabel, UIProgressView, UIView, XMPlantCutVoiceModel;

@interface XMPLocalVideoViewController : XMPlantBaseViewController
{
    XMPlantCutVoiceModel *_model;
    UIButton *_backBtn;
    UIButton *_play_btn;
    UIView *_maskView;
    UIView *_videoView;
    AVPlayer *_player;
    UIProgressView *_progressView;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    id _timeObserver;
}

@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *play_btn; // @synthesize play_btn=_play_btn;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) XMPlantCutVoiceModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)onMaskTap;
- (void)onPlay:(id)arg1;
- (void)onPause;
- (void)onBackBtnClick:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)setupUI;
- (void)setupNav;
- (void)viewDidLoad;
- (id)initWithCutVoiceModel:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)appDidEnterBackground;
- (void)onReset;
- (void)videoPlayEnd:(id)arg1;

@end

