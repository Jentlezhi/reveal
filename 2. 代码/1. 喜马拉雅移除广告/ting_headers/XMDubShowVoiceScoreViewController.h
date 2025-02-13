//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

@class UIButton, UIImageView, UILabel, UIScrollView, XMDubShowVoiceScoreSrcView, XMDubVideoInfo, XMRecordModel;

@interface XMDubShowVoiceScoreViewController : XMBaseVC
{
    XMRecordModel *_recordIndex;
    XMDubVideoInfo *_videoInfo;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIScrollView *_scrollView;
    UIImageView *_coverImageView;
    UIImageView *_levelImageView;
    UILabel *_scoreLabel;
    UILabel *_scoreTipLabel;
    UILabel *_percentLabel;
    UILabel *_percentTipLabel;
    UILabel *_maxScoreLabel;
    XMDubShowVoiceScoreSrcView *_scoreSrcView;
    UIButton *_shareButton;
    UIImageView *_lightView;
}

@property(retain, nonatomic) UIImageView *lightView; // @synthesize lightView=_lightView;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) XMDubShowVoiceScoreSrcView *scoreSrcView; // @synthesize scoreSrcView=_scoreSrcView;
@property(retain, nonatomic) UILabel *maxScoreLabel; // @synthesize maxScoreLabel=_maxScoreLabel;
@property(retain, nonatomic) UILabel *percentTipLabel; // @synthesize percentTipLabel=_percentTipLabel;
@property(retain, nonatomic) UILabel *percentLabel; // @synthesize percentLabel=_percentLabel;
@property(retain, nonatomic) UILabel *scoreTipLabel; // @synthesize scoreTipLabel=_scoreTipLabel;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UIImageView *levelImageView; // @synthesize levelImageView=_levelImageView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) XMDubVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) XMRecordModel *recordIndex; // @synthesize recordIndex=_recordIndex;
- (void).cxx_destruct;
- (void)ligthAnimation;
- (void)shared;
- (void)p_handleShareAction;
- (id)fetchConfigureVoiceScoreStr:(id)arg1;
- (void)updateUI;
- (void)customInit;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;

@end

