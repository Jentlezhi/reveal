//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

@class NSDictionary, NSMutableDictionary, NSString, UIActivityIndicatorView, UIImage, UIImageView, UILabel, UIView, YXLiveModel, YXLiveUser, YXLiveUserView;

@interface YXLiveEndViewController : WBViewController
{
    double bigWidth;
    double heightLeftRoom;
    _Bool isSelf;
    _Bool _isFromPlayBack;
    _Bool _following;
    UIImage *_coverImage;
    YXLiveUser *_performerModel;
    NSDictionary *_statInfo;
    NSString *_liveDuration;
    long long _currentIncome;
    YXLiveModel *_liveModel;
    UIImageView *_bacImageView;
    UIImageView *_coverView;
    UIActivityIndicatorView *_indicator;
    YXLiveUserView *_userIconView;
    NSMutableDictionary *_shareInfo;
    UILabel *_videoTimeLabel;
    UIView *_changeLiveCoverView;
}

@property(retain, nonatomic) UIView *changeLiveCoverView; // @synthesize changeLiveCoverView=_changeLiveCoverView;
@property(retain, nonatomic) UILabel *videoTimeLabel; // @synthesize videoTimeLabel=_videoTimeLabel;
@property(retain, nonatomic) NSMutableDictionary *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) YXLiveUserView *userIconView; // @synthesize userIconView=_userIconView;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(nonatomic) _Bool following; // @synthesize following=_following;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIImageView *bacImageView; // @synthesize bacImageView=_bacImageView;
@property(retain, nonatomic) YXLiveModel *liveModel; // @synthesize liveModel=_liveModel;
@property(nonatomic) long long currentIncome; // @synthesize currentIncome=_currentIncome;
@property(retain, nonatomic) NSString *liveDuration; // @synthesize liveDuration=_liveDuration;
@property(nonatomic) _Bool isFromPlayBack; // @synthesize isFromPlayBack=_isFromPlayBack;
@property(retain, nonatomic) NSDictionary *statInfo; // @synthesize statInfo=_statInfo;
@property(retain, nonatomic) YXLiveUser *performerModel; // @synthesize performerModel=_performerModel;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
- (void).cxx_destruct;
- (void)umeng_CloseLiveButton;
- (void)didReceiveMemoryWarning;
- (void)stopIndicator;
- (void)addIndicatorAtY:(double)arg1;
- (void)changeUserFollowWithButton:(id)arg1 isError:(_Bool)arg2;
- (void)sendLive;
- (void)liveButtonClick:(id)arg1;
- (void)addBottomView;
- (void)btnShareClick:(id)arg1;
- (void)btnMoreClick:(id)arg1;
- (void)addMyLiveBottomView;
- (void)changeHeaderBtn;
- (void)updateWithStatInfo:(id)arg1;
- (void)addCenterView;
- (void)initView;
- (void)initBG;
- (void)btnCloseClick:(id)arg1;
- (void)initNav;
- (void)UIDetermine;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)hideStatusBarForWB:(_Bool)arg1;
- (id)initWithLiveModel:(id)arg1;

@end

